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

void CM_Personne::Set_ID_City(int ID) {
	this->ID_City = ID;
}
int CM_Personne::Get_ID_City(void) {
	return this->ID_City;
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

void CM_Personne::Set_ID_Adress(int ID) {
	this->ID_Adress = ID;
}
int CM_Personne::Get_ID_Adress(void) {
	return this->ID_Adress;
}

void CM_Personne::Set_Details(String^ Details) {
	this->Details= Details;
}

String^ CM_Personne::Get_Details(void) {
	return this->Details;
}

void CM_Personne::Set_Street_Name(String^ Street) {
	this->Street_Name = Street;
}

String^ CM_Personne::Get_Street_Name(void) {
	return this->Street_Name;
}

void CM_Personne::Set_Num(int Num) {
	this->Num = Num;
}
int CM_Personne::Get_Num(void) {
	return this->Num;
}

SqlCommand^ CM_Personne::Insert_Personne(void) {
	
	Start_Procedure("Insert_person");

	Procedure->Parameters->AddWithValue("@prenom", this->Get_Prenom());
	Procedure->Parameters->AddWithValue("@nom", this->Get_Nom());

	return this->Procedure;
}

SqlCommand^ CM_Personne::Delete_Personne(void) {
	
	Start_Procedure("Delete_Person");

	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return this->Procedure;
}
SqlCommand^ CM_Personne::Select_Personne(void) {

	Start_Procedure("Select_Person");
	return this->Procedure;
}
SqlCommand^ CM_Personne::Update_Personne(void) {
	
	Start_Procedure("Update_Person");

	Procedure->Parameters->AddWithValue("@prenom", this->Get_Prenom());
	Procedure->Parameters->AddWithValue("@nom", this->Get_Nom());
	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return this->Procedure;
}

SqlCommand^ CM_Personne::Insert_Adress(void) {
	Start_Procedure("Insert_Adress");
	Procedure->Parameters->AddWithValue("@Street_Name", this->Get_Street_Name());
	Procedure->Parameters->AddWithValue("@Street_Num", this->Get_Num());
	Procedure->Parameters->AddWithValue("@Details", this->Get_Details());
	Procedure->Parameters->AddWithValue("@CIT", this->Get_ID_City());

	return this->Procedure;
}

SqlCommand^ CM_Personne::Select_Adress(void) {
	Start_Procedure("Select_Adress");
	return this->Procedure;
}

SqlCommand^ CM_Personne::Update_Adress(void) {
	Start_Procedure("Update_Adress");
	Procedure->Parameters->AddWithValue("Adress_Id", this->Get_ID_Adress());
	Procedure->Parameters->AddWithValue("@Street_Name", this->Get_Street_Name());
	Procedure->Parameters->AddWithValue("@Street_Num", this->Get_Num());
	Procedure->Parameters->AddWithValue("@Details", this->Get_Details());
	Procedure->Parameters->AddWithValue("@CIT", this->Get_ID_City());
	return this->Procedure;
}

SqlCommand^ CM_Personne::Delete_Adress(void) {
	Start_Procedure("Delete_Adress");
	Procedure->Parameters->AddWithValue("@Adress_Id", this->Get_ID_Adress());
	return this->Procedure;
}