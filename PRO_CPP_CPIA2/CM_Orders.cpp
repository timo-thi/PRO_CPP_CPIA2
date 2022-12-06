#include "CM_Orders.h"

using namespace NS_Composants;

CM_Orders::CM_Orders(void){

}


String^ CM_Orders::Get_ID(void) {
	return this->Identifiant;
}

void CM_Orders::Set_ID(String^ New_ID) {
	this->Identifiant = New_ID;
}

DateTime^ CM_Orders::Get_Date_Liv(void){
	return this->Date_Livraison;
}

void CM_Orders::Set_Date_Liv(DateTime^ New_DL){
	this->Date_Livraison = New_DL;
}

DateTime^ CM_Orders::Get_Date_Exp(void) {
	return this->Date_Expedition;
}

void CM_Orders::Set_Date_Exp(DateTime^ New_DE) {
	this->Date_Expedition = New_DE;
}

int CM_Orders::Get_Client_ID(void){
	return this->Client_id;
}

void CM_Orders::Set_Client_ID(int New_ClID){
	this->Client_id = New_ClID;
}

String^ CM_Orders::Get_Mean_Of_Payment(void){
	return this->Mean_Of_Payment;
}

void CM_Orders::Set_Mean_Of_Payment(String^ New_MOP){
	this->Mean_Of_Payment = New_MOP;
}

int CM_Orders::Get_Bill(void){
	return this->Bill_ID;
}

void CM_Orders::Set_Bill(int New_Bill){
	this->Bill_ID = New_Bill;
}

int CM_Orders::Get_Balance(void){
	return this->Balance;
}

void CM_Orders::Set_Balance(int New_Bal){
	this->Balance = New_Bal;
}

DateTime^ CM_Orders::Get_Date_Bill(void) {
	return this->Date_Bill;
}

void CM_Orders::Set_Date_Bill(DateTime^ New_DB) {
	this->Date_Bill = New_DB;
}

int CM_Orders::Get_Product(void) { 
	return this->Product; 
}

void CM_Orders::Set_Product(int tProduct) { 
	this->Product = tProduct; 
}

int CM_Orders::Get_Amount(void) { 
	return this->Product; 
}

void CM_Orders::Set_Amount(int tAmount) { 
	this->Amount = tAmount; 
}



SqlCommand^ CM_Orders::Insert_Order(void){
	Start_Procedure("Insert_Order");

	Procedure->Parameters->AddWithValue("@date_expedition", this->Get_Date_Exp());
	Procedure->Parameters->AddWithValue("@date_reception", this->Get_Date_Liv());
	Procedure->Parameters->AddWithValue("@client", this->Get_Client_ID());

	return Procedure;
}

SqlCommand^ CM_Orders::Delete_Order(void){
	Start_Procedure("Delete_Order");

	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return Procedure;
}

SqlCommand^ CM_Orders::Update_Order(void){
	Start_Procedure("Update_Order");

	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());
	Procedure->Parameters->AddWithValue("@date_expedition", this->Get_Date_Exp());
	Procedure->Parameters->AddWithValue("@date_reception", this->Get_Date_Liv());
	Procedure->Parameters->AddWithValue("@client", this->Get_Client_ID());

	return Procedure;
}

SqlCommand^ CM_Orders::Select_Order(void){

	Start_Procedure("Select_Order");

	return Procedure;
}

SqlCommand^ CM_Orders::Total_Order(void) {
	Start_Procedure("Total_Order");

	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return Procedure;
}

SqlCommand^ CM_Orders::Insert_Bill(void){
	Start_Procedure("Insert_Bill");

	Procedure->Parameters->AddWithValue("@balance", this->Get_Balance());
	Procedure->Parameters->AddWithValue("@MOP", this->Get_Mean_Of_Payment());
	Procedure->Parameters->AddWithValue("@commande", this->Get_ID());
	Procedure->Parameters->AddWithValue("@date", this->Get_Date_Bill());

	return Procedure;
}

SqlCommand^ CM_Orders::Delete_Bill(void){
	Start_Procedure("Delete_Bill");

	Procedure->Parameters->AddWithValue("@ID", this->Get_Bill());

	return Procedure;
}

SqlCommand^ CM_Orders::Delete_All_Bill(void) {
	Start_Procedure("Delete_All_Bill");

	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return Procedure;
}

SqlCommand^ CM_Orders::Update_Bill(void) {
	Start_Procedure("Update_Bill");

	Procedure->Parameters->AddWithValue("@ID", this->Get_Bill());
	Procedure->Parameters->AddWithValue("@balance", this->Get_Balance());
	Procedure->Parameters->AddWithValue("@MOP", this->Get_Mean_Of_Payment());
	Procedure->Parameters->AddWithValue("@commande", this->Get_ID());
	Procedure->Parameters->AddWithValue("@date", this->Get_Date_Bill());

	return Procedure;
}

SqlCommand^ CM_Orders::Fetch_Order_Bill(void){
	Start_Procedure("Select_Bill");

	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return Procedure;
}

SqlCommand^ CM_Orders::Insert_Mean_Of_Payment(){
	Start_Procedure("Insert_MOP");

	Procedure->Parameters->AddWithValue("@name", this->Get_Mean_Of_Payment());

	return Procedure;
}

SqlCommand^ CM_Orders::Delete_Mean_Of_Payment(void){
	Start_Procedure("Delete_MOP");

	Procedure->Parameters->AddWithValue("@name", this->Get_Mean_Of_Payment());

	return Procedure;
}

SqlCommand^ CM_Orders::Update_Mean_Of_Payment(void){
	Start_Procedure("Update_MOP");

	Procedure->Parameters->AddWithValue("@name", this->Get_Mean_Of_Payment());

	return Procedure;
}

SqlCommand^ CM_Orders::Select_Mean_Of_Payment(void){
	Start_Procedure("Select_MOP");

	return Procedure;
}


SqlCommand^ CM_Orders::Insert_Product() {
	Start_Procedure("Insert_MOP");

	Procedure->Parameters->AddWithValue("@ORD", this->Get_ID());
	Procedure->Parameters->AddWithValue("@PRO", this->Get_Product());
	Procedure->Parameters->AddWithValue("@amount", this->Get_Amount());

	return Procedure;
}

SqlCommand^ CM_Orders::Delete_Product(void) {
	Start_Procedure("Delete_Contain");

	Procedure->Parameters->AddWithValue("@ORD", this->Get_ID());
	Procedure->Parameters->AddWithValue("@PRO", this->Get_Product());

	return Procedure;
}

SqlCommand^ CM_Orders::Select_Product(void) {
	Start_Procedure("Select_Contain");

	Procedure->Parameters->AddWithValue("@ORD", this->Get_ID());

	return Procedure;
}