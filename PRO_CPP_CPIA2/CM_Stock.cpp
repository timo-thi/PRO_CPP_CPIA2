#include "CM_Stock.h"

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


String^ CM_Stock::Insert_Stock(void){
	return "NULL";
}

String^ CM_Stock::Delete_Stock(void){
	return "NULL";
}

String^ CM_Stock::Update_Stock(void){
	return "NULL";
}

String^ CM_Stock::Select_Stock(void){
	return "NULL";
}
