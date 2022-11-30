Use ProjetPOO;
GO

DROP PROCEDURE IF EXISTS Select_Product;
GO

CREATE PROCEDURE Select_Product
AS
BEGIN
	SELECT [PRO_ID]
		  ,[PRO_Name]
		  ,[PRO_Price]
		  ,[PRO_Stock]
		  ,[PRO_Restock_Threshold]
	  FROM [dbo].[Products];
END
GO

DROP PROCEDURE IF EXISTS Insert_Product;
GO

CREATE PROCEDURE Insert_Product
	@Name VARCHAR(50),
	@Price INT,
	@Stock INT,
	@Restock_Threshold INT
AS
BEGIN
INSERT INTO [dbo].[Products]
           ([PRO_Name]
           ,[PRO_Price]
           ,[PRO_Stock]
           ,[PRO_Restock_Threshold])
     VALUES
           (@Name, @Price, @Stock, @Restock_Threshold);
END
GO

DROP PROCEDURE IF EXISTS Update_Product;
GO

CREATE PROCEDURE Update_product
	@Product_ID int,
	@Name VARCHAR(50) = NULL,
	@Price int = NULL,
	@Stock int = NULL,
	@Restock_Threshold int = NULL
AS
BEGIN
	UPDATE [dbo].[Products]
	   SET [PRO_Name] = ISNULL(@Name, Products.PRO_Name)
		  ,[PRO_Price] = ISNULL(@Price, Products.PRO_Price)
		  ,[PRO_Stock] = ISNULL(@Stock, Products.PRO_Stock)
		  ,[PRO_Restock_Threshold] = ISNULL(@Restock_Threshold, Products.PRO_Restock_Threshold)
	 WHERE PRO_ID = @Product_ID;
END
GO

DROP PROCEDURE IF EXISTS Delete_Product;
GO

CREATE PROCEDURE Delete_Product
	@To_Del_ID INT
AS
BEGIN
	DELETE FROM [dbo].[Products]
		  WHERE PRO_ID = @To_Del_ID;
END
GO

DROP PROCEDURE IF EXISTS Select_Categories;
GO

CREATE PROCEDURE Select_Categories
AS
BEGIN
	SELECT [CAT_ID]
		,[CAT_Name]
	FROM [dbo].[Categories];
END
GO

DROP PROCEDURE IF EXISTS Insert_Categories;
GO

CREATE PROCEDURE Insert_Categories
	@Name VARCHAR(50)
AS
BEGIN
INSERT INTO [dbo].[Categories]
           ([CAT_Name])
     VALUES
           (@Name);
END
GO

DROP PROCEDURE IF EXISTS Update_Categories;
GO

CREATE PROCEDURE Update_Categories
	@ID int = NULL,
	@Name VARCHAR(50) = NULL
AS
BEGIN
	UPDATE [dbo].[Categories]
	SET [CAT_Name] = ISNULL(@Name, Categories.CAT_Name)
	WHERE CAT_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Delete_Categories;
GO

CREATE PROCEDURE Delete_Categories
	@ID int
AS
BEGIN
	DELETE FROM [dbo].[Categories]
		WHERE CAT_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Select_Ls;
GO

CREATE PROCEDURE Select_Ls
AS
BEGIN
	SELECT [PRO_ID]
		  ,[CAT_ID]
	  FROM [dbo].[_Is]
END
GO

DROP PROCEDURE IF EXISTS Insert_Ls;
GO

CREATE PROCEDURE Insert_Ls
	@prod_id int,
	@cat_id int
AS
BEGIN
	INSERT INTO [dbo].[_Is]
			   ([PRO_ID]
			   ,[CAT_ID])
		 VALUES
			   (@prod_id
			   ,@cat_id)
END
GO

DROP PROCEDURE IF EXISTS Delete_Ls;
GO

CREATE PROCEDURE Delete_Ls
	@prod_id int,
	@cat_id int
AS
BEGIN
	DELETE FROM [dbo].[_Is]
		  WHERE PRO_ID = @prod_id AND CAT_ID = @cat_id;
END
GO


