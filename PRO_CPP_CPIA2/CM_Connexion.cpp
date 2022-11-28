#include "CM_Connexion.h"
CM_Connexion::CM_Connexion() {
	this->requete = "RIEN";
	this->connexion = "Data Source=34.163.225.147;Initial Catalog=leandroBDD;Persist Security Info=True;User ID=sqlserver;Password=Prosit6";
	this->connecteur = gcnew SqlConnection(this->connexion);
	this->commande = gcnew SqlCommand(this->requete, this->connecteur);
	this->commande->CommandType = CommandType::Text;
}


int CM_Connexion::actionRowID(String^ requete) {
	int id;
	this->setSQL(requete);
	this->commande->CommandText = this->requete;
	this->connecteur->Open();
	id = Convert::ToInt32(this->commande->ExecuteScalar());
	this->connecteur->Close();
	return id;
}
void  CM_Connexion::actionRows(String^ requete)
{
	this->setSQL(requete);
	this->commande->CommandText = this->requete;
	this->connecteur->Open();
	this->commande->ExecuteNonQuery();
	this->connecteur->Close();
}
DataSet^ CM_Connexion::getRows(String^ requete, String^ Table)
{
	this->setSQL(requete);
	this->adapteur = gcnew SqlDataAdapter(this->commande);
	this->commande->CommandText = this->requete;
	this->DS = gcnew DataSet();
	this->adapteur->Fill(this->DS, Table);
	return this->DS;
}
void CM_Connexion::setSQL(String^ requete)
{
	if (requete == "" || requete == "RIEN")
	{
		this->requete = "RIEN";
	}
	else
	{
		this->requete = requete;
	}
}

