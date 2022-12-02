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

	if (this->data->Tables["IDF"]->Rows[0]->ItemArray[0] == 1) return true;
	return false;
}