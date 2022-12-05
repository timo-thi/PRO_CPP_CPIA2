USE ProjetPOO;
GO

DROP PROCEDURE IF EXISTS Insert_Role;
GO

CREATE PROCEDURE Insert_Role
  @Name varchar(50)
as
begin
  INSERT INTO [dbo].[Role] ([Role_Name]) VALUES (@Name);
END
GO

DROP PROCEDURE IF EXISTS Update_Role;
GO

CREATE PROCEDURE Update_Role
  @Name varchar(50),
  @Id int
as
begin
  UPDATE [dbo].[Role]
    SET [Role_Name] = @Name
  WHERE ROL_ID = @Id;
END
GO

DROP PROCEDURE IF EXISTS Select_Role;
GO

CREATE PROCEDURE Select_Role
as
begin
  SELECT [ROL_ID]
        ,[Role_Name]
    FROM [dbo].[Role]

END
GO

DROP PROCEDURE IF EXISTS Delete_Role;
GO

CREATE PROCEDURE Delete_Role
  @Id int
as
begin
  DELETE FROM [dbo].[Role]
      WHERE ROL_ID= @Id;

END
GO


