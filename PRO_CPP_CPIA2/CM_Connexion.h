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
	SqlCommand^ commande;
	SqlDataAdapter^ adapteur;
	DataSet^ DS;
	void setSQL(String^);
public:
	CM_Connexion();
	int actionRowID(String^);
	void actionRows(String^);
	DataSet^ getRows(String^, String^);

};

