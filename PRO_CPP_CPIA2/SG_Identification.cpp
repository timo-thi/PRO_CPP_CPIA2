#include "SG_Identification.h"

using namespace NS_Services;
using namespace NS_Composants;

SG_Identification::SG_Identification() {
	this->IDF = gcnew CM_Identification;
	this->CConnexion = gcnew CM_Connexion;

	this->IDF->Set_Mail("RIEN");
	this->IDF->Set_Mail("RIEN");
}

bool SG_Identification::Check_Identity(String^ mail, String^ pwd) {
	this->IDF->Set_Mail(mail);
	this->IDF->Set_Password(pwd);

	this->data = this->CConnexion->getRows(this->IDF->Identify(), "IDF");

	return this->data->Tables[0]->Rows[0]->ItemArray[0]->Equals(true);
}

String^ SG_Identification::Fetch_Role() {
	this->data = this->CConnexion->getRows(this->IDF->Fetch_Role(), "Role");

	return (String^)this->data->Tables[0]->Rows[0]->ItemArray[0]; // Casting to string because compiler can't guess how to convert System::Object ^ Object
}

void SG_Identification::Add_Identification(String^ mail, String^ password) {
	this->IDF->Set_Mail(mail);
	this->IDF->Set_Password(password);
	this->CConnexion->actionRows(this->IDF->Insert_Identification());
}

void SG_Identification::Update_Identification(String^ mail, String^ password) {
	this->IDF->Set_Mail(mail);
	this->IDF->Set_Password(password);
	this->CConnexion->actionRows(this->IDF->Update_Identification());
}

void SG_Identification::Remove_Identification(String^ mail) {
	this->IDF->Set_Mail(mail);
	this->CConnexion->actionRows(this->IDF->Delete_Identification());
}