USE ProjetPOO;
GO

DROP PROCEDURE IF EXISTS Select_Order;
GO

CREATE PROCEDURE Select_Order
	@ID int
AS
BEGIN 
	SELECT
		Orders.ORD_ID AS ID,
		Person.PER_NAME AS Prenom,
		Person.PER_Fname AS Nom,
		Orders.ORD_Sent AS Date_expedition,
		ORD_Delivery AS Date_reception,
		Bill.BILL_ID AS ID_Paiement,
		Bill.Balance AS Balance,
		Bill.Bill_Date AS Pay_date,
		Bill.MOP_Nam AS Method
	FROM
		Orders
			INNER JOIN Person ON Orders.PER_ID = Person.PER_ID
				INNER JOIN Bill ON Bill.ORD_ID = Orders.ORD_ID 

	WHERE Orders.ORD_ID=@ID;
END
GO

DROP PROCEDURE IF EXISTS Update_Order;
GO

CREATE PROCEDURE Update_Order
	@ID int,
	@date_expedition date = NULL,
	@date_reception date = NULL,
	@client int = NULL
AS
BEGIN 
	UPDATE Orders
		SET  ORD_Sent = ISNULL (@date_expedition, ORD_Sent),
			 ORD_Delivery = ISNULL (@date_reception, ORD_Delivery),
			 PER_ID = ISNULL (@client, PER_ID)
	WHERE Orders.ORD_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Insert_Order;
GO

CREATE PROCEDURE Insert_Order
	@date_expedition date,
	@date_reception date,
	@client int
AS
BEGIN
	INSERT INTO Orders (ORD_Sent, ORD_Delivery, PER_ID) VALUES ( @date_expedition, @date_reception, @client);
END
GO

DROP PROCEDURE IF EXISTS Delete_Order;
GO

CREATE PROCEDURE Delete_Order
	@ID int
AS
BEGIN
	DELETE FROM Orders WHERE ORD_ID = @ID;
	DELETE FROM Bill WHERE ORD_ID = @ID;
END
GO





DROP PROCEDURE IF EXISTS Select_Bill;
GO

CREATE PROCEDURE Select_Bill
	@ID int
AS
BEGIN 
	SELECT
		BILL_ID AS ID,
		Balance, MOP_Nam AS Moyen_paiement,
		ORD_ID AS Commande,
		Bill_Date AS Date_reglement
	FROM Bill
	WHERE Bill.BILL_ID=@ID;
END
GO

DROP PROCEDURE IF EXISTS Update_Bill;
GO

CREATE PROCEDURE Update_Bill
	@ID int,
	@balance int,
	@MOP varchar(50),
	@commande varchar(50),
	@date date
AS
BEGIN
	UPDATE BILL
		SET  Balance = ISNULL (@balance, Balance),
			 MOP_Nam = ISNULL (@MOP, MOP_Nam),
			 ORD_ID = ISNULL (@commande, ORD_ID),
			 Bill_Date = ISNULL (@date, Bill_Date)
	WHERE Bill.BILL_ID = @ID
END;
GO

DROP PROCEDURE IF EXISTS Insert_Bill;
GO

CREATE PROCEDURE Insert_Bill
	@balance int,
	@MOP varchar(50),
	@commande varchar(50),
	@date date = NULL
AS
BEGIN
	INSERT INTO Bill (Balance, MOP_Nam, ORD_ID, Bill_Date) VALUES (@balance, @MOP, @commande, @date);
END
GO

DROP PROCEDURE IF EXISTS Delete_Bill;
GO

CREATE PROCEDURE Delete_Bill
	@ID int
AS
BEGIN
	DELETE FROM Bill WHERE BILL_ID = @ID;
END
GO





DROP PROCEDURE IF EXISTS Select_MOP;
GO

CREATE PROCEDURE Select_MOP
	@name varchar(50)
AS
BEGIN
	SELECT MOP_Nam
	FROM Means_Of_Payment
	WHERE Means_Of_Payment.MOP_Nam=@name;
END
GO

DROP PROCEDURE IF EXISTS Update_MOP;
GO

CREATE PROCEDURE Update_MOP
	@name varchar(50)
AS
BEGIN 
	UPDATE Means_Of_Payment
		SET MOP_Nam = @name
	WHERE Means_Of_Payment.MOP_Nam=@name;
END
GO

DROP PROCEDURE IF EXISTS Insert_MOP;
GO

CREATE PROCEDURE Insert_MOP
	@name varchar(50)
AS
BEGIN
	INSERT INTO Means_Of_Payment(MOP_Nam) VALUES (@name);
END
GO

DROP PROCEDURE IF EXISTS Delete_MOP;
GO

CREATE PROCEDURE Delete_MOP
	@name varchar(50)
AS
BEGIN
	DELETE FROM Means_Of_Payment WHERE MOP_Nam = @name;
END
GO