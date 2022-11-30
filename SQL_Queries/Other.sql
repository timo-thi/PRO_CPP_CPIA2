Select DISTINCT * FROM Products
	JOIN contain ON Products.PRO_ID = contain.PRO_ID
		LEFT JOIN Proposes ON Products.PRO_ID = Proposes.PRO_ID
		LEFT JOIN _Is ON _Is.PRO_ID = Products.PRO_ID
			LEFT JOIN Categories ON _Is.CAT_ID = Categories.CAT_ID
				LEFT JOIN Offering ON Offering.CAT_ID = Categories.CAT_ID
					FULL JOIN Offers ON Offering.OFF_ID = Offers.OFF_ID OR Proposes.OFF_ID = Offers.OFF_ID
	WHERE ORD_ID = 'id1';
GO

--Permet d'avoir le total avec remise d'une commande

Select DISTINCT SUM(PRO_Price * amount * ISNULL((1-OFF_Percentage), 1)) FROM Products
	JOIN contain ON Products.PRO_ID = contain.PRO_ID
		LEFT JOIN Proposes ON Products.PRO_ID = Proposes.PRO_ID
		LEFT JOIN _Is ON _Is.PRO_ID = Products.PRO_ID
			LEFT JOIN Categories ON _Is.CAT_ID = Categories.CAT_ID
				LEFT JOIN Offering ON Offering.CAT_ID = Categories.CAT_ID
					FULL JOIN Offers ON Offering.OFF_ID = Offers.OFF_ID OR Proposes.OFF_ID = Offers.OFF_ID
	WHERE ORD_ID = 'id1';
GO