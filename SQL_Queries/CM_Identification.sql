Use ProjetPOO;
GO

DROP PROCEDURE IF EXISTS Insert_Identification;
GO

CREATE PROCEDURE Insert_Identification
    @mail VARCHAR(50),
    @Psw VARCHAR(50)
AS
BEGIN
    INSERT INTO _User (mail, pwd) VALUES (@mail, HASHBYTES('SHA2_512', @Psw));
END;
GO

DROP PROCEDURE IF EXISTS Delete_Identification;
GO

CREATE PROCEDURE Delete_Identification
    @mail VARCHAR(50)
AS
BEGIN
    DELETE FROM _User WHERE mail = @mail;
END
GO

DROP PROCEDURE IF EXISTS Update_Identification;
GO

CREATE PROCEDURE Update_Identification
    @mail VARCHAR(50),
    @psw VARCHAR(50)
AS
BEGIN
    UPDATE _User SET pwd = HASHBYTES('SHA2_512', @psw) WHERE mail = @mail;
END
GO

DROP PROCEDURE IF EXISTS Check_Identification;
GO

CREATE PROCEDURE Check_Identification
    @mail VARCHAR(50),
    @psw VARCHAR(50)
AS
BEGIN
    IF (SELECT pwd FROM _User WHERE mail = @mail) = HASHBYTES('SHA2_512', @psw)
        SELECT CAST(1 as BIT) as IDF;
    ELSE 
        Select CAST(0 as BIT) as IDF;
END
GO

DROP PROCEDURE IF EXISTS Fetch_Role;
GO

CREATE PROCEDURE Fetch_Role
    @mail VARCHAR(50)
AS
BEGIN
    SELECT ROL_Name FROM Staff WHERE mail = @mail;
END
GO
