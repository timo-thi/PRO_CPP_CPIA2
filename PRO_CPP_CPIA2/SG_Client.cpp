#include "SG_Client.h"
#include "CM_Client.h"

using namespace NS_Services;
SG_Client::SG_Client() {
	this->AccesClient = gcnew CM_Connexion();
	this->MapClient = gcnew CM_Client();
	this->dataClient = gcnew Data::DataSet();
	this->dataLivraison = gcnew Data::DataSet();
	this->dataFacturation = gcnew Data::DataSet();
}

DataSet^ SG_Client::ListeClient(String^ Table)
{ 
	this->dataClient->Clear();
	this->dataClient = this->AccesClient->getRows(this->MapClient->Select_Client(), Table);
	return this->dataClient;
}

DataSet^ SG_Client::ListeFacturation(String^ Table)
{
	this->dataFacturation->Clear();
	this->dataFacturation = this->AccesClient->getRows(this->MapClient->Select_Facturation(), Table);
	return this->dataFacturation;
}

DataSet^ SG_Client::ListeLivraison(String^ Table)
{
	this->dataLivraison->Clear();
	this->dataLivraison = this->AccesClient->getRows(this->MapClient->Select_Livraison(), Table);
	return this->dataLivraison;
}

int SG_Client::Add_Client(int id,String^ mail, DateTime^ dateCommand,DateTime^ dateAnniv,int adresseFacturation,int adresseLivraison) {
	int id_Client;
	this->MapClient->Set_Personne(id);
	this->MapClient->Set_Mail(mail);
	this->MapClient->Set_Date_Premiere_Commande(dateCommand);
	this->MapClient->Set_Date_Anniv(dateAnniv);
	this->MapClient->Set_Livraison(adresseLivraison);
	this->MapClient->Set_Facturation(adresseFacturation);
	id_Client = this->AccesClient->actionRowID(this->MapClient->Insert_Client());
	this->AccesClient->actionRows(this->MapClient->Insert_Facturation());
	this->AccesClient->actionRows(this->MapClient->Insert_Livraison());
	return id_Client;
}
void SG_Client::Remove_Client(int id_Client) {
	this->MapClient->Set_Personne(id_Client);
	this->AccesClient->actionRows(this->MapClient->Delete_Facturation());
	this->AccesClient->actionRows(this->MapClient->Delete_Livraison());
	this->AccesClient->actionRows(this->MapClient->Delete_Client());
	
}


void SG_Client::Update_Client(int id_Client, String^ mail, DateTime^ dateCommand,DateTime^ dateAnniv,int adresseFacturation, int adresseLivraison) {
	this->MapClient->Set_Personne(id_Client);
	this->MapClient->Set_Date_Premiere_Commande(dateCommand);
	this->MapClient->Set_Date_Anniv(dateAnniv);
	this->MapClient->Set_Facturation(adresseFacturation);
	this->MapClient->Set_Livraison(adresseLivraison);
	this->AccesClient->actionRows(this->MapClient->Update_Client());
	this->AccesClient->actionRows(this->MapClient->Update_Facturation());
	this->AccesClient->actionRows(this->MapClient->Update_Facturation());
	
}
