CREATE PROCEDURE Select_Person @ID int AS
	BEGIN 
	SELECT PER_ID AS ID, PER_NAME AS Prenom, PER_Fname AS Nom FROM Person WHERE PER_ID = @ID
END;
GO

CREATE PROCEDURE Update_Person @prenom varchar(50), @nom varchar(50), @ID int AS
	BEGIN 
	UPDATE Person 
	SET PER_NAME = @prenom, PER_Fname = @nom
	WHERE PER_ID = @ID
END;
GO

CREATE PROCEDURE Insert_Person @prenom varchar(50), @nom varchar(50) AS
	BEGIN
	INSERT INTO Person (PER_NAME, PER_Fname) VALUES (@prenom, @nom)
END;
GO

CREATE PROCEDURE Delete_Person @ID int AS
	BEGIN
	DELETE FROM Person WHERE PER_ID = @ID
END;
GO




CREATE PROCEDURE Select_Staff @ID int AS
	BEGIN 
	SELECT Staff.PER_ID AS ID, Person.PER_NAME AS Prenom, Person.PER_Fname AS Nom, Staff.PER_ID_1 AS Superieur, 
	Staff.DAT_Date AS Date_recrutement, Role.Role_Name AS Role
	
	FROM Staff INNER JOIN Person ON Staff.PER_ID = Person.PER_ID AND Staff.PER_ID = @ID
		INNER JOIN Role ON Staff.ROL_ID = Role.ROL_ID 
END;
GO

CREATE PROCEDURE Update_Staff @ID int, @superieur int = NULL, @role int = NULL AS
	BEGIN 

	UPDATE Staff
		SET PER_ID_1 = ISNULL (@superieur, Staff.PER_ID_1),
			ROL_ID = ISNULL (@role, ROL_ID)
	WHERE Staff.PER_ID = @ID
END;
GO

CREATE PROCEDURE Insert_Staff  @superieur int, @role int, @adresse int, @date date AS
	BEGIN

	INSERT INTO Staff (PER_ID_1, ROL_ID, ADR_ID, DAT_Date) VALUES ( @superieur, @role, @role, @date)
END;
GO

CREATE PROCEDURE Delete_Staff @ID int AS
	BEGIN
	DELETE FROM Staff WHERE PER_ID = @ID
	
	IF  NOT EXISTS (SELECT 1 FROM Customer WHERE PER_ID = @ID)
	BEGIN 
		DELETE FROM Person WHERE PER_ID=@ID
	END
END;
GO





CREATE PROCEDURE Select_Customer @ID int AS
	BEGIN 

	SELECT Person.PER_ID AS ID, Person.PER_NAME AS Prenom, Person.PER_Fname AS Nom, 
	Customer.mail AS Mail, Customer.DAT_Date AS Date_naissance, Customer.DAT_Date_1 AS Date_premiere_commande
	FROM Customer INNER JOIN Person ON Customer.PER_ID = Person.PER_ID AND Customer.PER_ID = @ID

END;
GO

CREATE PROCEDURE Update_Customer @ID int, @mail varchar(50) = NULL, @date_naissance date = NULL, @date_commande date = NULL AS
	BEGIN 

	UPDATE Customer
		SET  mail= ISNULL (@mail, mail),
			DAT_DATE = ISNULL (@date_naissance, DAT_DATE),
			DAT_DATE_1 = ISNULL (@date_commande, DAT_DATE_1)
	WHERE Customer.PER_ID = @ID
END;
GO

CREATE PROCEDURE Insert_Customer  @mail varchar(50), @date_naissance date = NULL, @date_commande date = NULL AS
	BEGIN
	INSERT INTO Customer (mail, DAT_Date, DAT_Date_1) VALUES ( @mail, @date_naissance, @date_commande)
END;
GO

CREATE PROCEDURE Delete_Customer @ID int AS
	BEGIN
	DELETE FROM Customer WHERE PER_ID = @ID
	
	IF  NOT EXISTS (SELECT 1 FROM Staff WHERE PER_ID = @ID)
	BEGIN 
		DELETE FROM Person WHERE PER_ID=@ID
	END
END;
GO





CREATE PROCEDURE Select_Order @ID int AS
	BEGIN 

	SELECT Orders.ORD_ID AS ID, Person.PER_NAME AS Prenom, Person.PER_Fname AS Nom, Orders.DAT_Date AS Date_expedition, DAT_Date_1 AS Date_reception,
	Bill.BILL_ID AS ID_Paiement, Bill.Balance AS Balance, Bill.DAT_Date AS Pay_date, Bill.MOP_Nam AS Method

	FROM Orders INNER JOIN Person ON Orders.PER_ID = Person.PER_ID
	INNER JOIN Bill ON Bill.ORD_ID = Orders.ORD_ID 

	WHERE Orders.ORD_ID=@ID
END;
GO

CREATE PROCEDURE Update_Order @ID int, @date_expedition date, @date_reception date, @client int AS
	BEGIN 

	UPDATE Orders
		SET  DAT_DATE= ISNULL (@date_expedition, DAT_DATE),
			 DAT_DATE_1 = ISNULL (@date_reception, DAT_DATE_1),
			 PER_ID = ISNULL (@client, PER_ID)
	WHERE Orders.ORD_ID = @ID
END;
GO

CREATE PROCEDURE Insert_Order @date_expedition date, @date_reception date, @client int AS
	BEGIN

	INSERT INTO Orders (DAT_DATE, DAT_DATE_1, PER_ID) VALUES ( @date_expedition, @date_reception, @client)
END;
GO

CREATE PROCEDURE Delete_Order @ID int AS
	BEGIN
	DELETE FROM Orders WHERE ORD_ID = @ID
	DELETE FROM Bill WHERE ORD_ID = @ID
END;
GO





CREATE PROCEDURE Select_Bill @ID int AS
	BEGIN 

	SELECT BILL_ID AS ID, Balance, MOP_Nam AS Moyen_paiement, ORD_ID AS Commande, DAT_Date AS Date_reglement
	FROM Bill
	WHERE Bill.BILL_ID=@ID
END;
GO

CREATE PROCEDURE Update_Bill @ID int,@balance int, @MOP varchar(50), @commande varchar(50), @date date AS
	BEGIN 

	UPDATE BILL
		SET  Balance = ISNULL (@balance, Balance),
			 MOP_Nam = ISNULL (@MOP, MOP_Nam),
			 ORD_ID = ISNULL (@commande, ORD_ID),
			 DAT_Date = ISNULL (@date, DAT_Date)
	WHERE Bill.BILL_ID = @ID
END;
GO

CREATE PROCEDURE Insert_Bill @balance int, @MOP varchar(50), @commande varchar(50), @date date AS
	BEGIN

	INSERT INTO Bill (Balance, MOP_Nam, ORD_ID, DAT_Date) VALUES ( @balance, @MOP, @commande, @date)
END;
GO

CREATE PROCEDURE Delete_Bill @ID int AS
	BEGIN
	DELETE FROM Bill WHERE BILL_ID = @ID
END;
GO





CREATE PROCEDURE Select_MOP @name varchar(50) AS
	BEGIN 

	SELECT MOP_Nam FROM Means_Of_Payment
	WHERE Means_Of_Payment.MOP_Nam=@name
END;
GO

CREATE PROCEDURE Update_MOP @name varchar(50) AS
	BEGIN 

	UPDATE Means_Of_Payment
		SET MOP_Nam = @name
	WHERE Means_Of_Payment.MOP_Nam=@name
END;
GO

CREATE PROCEDURE Insert_MOP @name varchar(50) AS
	BEGIN

	INSERT INTO Means_Of_Payment(MOP_Nam) VALUES ( @name)
END;
GO

CREATE PROCEDURE Delete_MOP @name varchar(50) AS
	BEGIN
	DELETE FROM Means_Of_Payment WHERE MOP_Nam = @name
END;