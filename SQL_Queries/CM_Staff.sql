USE ProjetPOO;
GO

DROP PROCEDURE IF EXISTS Select_Staff;
GO

CREATE PROCEDURE Select_Staff @ID int AS
	BEGIN 
	SELECT
		Staff.PER_ID AS ID,
		Person.PER_NAME AS Prenom,
		Person.PER_Fname AS Nom,
		Staff.PER_ID_1 AS Superieur,
		Staff.Hire_Date AS Date_recrutement,
		Role.Role_Name AS Role
	FROM 
		Staff
			INNER JOIN Person ON Staff.PER_ID = Person.PER_ID AND Staff.PER_ID = @ID
				INNER JOIN Role ON Staff.ROL_ID = Role.ROL_ID;
END
GO

DROP PROCEDURE IF EXISTS Update_Staff;
GO

CREATE PROCEDURE Update_Staff
	@ID int,
	@superieur int = NULL,
	@role int = NULL
AS
BEGIN 
	UPDATE Staff
		SET PER_ID_1 = ISNULL (@superieur, Staff.PER_ID_1),
			ROL_ID = ISNULL (@role, ROL_ID)
	WHERE Staff.PER_ID = @ID;
END
GO

DROP PROCEDURE IF EXISTS Insert_Staff;
GO

CREATE PROCEDURE Insert_Staff
	@superieur int,
	@role int,
	@adresse int,
	@date date
AS
BEGIN
	INSERT INTO Staff (PER_ID_1, ROL_ID, ADR_ID, Hire_Date) VALUES ( @superieur, @role, @role, @date);
END
GO

DROP PROCEDURE IF EXISTS Delete_Staff;
GO

CREATE PROCEDURE Delete_Staff
	@ID int
AS
BEGIN
	DELETE FROM Staff WHERE PER_ID = @ID;
	
	IF  NOT EXISTS (SELECT 1 FROM Customer WHERE PER_ID = @ID)
		DELETE FROM Person WHERE PER_ID=@ID;
END
GO