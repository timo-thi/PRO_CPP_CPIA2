#pragma once
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

ref class CM_Connexion
{
private:
	String^ connexion;
	String^ requete;
	SqlConnection^ connecteur;
	//SqlCommand^ commande;
	SqlDataAdapter^ adapteur;
	DataSet^ DS;
public:
	CM_Connexion();
	int actionRowID(SqlCommand^);
	void actionRows(SqlCommand^);
	DataSet^ getRows(SqlCommand^, String^);

};

