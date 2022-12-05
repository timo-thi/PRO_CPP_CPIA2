#include "CM_Connexion.h"

using namespace NS_Composants;

CM_Connexion::CM_Connexion() {
	this->requete = "RIEN";
	this->connexion = "Data Source=35.240.30.222;Initial Catalog=ProjetPOO;Persist Security Info=True;User ID=sqlserver;Password=ProjetPOO";
	this->connecteur = gcnew SqlConnection(this->connexion);
}


int CM_Connexion::actionRowID(SqlCommand^ commande) {
	int id;
	commande->Connection = connecteur;

	this->connecteur->Open();
	id = Convert::ToInt32(commande->ExecuteScalar());
	this->connecteur->Close();
	return id;
}
void  CM_Connexion::actionRows(SqlCommand^ commande)
{
	commande->CommandText = this->requete;
	connecteur->Open();
	commande->ExecuteNonQuery();
	connecteur->Close();
}
DataSet^ CM_Connexion::getRows(SqlCommand^ commande, String^ nom)
{
	this->adapteur = gcnew SqlDataAdapter(commande);
	commande->Connection = this->connecteur;
	this->DS = gcnew DataSet;
	this->adapteur->Fill(this->DS, nom);
	return this->DS;
}

