USE ProjetPOO;
GO

-- ◦ Identifier les produits sous le seuil de réapprovisionnement
DROP PROCEDURE IF EXISTS Select_Produit_Sous_Seuil;
GO

CREATE PROCEDURE Select_Produit_Sous_Seuil
AS
BEGIN
    SELECT [PRO_Name]
      ,[PRO_Price]
      ,[PRO_Stock]
      ,[PRO_Restock_Threshold]

    FROM [dbo].[Products]
    WHERE Pro_Stock < Pro_Restock_Threshold;
END
GO

-- ◦ Calculer le chiffre d’affaire sur un mois en particulier
DROP PROCEDURE IF EXISTS Select_Chiffre_Mois;
GO

CREATE PROCEDURE Select_Chiffre_Mois
    @Mois int
AS
BEGIN
    SELECT ISNULL((SELECT SUM(Balance) From Bill WHERE MONTH(Bill_Date) = @Mois), 0);
END
GO

-- ◦ Calculer le panier moyen (après remise)
DROP PROCEDURE IF EXISTS Panier_Moyen;
GO

CREATE PROCEDURE Panier_Moyen AS
BEGIN
    SELECT Convert(float, AVG(Sums)) AS Moy FROM (
        SELECT SUM(PRO_Price * amount) Sums
        FROM contain
            INNER JOIN Products ON contain.PRO_ID = Products.PRO_ID
        GROUP BY ORD_ID) AS SumsTable;
END;
GO

-- ◦ Identifier les 10 articles les plus vendus
DROP PROCEDURE IF EXISTS Ten_More_Purchased_Products;
GO

CREATE PROCEDURE Ten_More_Purchased_Products
AS
BEGIN
    SELECT TOP 10 PRO_Name, SUM(amount) AS Qtt_Desc FROM contain
        RIGHT JOIN Products ON contain.PRO_ID = Products.PRO_ID
        WHERE Products.PRO_ID IN (SELECT PRO_ID FROM contain)
        GROUP BY Products.PRO_Name
        -- HAVING count(Products.PRO_ID)*SUM(amount) > NULL
        ORDER BY Qtt_Desc DESC;
END
GO

DROP PROCEDURE IF EXISTS Ten_Less_Purchased_Products;
GO

-- ◦ Identifier les 10 articles les moins vendus
CREATE PROCEDURE Ten_Less_Purchased_Products
AS
BEGIN
    SELECT TOP 10 PRO_Name, SUM(amount) AS Qtt_Asc FROM contain
        RIGHT JOIN Products ON contain.PRO_ID = Products.PRO_ID
        WHERE Products.PRO_ID IN (SELECT PRO_ID FROM contain)
        GROUP BY PRO_Name
        ORDER BY Qtt_Asc ASC;
END
GO


-- ◦ Calculer le montant total des achats pour un client
DROP PROCEDURE IF EXISTS Total_Client;
GO

CREATE PROCEDURE Total_Client @ID int  AS
BEGIN
    SELECT SUM(PRO_Price * amount)
    FROM contain
        INNER JOIN Products ON contain.PRO_ID = Products.PRO_ID
        INNER JOIN Orders ON contain.ORD_ID = Orders.ORD_ID
    WHERE Orders.PER_ID = @ID;
END
GO

-- ◦ Calculer la valeur d’achat du stock
DROP PROCEDURE IF EXISTS Valeur_Ach_Stock;
GO

CREATE PROCEDURE Valeur_Ach_Stock AS
BEGIN
    SELECT SUM(PRO_Price * PRO_Stock)
    FROM Products;
END
GO

-- | ◦ Calculer la valeur commerciale du stock
-- | On utilisera le calcul de la valeur commerciale et application de la tva
-- | ◦ Simuler des variations de valeurs commerciales pour en déduire la valeur du stock
-- |     ▪ Actions possibles : [TVA 1] [TVA 2] [TVA 3] || [margeCommerciale*5%] [margeCommerciale *10%] [margeCommerciale *15%]  || [remiseCommerciale*5%] [remiseCommerciale*6%] || [démarqueInconnue* 2%] [démarqueInconnue* 3%] [démarqueInconnue* 5%]
-- |     ▪ Possibilité pour l’utilisateur de mettre en place une infinité de combinaisons
-- |
-- Fait logiciellement