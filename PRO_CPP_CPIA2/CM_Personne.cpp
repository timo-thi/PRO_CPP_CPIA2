#include "CM_Personne.h"
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
