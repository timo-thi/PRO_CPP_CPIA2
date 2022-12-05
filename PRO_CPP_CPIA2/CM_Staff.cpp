#include "CM_Staff.h"

using namespace NS_Composants;

CM_Staff::CM_Staff() {}

SqlCommand^ CM_Staff:: Insert_Staff() {
	Start_Procedure("Insert_Staff");
	
	Procedure->Parameters->AddWithValue("@superieur", this->Get_Superieur());
	Procedure->Parameters->AddWithValue("@role", this->Get_Role());
	
	return this->Procedure;
}

SqlCommand^ CM_Staff::Delete_Staff() {
	Start_Procedure("Delete_Staff");

	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return this->Procedure;
}

SqlCommand^ CM_Staff::Select_Staff() {
	Start_Procedure("Select_Staff");

	return this->Procedure;
}

SqlCommand^ CM_Staff::Update_Staff() {
	Start_Procedure("Update_Staff");

	Procedure->Parameters->AddWithValue("@superieur", this->Get_Superieur());
	Procedure->Parameters->AddWithValue("@role", this->Get_Role());

	return this->Procedure;
}



SqlCommand^ CM_Staff::Insert_Role() {
	Start_Procedure("Insert_Role");

	Procedure->Parameters->AddWithValue("@ID", this->Get_ID());

	return this->Procedure;
}

SqlCommand^ CM_Staff::Delete_Role() {
	Start_Procedure("Delete_Role");


	Procedure->Parameters->AddWithValue("@Id", this->Get_Role());

	return this->Procedure;
}
SqlCommand^ CM_Staff::Select_Role() {
	Start_Procedure("Select_Role");


	return this->Procedure;
}

SqlCommand^ CM_Staff::Update_Role() {
	Start_Procedure("Update_Role");

	Procedure->Parameters->AddWithValue("@Id", this->Get_Role());

	return this->Procedure;
}


String^ CM_Staff::Get_Role() { return this->Role; }
void CM_Staff::Set_Role(String^ tRole) { this->Role = tRole; }

int CM_Staff::Get_Superieur() { return this->Superieur; }
void CM_Staff::Set_Superieur(int tsuperieur) { this->Superieur = tsuperieur; }
