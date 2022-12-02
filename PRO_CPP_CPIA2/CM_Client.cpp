#include "CM_Client.h"

using namespace NS_Composants;

CM_Client::CM_Client() {}

SqlCommand^ CM_Client::Insert_Client() {
	Start_Procedure("Insert_Client");

	Procedure->Parameters->AddWithValue("@prenom", this->Get_Prenom());
	Procedure->Parameters->AddWithValue("@nom", this->Get_Nom());
	Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());
	Procedure->Parameters->AddWithValue("@anniv", this->Get_Date_Anniv());
	Procedure->Parameters->AddWithValue("@adresse_livraison", this->Get_Adresse_Livraison());
	Procedure->Parameters->AddWithValue("@adresse_facturation", this->Get_Adresse_Facturation());

	return this->Procedure;
}

SqlCommand^ CM_Client::Delete_Client() {
	Start_Procedure("Delete_Client");

	Procedure->Parameters->AddWithValue("@prenom", this->Get_Prenom());
	Procedure->Parameters->AddWithValue("@nom", this->Get_Nom());

	return this->Procedure;
}

SqlCommand^ CM_Client::Select_Client() {
	Start_Procedure("Select_Client");

	Procedure->Parameters->AddWithValue("@prenom", this->Get_Prenom());
	Procedure->Parameters->AddWithValue("@nom", this->Get_Nom());

	return this->Procedure;
}

SqlCommand^ CM_Client::Update_Client() {
	Start_Procedure("Update_Client");

	Procedure->Parameters->AddWithValue("@prenom", this->Get_Prenom());
	Procedure->Parameters->AddWithValue("@nom", this->Get_Nom());
	Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());
	Procedure->Parameters->AddWithValue("@adresse_livraison", this->Get_Adresse_Livraison());
	Procedure->Parameters->AddWithValue("@adresse_facturation", this->Get_Adresse_Facturation());

	return this->Procedure;
}

String^ CM_Client::Get_Mail() { return this->Mail; }
void CM_Client::Set_Mail(String^ tMail) { this->Mail = tMail; }

String^ CM_Client::Get_Date_Anniv() { return this->Date_Anniv; }
void CM_Client::Set_Date_Anniv(String^ tDate) { this->Date_Anniv = tDate; }

int CM_Client::Get_Adresse_Livraison() { return this->Adresse_Livraison; }
void CM_Client::Set_Adresse_Livraison(int tAdresse) { this->Adresse_Livraison = tAdresse; }

int CM_Client::Get_Adresse_Facturation() { return this->Adresse_Facturation; }
void CM_Client::Set_Adresse_Facturation(int tAdresse) { this->Adresse_Facturation = tAdresse; }

