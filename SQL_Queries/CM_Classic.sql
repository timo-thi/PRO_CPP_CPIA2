
/* Insert_Date */
INSERT INTO [dbo].[Dates]
           ([DAT_Date])
     VALUES
           ('');
GO

/* Delete_Date */
DELETE FROM [dbo].[Dates]
      WHERE DAT_Date = '';
GO

/* Update_Date */
UPDATE [dbo].[Dates]
   SET [DAT_Date] = ''
 WHERE [DAT_Date] = '';
GO

/* Select Date */
SELECT [DAT_Date]
  FROM [dbo].[Dates]
GO


/* Making procedures */
DROP PROCEDURE IF EXISTS Insert_Date;
GO

CREATE PROCEDURE Insert_Date	
	@New_Date date
AS
BEGIN
	INSERT INTO dbo.Dates (DAT_Date) VALUES (@New_Date);
END
GO

DROP PROCEDURE IF EXISTS Delete_Date;
GO

CREATE PROCEDURE Delete_Date
	@To_Delete_ID date
AS
BEGIN
	/* Delete_Date */
	DELETE FROM [dbo].[Dates]
		  WHERE DAT_Date = @To_Delete_ID;
END
GO

DROP PROCEDURE IF EXISTS Update_Date;
GO

CREATE PROCEDURE Update_Date
	@To_Update date,
	@New_Value date
AS
BEGIN
	UPDATE [dbo].[Dates]
	   SET [DAT_Date] = @New_Value
	 WHERE [DAT_Date] = @To_Update;
END
GO

DROP PROCEDURE IF EXISTS Select_Date;
GO

CREATE PROCEDURE Select_Date
AS
BEGIN
	SELECT [DAT_Date] FROM [dbo].[Dates]
END
GO
