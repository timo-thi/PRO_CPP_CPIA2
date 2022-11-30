USE ProjetPOO
GO

DROP PROCEDURE IF EXISTS Select_Person;
GO

CREATE PROCEDURE Select_Person
	@ID int
AS
BEGIN 
	SELECT PER_ID AS ID, PER_NAME AS Prenom, PER_Fname AS Nom FROM Person WHERE PER_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Update_Person;
GO

CREATE PROCEDURE Update_Person
	@prenom varchar(50),
	@nom varchar(50),
	@ID int
AS
BEGIN 
	UPDATE Person 
	SET PER_NAME = @prenom, PER_Fname = @nom
	WHERE PER_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Insert_Person;
GO

CREATE PROCEDURE Insert_Person
	@prenom varchar(50),
	@nom varchar(50)
AS
BEGIN
	INSERT INTO Person (PER_NAME, PER_Fname) VALUES (@prenom, @nom);
END
GO

DROP PROCEDURE IF EXISTS Delete_Person;
GO

CREATE PROCEDURE Delete_Person
	@ID int
AS
	BEGIN
	DELETE FROM Person WHERE PER_ID = @ID;
END
GO