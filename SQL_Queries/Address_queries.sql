USE ProjetPOO;
GO

DROP PROCEDURE IF EXISTS Select_Adress;
GO

CREATE PROCEDURE Select_Adress
as
begin 
SELECT [ADR_ID]
      ,[ADR_Street_name]
      ,[ADR_Street_Num]
      ,[ADR_Details]
      ,[CIT_Name]
	  

  FROM [dbo].[Adress] INNER JOIN  [dbo].[Cities] ON (Adress.CIT_ID = Cities.CIT_ID);
  end

DROP PROCEDURE IF EXISTS Insert_Adress;
GO

CREATE PROCEDURE Insert_Adress
      @Street_Name varchar(50),
      @Street_Num int,
      @Details varchar(50),
      @CIT int 
as
begin
INSERT INTO [dbo].[Adress]
           ([ADR_Street_name]
           ,[ADR_Street_Num]
           ,[ADR_Details]
           ,[CIT_ID])
     VALUES
           (@Street_Name,
           @Street_Num,
           @Details,
           @CIT);
END
GO

DROP PROCEDURE IF EXISTS Delete_Adress;
GO

CREATE PROCEDURE Delete_Adress
      @Adress_Id int
as
begin
DELETE FROM [dbo].[Adress]
      WHERE @Adress_Id = ADR_ID
END
GO

DROP PROCEDURE IF EXISTS Update_Adress;
GO

CREATE PROCEDURE Update_Adress
      @Adress_Id int,
      @Street_Name varchar(50),
      @Street_Num int,
      @Details varchar(50),
      @CIT int
as
begin
UPDATE [dbo].[Adress]
   SET [ADR_Street_name] = @Street_Name
      ,[ADR_Street_Num] = @Street_Num
      ,[ADR_Details] = @Details
      ,[CIT_ID] = @CIT
 WHERE @Adress_Id = ADR_ID;
END
GO

