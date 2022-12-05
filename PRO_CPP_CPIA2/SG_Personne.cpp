#include "SG_Personne.h"
#include "CM_Personne.h"

using namespace NS_Services;
using namespace NS_Composants;
SG_Personne::SG_Personne() {
	this->AccesPersonne = gcnew CM_Connexion();
	this->MapPersonne = gcnew CM_Personne();
	this->dataPersonne = gcnew Data::DataSet();
}

DataSet^ SG_Personne::ListePersonne(String^ Table)
{
	this->dataPersonne->Clear();
	this->dataPersonne = this->AccesPersonne->getRows(this->MapPersonne->Select_Personne(), Table);
	return this->dataPersonne;
}

int SG_Personne::Add_Personne(String^ nom , String^ prenom) {
	int id_personne;
	this->MapPersonne->Set_Nom(nom);
	this->MapPersonne->Set_Prenom(prenom);
	id_personne = this->AccesPersonne->actionRowID(this->MapPersonne->Insert_Personne());
	return id_personne;
}
void SG_Personne::Remove_Personne(int id_personne) {
	this->MapPersonne->Set_ID(id_personne);
	this->AccesPersonne->actionRows(this->MapPersonne->Delete_Personne());
}


void SG_Personne::Update_Personne(int id_personne, String^ nom, String^ prenom) {
	this->MapPersonne->Set_ID(id_personne);
	this->MapPersonne->Set_Nom(nom);
	this->MapPersonne->Set_Prenom(prenom);
	this->AccesPersonne->actionRows(this->MapPersonne->Update_Personne());
}
