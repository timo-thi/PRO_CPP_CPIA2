#include "CM_Personne.h"

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

String^ CM_Personne::Insert_Personne(void) {
	return "NULL";
}
String^ CM_Personne::Delete_Personne(void) {
	return "NULL";
}
String^ CM_Personne::Select_Personne(void) {
	return "NULL";
}
String^ CM_Personne::Update_Personne(void) {
	return "NULL";
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