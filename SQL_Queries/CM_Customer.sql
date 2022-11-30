USE ProjetPOO;
GO

DROP PROCEDURE IF EXISTS Select_Customer;
GO

CREATE PROCEDURE Select_Customer
	@ID int
AS
BEGIN 
	SELECT
		Person.PER_ID AS ID,
		Person.PER_NAME AS Prenom,
		Person.PER_Fname AS Nom,
		Customer.mail AS Mail,
		Customer.Date_Birthday AS Date_naissance,
		Customer.Date_First_Order AS Date_premiere_commande
	FROM
		Customer
			INNER JOIN Person ON Customer.PER_ID = Person.PER_ID AND Customer.PER_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Update_Customer;
GO

CREATE PROCEDURE Update_Customer
	@ID int,
	@mail varchar(50) = NULL,
	@date_naissance date = NULL,
	@date_commande date = NULL
AS
BEGIN 
	UPDATE Customer
		SET  mail= ISNULL (@mail, mail),
			Date_Birthday = ISNULL (@date_naissance, Date_Birthday),
			Date_First_Order = ISNULL (@date_commande, Date_First_Order)
	WHERE Customer.PER_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Insert_Customer;
GO

CREATE PROCEDURE Insert_Customer
	@mail varchar(50),
	@date_naissance date = NULL,
	@date_commande date = NULL
AS
BEGIN
	INSERT INTO Customer (mail, Date_Birthday, Date_First_Order) VALUES ( @mail, @date_naissance, @date_commande);
END;
GO

DROP PROCEDURE IF EXISTS Delete_Customer;
GO

CREATE PROCEDURE Delete_Customer
	@ID int
AS
BEGIN
	DELETE FROM Customer WHERE PER_ID = @ID;
	
	IF  NOT EXISTS (SELECT 1 FROM Staff WHERE PER_ID = @ID)
		DELETE FROM Person WHERE PER_ID=@ID;
END
GO