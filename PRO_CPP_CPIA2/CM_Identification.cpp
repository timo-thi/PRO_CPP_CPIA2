#include "CM_Identification.h"

using namespace NS_Composants;

CM_Identification::CM_Identification() : CM_Classic::CM_Classic() {
	this->Mail = "RIEN";
	this->Password = "RIEN";
}

SqlCommand^ CM_Identification::Identify() {
	Start_Procedure("Check_Identification");

	this->Procedure->Parameters->AddWithValue("@mail", this->Mail);
	this->Procedure->Parameters->AddWithValue("@psw", this->Password);

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