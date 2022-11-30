#include "CM_Personne.h"

using namespace System;

CM_Personne::CM_Personne(){}

void CM_Personne::Set_ID(int ID) {
	this->ID = ID;
}
int CM_Personne::Get_ID(void) {
	return this->ID;
}

void CM_Personne::Set_Nom(String^ nom){
	this->Nom = nom;
}

String^ CM_Personne::Get_Nom(void) {
	return this->Nom;
}

void CM_Personne::Set_Prenom(String^ prenom) {
	this->Prenom = prenom;
}

String^ CM_Personne::Get_Prenom(void) {
	return this->Prenom;
}

SqlCommand^ CM_Personne::Insert_Personne(void) {

	Person_Command->Parameters->Clear();

	String^ procedure = "Insert_person";
	Person_Command = gcnew SqlCommand(procedure);

	Person_Command->Parameters->AddWithValue("@Prenom", this->Get_Prenom());
	Person_Command->Parameters->AddWithValue("@Nom", this->Get_Nom());

	return this->Person_Command;
}

SqlCommand^ CM_Personne::Delete_Personne(void) {
	String^ procedure = "Delete_person";
	Person_Command = gcnew SqlCommand(procedure);

	Person_Command->Parameters->AddWithValue("@ID", this->Get_ID());

	return this->Person_Command;
}
SqlCommand^ CM_Personne::Select_Personne(void) {

	String^ procedure = "Select_person";
	Person_Command = gcnew SqlCommand(procedure);
	
	return this->Person_Command;
}
SqlCommand^ CM_Personne::Update_Personne(void) {
	String^ procedure = "Update_person";
	Person_Command = gcnew SqlCommand(procedure);

	Person_Command->Parameters->AddWithValue("@Prenom", this->Get_Prenom());
	Person_Command->Parameters->AddWithValue("@Nom", this->Get_Nom());
	Person_Command->Parameters->AddWithValue("@ID", this->Get_ID());

	return this->Person_Command;
}

String^ CM_Personne::Insert_Adress(void) {
	return "NULL";
}

String^ CM_Personne::Select_Adress(void) {
	return "NULL";
}

String^ CM_Personne::Update_Adress(void) {
	return "NULL";
}

String^ CM_Personne::Delete_Adress(void) {
	return "NULL";
}