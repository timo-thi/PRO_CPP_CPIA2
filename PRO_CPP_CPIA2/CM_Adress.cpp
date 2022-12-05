#include "CM_Adress.h"

using namespace NS_Composants;

int CM_Adress::Get_ID() {
	return this->ID;
}

void CM_Adress::Set_ID(int id){
	this->ID = id;
}

String^ CM_Adress::Get_Street_Name(){
	return this->Street_Name;
}

void CM_Adress::Set_Street_Name(String^ name){
	this->Street_Name = name;
}

String^ CM_Adress::Get_Street_Num(){
	return this->Street_Num;
}

void CM_Adress::Set_Street_Num(String^ num){
	this->Street_Num = num;
}

String^ CM_Adress::Get_Details(){
	return this->Details;
}

void CM_Adress::Set_Details(String^ details){
	this->Details = details;
}


int CM_Adress::Get_City_ID(){
	return this->City_ID;
}

void CM_Adress::Set_City_ID(int ct_id){
	this->City_ID = ct_id;
}

String^ CM_Adress::Get_City_Name(){
	return this->City_Name;
}

void CM_Adress::Set_City_Name(String^ name){
	this->City_Name = name;
}

String^ CM_Adress::Get_City_Zip_Code(){
	return this->City_Zip_Code;
}

void CM_Adress::Set_City_Zip_Code(String^ zip_code){
	this->City_Zip_Code = zip_code;
}


SqlCommand^ CM_Adress::Insert_Adress(void) {
	Start_Procedure("Insert_Adress");

	Procedure->Parameters->AddWithValue("@Street_Name", this->Get_Street_Name());
	Procedure->Parameters->AddWithValue("@Street_Num", this->Get_Street_Num());
	Procedure->Parameters->AddWithValue("@Details", this->Get_Details());
	Procedure->Parameters->AddWithValue("@CIT", this->Get_City_ID());

	return this->Procedure;
}

SqlCommand^ CM_Adress::Select_Adress(void) {
	Start_Procedure("Select_Adress");

	return this->Procedure;
}

SqlCommand^ CM_Adress::Update_Adress(void) {
	Start_Procedure("Update_Adress");

	Procedure->Parameters->AddWithValue("@Adress_Id", this->Get_ID());
	Procedure->Parameters->AddWithValue("@Street_Name", this->Get_Street_Name());
	Procedure->Parameters->AddWithValue("@Street_Num", this->Get_Street_Num());
	Procedure->Parameters->AddWithValue("@Details", this->Get_Details());
	Procedure->Parameters->AddWithValue("@CIT", this->Get_City_ID());

	return this->Procedure;
}

SqlCommand^ CM_Adress::Delete_Adress(void) {
	Start_Procedure("Delete_Adress");

	Procedure->Parameters->AddWithValue("@Adress_Id", this->Get_ID());

	return this->Procedure;
}

