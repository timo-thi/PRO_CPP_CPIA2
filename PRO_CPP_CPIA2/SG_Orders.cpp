#include "SG_Orders.h"
#include "CM_Orders.h"
#include "SG_Personne.h"

using namespace NS_Services;

SG_Orders::SG_Orders(void){

	DS = gcnew Data::DataSet; 
	Map_Orders = gcnew CM_Orders;
	Connect = gcnew CM_Connexion;
}

DataSet^ SG_Orders::Fetch_Order(String^ nom) {
	this->DS->Clear();

	this->DS = this->Connect->getRows(this->Map_Orders->Select_Order(), nom);

	return this->DS;
}

void SG_Orders::Add_Order(void){

	this->Map_Orders->Set_Client_ID(this->ID_Client);
	this->Map_Orders->Set_Date_Liv(this->Date_Reception);
	this->Map_Orders->Set_Date_Exp(this->Date_Expedition);

	this->Connect->actionRows(this->Map_Orders->Insert_Order());
}

void SG_Orders::Remove_Order(void){
	this->Map_Orders->Set_ID(this->ID);

	this->Connect->actionRows(this->Map_Orders->Delete_Order());
}

void SG_Orders::Update_Order(void){
	this->Map_Orders->Set_ID(this->ID);
	this->Map_Orders->Set_Client_ID(this->ID_Client);
	this->Map_Orders->Set_Date_Liv(this->Date_Reception);
	this->Map_Orders->Set_Date_Exp(this->Date_Expedition);

	this->Connect->actionRows(this->Map_Orders->Update_Order());
}


DataSet^ SG_Orders::Fetch_Order_Bill(String^ nom) {
	this->DS->Clear();

	this->Map_Orders->Set_ID(this->ID);

	this->DS = this->Connect->getRows(this->Map_Orders->Fetch_Order_Bill(), nom);

	return this->DS;
}

void SG_Orders::Add_Bill(void) {
	this->Map_Orders->Set_ID(this->ID);
	this->Map_Orders->Set_Mean_Of_Payment(this->Mean_Of_Payment);
	this->Map_Orders->Set_Balance(this->Balance);
	this->Map_Orders->Set_Date_Bill(this->Date_Bill);

	this->Connect->actionRows(this->Map_Orders->Insert_Bill());
}

void SG_Orders::Remove_Bill(void) {
	this->Map_Orders->Set_Bill(this->Bill_ID);

	this->Connect->actionRows(this->Map_Orders->Delete_Bill());
}

void SG_Orders::Update_Bill(void) {
	
	this->Map_Orders->Set_Bill(this->Bill_ID);
	this->Map_Orders->Set_ID(this->ID);
	this->Map_Orders->Set_Mean_Of_Payment(this->Mean_Of_Payment);
	this->Map_Orders->Set_Balance(this->Balance);
	this->Map_Orders->Set_Date_Bill(this->Date_Bill);

	this->Connect->actionRows(this->Map_Orders->Update_Bill());
}

DataSet^ SG_Orders::Fetch_Means_Of_Payment(String^ nom) {
	this->DS->Clear();

	this->DS = this->Connect->getRows(this->Map_Orders->Fetch_Order_Bill(), nom);

	return this->DS;

}

void SG_Orders::Add_Mean_Of_Payment() {
	this->Map_Orders->Set_Mean_Of_Payment(this->Mean_Of_Payment);

	this->Connect->actionRows(this->Map_Orders->Insert_Mean_Of_Payment());
}

void SG_Orders::Remove_Mean_Of_Payment() {
	this->Map_Orders->Set_Mean_Of_Payment(this->Mean_Of_Payment);

	this->Connect->actionRows(this->Map_Orders->Delete_Mean_Of_Payment());
}

void SG_Orders::Update_Mean_Of_Payment() {
	this->Map_Orders->Set_Mean_Of_Payment(this->Mean_Of_Payment);

	this->Connect->actionRows(this->Map_Orders->Update_Mean_Of_Payment());
}        

String^ SG_Orders::Get_ID() { return this->ID; }
void SG_Orders::Set_ID(String^ tID) { this->ID = tID; }

int SG_Orders::Get_ID_Client() { return this->ID_Client; }
void SG_Orders::Set_ID_Client(int tID) { this->ID_Client = tID; }

DateTime^ SG_Orders::Get_Date_Exp() { return this->Date_Expedition; }
void SG_Orders::Set_Date_Exp(DateTime^ tDate) { this->Date_Expedition = tDate; }

DateTime^ SG_Orders::Get_Date_Rec() { return this->Date_Reception; }
void SG_Orders::Set_Date_Rec(DateTime^ tDate) { this->Date_Reception = tDate; }

DateTime^ SG_Orders::Get_Date_Bill() { return this->Date_Bill; }
void SG_Orders::Set_Date_Bill(DateTime^ tDate) { this->Date_Bill = tDate; }

int SG_Orders::Get_Bill_ID() { return this->Bill_ID; }
void SG_Orders::Set_Bill_ID(int tID) { this->Bill_ID = tID; }

String^ SG_Orders::Get_Mean_Of_Payment() { return this->Mean_Of_Payment; }
void SG_Orders::Set_Mean_Of_Payment(String^ tMOP) { this->Mean_Of_Payment = tMOP; }

int SG_Orders::Get_Balance() { return this->Balance; }
void SG_Orders::Set_Balance(int tBalance) { this->Balance = tBalance; }