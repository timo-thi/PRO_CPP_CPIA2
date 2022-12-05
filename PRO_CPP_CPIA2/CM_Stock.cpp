#include "CM_Stock.h"

using namespace NS_Composants;

CM_Stock::CM_Stock() {

}

String^ CM_Stock::Get_Nom(){
	return this->Nom;
}

void CM_Stock::Set_Nom(String^ New_Nom){
	this->Nom = New_Nom;
}

int CM_Stock::Get_Reference(){
	return this->Reference;
}

void CM_Stock::Set_Reference(int New_Ref){
	this->Reference = New_Ref;
}

int CM_Stock::Get_Prix(){
	return this->Prix;
}

void CM_Stock::Set_Prix(int New_Prx){
	this->Prix = New_Prx;
}

int CM_Stock::Get_Stock(){
	return this->Stock;
}

void CM_Stock::Set_Stock(int New_Stck){
	this->Stock = New_Stck;
}

int CM_Stock::Get_Seuil_restock(){
	return this->Seuil_restock;
}

void CM_Stock::Set_Seuil_restock(int New_SeRe){
	this->Seuil_restock = New_SeRe;
}


SqlCommand^ CM_Stock::Insert_Stock(void){
	
	Start_Procedure("Insert_Product");

	Procedure->Parameters->AddWithValue("@Name", this->Get_Nom());
	Procedure->Parameters->AddWithValue("@Price", this->Get_Prix());
	Procedure->Parameters->AddWithValue("@Stock", this->Get_Stock());
	Procedure->Parameters->AddWithValue("@Restock_Threshold", this->Get_Seuil_restock());

	return Procedure;
}

SqlCommand^ CM_Stock::Delete_Stock(void){

	Start_Procedure("Delete_Product");

	return Procedure;
}

SqlCommand^ CM_Stock::Update_Stock(void){

	Start_Procedure("Insert_Product");

	Procedure->Parameters->AddWithValue("@Product_ID", this->Get_Reference());
	Procedure->Parameters->AddWithValue("@Name", this->Get_Nom());
	Procedure->Parameters->AddWithValue("@Price", this->Get_Prix());
	Procedure->Parameters->AddWithValue("@Stock", this->Get_Stock());
	Procedure->Parameters->AddWithValue("@Restock_Threshold", this->Get_Seuil_restock());

	return Procedure;
}

SqlCommand^ CM_Stock::Select_Stock(void){

	Start_Procedure("Select_Product");

	return Procedure;
}
