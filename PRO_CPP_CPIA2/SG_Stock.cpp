#include "SG_Stock.h"
#include "CM_Stock.h"

using namespace NS_Services;

SG_Stock::SG_Stock() {

	DS = gcnew Data::DataSet;
	Map_Stock = gcnew CM_Stock;
	Connect = gcnew CM_Connexion;
}

DataSet^ SG_Stock::Fetch_Products(String^ nom) {

	this->DS->Clear();

	this->DS = this->Connect->getRows(this->Map_Stock->Select_Stock(), nom);

	return this->DS;
}

void SG_Stock::Add_Products() {

	this->Map_Stock->Set_Reference(this->Reference);
	this->Map_Stock->Set_Nom(Nom);
	this->Map_Stock->Set_Prix(Prix);
	this->Map_Stock->Set_Stock(Stock);
	this->Map_Stock->Set_Seuil_restock(Seuil_Stock);

	this->Connect->actionRows(this->Map_Stock->Insert_Stock());

}

void SG_Stock::Remove_Products() {

	this->Map_Stock->Set_Reference(this->Reference);

	this->Connect->actionRows(this->Map_Stock->Delete_Stock());

}

void SG_Stock::Update_Products() {

	this->Map_Stock->Set_Reference(this->Reference);
	this->Map_Stock->Set_Nom(Nom);
	this->Map_Stock->Set_Prix(Prix);
	this->Map_Stock->Set_Stock(Stock);
	this->Map_Stock->Set_Seuil_restock(Seuil_Stock);

	this->Connect->actionRows(this->Map_Stock->Update_Stock());
}

