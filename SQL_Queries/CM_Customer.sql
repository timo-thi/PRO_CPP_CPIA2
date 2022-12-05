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
			INNER JOIN Person ON Customer.CLI_ID = Person.PER_ID AND Customer.CLI_ID = @ID;
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
		SET  mail = ISNULL (@mail, mail),
			Date_Birthday = ISNULL (@date_naissance, Date_Birthday),
			Date_First_Order = ISNULL (@date_commande, Date_First_Order)
	WHERE Customer.CLI_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Insert_Customer;
GO

CREATE PROCEDURE Insert_Customer
	@Person_ID int,
	@mail varchar(50),
	@date_naissance date = NULL,
	@date_commande date = NULL
AS
BEGIN
	INSERT INTO Customer (CLI_ID, mail, Date_Birthday, Date_First_Order) VALUES (@Person_ID, @mail, @date_naissance, @date_commande);
END;
GO

DROP PROCEDURE IF EXISTS Delete_Customer;
GO

CREATE PROCEDURE Delete_Customer
	@ID int
AS
BEGIN
	DELETE FROM Customer WHERE CLI_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Delete_delivery_Adress;
GO

CREATE PROCEDURE Delete_delivery_Adress
	@PER int
AS
BEGIN
	DELETE FROM Deliver WHERE PER_ID = @PER;
END
GO


DROP PROCEDURE IF EXISTS Delete_Billing;
GO

CREATE PROCEDURE Delete_Billing
	@PER int
AS
BEGIN
	DELETE FROM Billing WHERE PER_ID = @PER;
END
GO

