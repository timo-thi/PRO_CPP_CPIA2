#include "CM_Personne.h"

using namespace System;
using namespace NS_Composants;


CM_Personne::CM_Personne():CM_Classic::CM_Classic(){
	this->Prenom = "Vraiment";
	this->Nom = "Nul";
}

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
	
	Start_Procedure("Insert_person");

	Procedure->Parameters->AddWithValue("@prenom", this->Get_Prenom());
	Procedure->Parameters->AddWithValue("@nom", this->Get_Nom());

	return this->Procedure;
}

SqlCommand^ CM_Personne::Delete_Personne(void) {
	
	Start_Procedure("Delete_person");

	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return this->Procedure;
}
SqlCommand^ CM_Personne::Select_Personne(void) {

	Start_Procedure("Select_person");
	return this->Procedure;
}
SqlCommand^ CM_Personne::Update_Personne(void) {
	
	Start_Procedure("Update_person");

	Procedure->Parameters->AddWithValue("@prenom", this->Get_Prenom());
	Procedure->Parameters->AddWithValue("@nom", this->Get_Nom());
	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return this->Procedure;
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