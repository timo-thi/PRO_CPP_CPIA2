#include "CM_Identification.h"

using namespace NS_Composants;

CM_Identification::CM_Identification() : CM_Classic::CM_Classic() {
	this->Mail = "RIEN";
	this->Password = "RIEN";
}

SqlCommand^ CM_Identification::Identify() {
	Start_Procedure("Check_Identification");

	this->Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());
	this->Procedure->Parameters->AddWithValue("@psw", this->Get_Password());

	return this->Procedure;
}

SqlCommand^ CM_Identification::Fetch_Role() {
	Start_Procedure("Fetch_Role");

	this->Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());

	return this->Procedure;
}

SqlCommand^ CM_Identification::Insert_Identification() {
	Start_Procedure("Insert_Identification");

	this->Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());
	this->Procedure->Parameters->AddWithValue("@Psw", this->Get_Password());
	return this->Procedure;

}

SqlCommand^ CM_Identification::Delete_Identification() {
	Start_Procedure("Delete_Identification");

	this->Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());
	return this->Procedure;

}

SqlCommand^ CM_Identification::Update_Identification() {
	Start_Procedure("Update_Identification");

	this->Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());
	this->Procedure->Parameters->AddWithValue("@Psw", this->Get_Password());
	return this->Procedure;

}


String^ CM_Identification::Get_Mail(void) {
	return this->Mail;
}
void CM_Identification::Set_Mail(String^ new_mail){
	this->Mail = new_mail;
}
String^ CM_Identification::Get_Password(void){
	return this->Password;
}
void CM_Identification::Set_Password(String^ new_pass){
	this->Password = new_pass;
}