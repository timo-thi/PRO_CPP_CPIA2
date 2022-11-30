#include "CM_Orders.h"

CM_Orders::CM_Orders(void){

}

String^ CM_Orders::Get_Date_Liv(void){
	return this->Date_Livraison;
}

void CM_Orders::Set_Date_Liv(String^ New_DL){
	this->Date_Livraison = New_DL;
}

int CM_Orders::Get_Client_ID(void){
	return this->Client_id;
}

void CM_Orders::Set_Client_ID(int New_ClID){
	this->Client_id = New_ClID;
}

int CM_Orders::Get_Mean_Of_Payment(void){
	return this->Mean_Of_Payement;
}

void CM_Orders::Set_Mean_Of_Payment(int New_MOP){
	this->Mean_Of_Payement = New_MOP;
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





String^ CM_Orders::Insert_Order(void){
	return "NULL";
}

String^ CM_Orders::Delete_Order(void){
	return "NULL";
}

String^ CM_Orders::Update_Order(void){
	return "NULL";
}

String^ CM_Orders::Select_Order(void){
	return "NULL";
}


String^ CM_Orders::Insert_Bill(void){
	return "NULL";
}

String^ CM_Orders::Delete_Bill(void){
	return "NULL";
}

String^ CM_Orders::Update_Bill(void){
	return "NULL";
}

String^ CM_Orders::Select_Bill(void){
	return "NULL";
}


String^ CM_Orders::Insert_Mean_Of_Payment(void){
	return "NULL";
}

String^ CM_Orders::Delete_Mean_Of_Payment(void){
	return "NULL";
}

String^ CM_Orders::Update_Mean_Of_Payment(void){
	return "NULL";
}

String^ CM_Orders::Select_Mean_Of_Payment(void){
	return "NULL";
}
