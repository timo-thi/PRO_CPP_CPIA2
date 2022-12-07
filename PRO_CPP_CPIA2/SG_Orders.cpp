#include "SG_Orders.h"
#include "CM_Orders.h"
#include "fstream"
using namespace std;
using namespace System::IO;
using namespace NS_Services;

SG_Orders::SG_Orders(void){
	this->AccesOrders = gcnew CM_Connexion();
	this->MapOrders = gcnew CM_Orders();
	this->dataOrders = gcnew Data::DataSet();
	this->dataBill = gcnew Data::DataSet();
	this->dataMOP = gcnew Data::DataSet();
	this->GenerationID = gcnew Data::DataSet();
}

void SG_Orders::Add_Order(String^ ID,DateTime^ dateExp,DateTime^ dateRec,int client,int nombrePaiement,String^ MOP,int balance,int produit,int amount,int nombreProduit,DateTime^ datTkt){
	this->MapOrders->Set_ID(ID);
	this->MapOrders->Set_Date_Exp(dateExp);
	this->MapOrders->Set_Date_Liv(dateRec);
	this->MapOrders->Set_Client_ID(client);
	this->MapOrders->Set_Mean_Of_Payment(MOP);
	this->MapOrders->Insert_Order();
	this->MapOrders->Set_Balance(balance);
	this->MapOrders->Set_Date_Bill(datTkt);
	this->MapOrders->Insert_Bill();
	this->MapOrders->Set_Amount(amount);
	this->MapOrders->Set_Product(produit);
	this->MapOrders->Insert_Product();
	
}

void SG_Orders::Remove_Order(String^ ID){
	this->MapOrders->Set_ID(ID);
	this->Delete_Order();

}

void SG_Orders::Update_Order(String^ ID, DateTime^ dateExp, DateTime^ dateRec, int client ){
	this->MapOrders->Set_ID(ID);
	this->MapOrders->Set_Date_Exp(dateExp);
	this->MapOrders->Set_Date_Liv(dateRec);
	this->MapOrders->Set_Client_ID(client);
	this->MapOrders->Update_Order();

}

DataSet^ SG_Orders::ListeOrders(String^ table) {
	this->dataOrders->Clear();
	this->dataOrders = this->AccesOrders->getRows(this->MapOrders->Select_Order(), table);
	return this->dataOrders;
}

DataSet^ SG_Orders::ListeMOP(String^ table) {
	this->dataMOP->Clear();
	this->dataMOP = this->AccesOrders->getRows(this->MapOrders->Select_Mean_Of_Payment(), table);
	return this->dataOrders;
}

DataSet^ SG_Orders::ListeBill(String^ table) {
	this->dataBill->Clear();
	this->dataBill = this->AccesOrders->getRows(this->MapOrders->Select_Bill(), table);
	return this->dataBill;
}

DataSet^ SG_Orders::ListeID(String^ table,DateTime^ date,int client) {
	this->GenerationID->Clear();
	this->GenerationID = this->AccesOrders->getRows(this->MapOrders->Select_GenerationID(date ,client), table);
	return this->GenerationID;
}
void SG_Orders::Cree_Facture(String^ Facture, String^ ID) {
	String^ tempo = "./" + ID + ".txt";
    StreamWriter^ writer = gcnew StreamWriter(tempo);
    writer->Write(Facture);
    writer->Close();

}