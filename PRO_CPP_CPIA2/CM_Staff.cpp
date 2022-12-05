#include "CM_Staff.h"

using namespace NS_Composants;

CM_Staff::CM_Staff() {}

SqlCommand^ CM_Staff::Insert_Staff() {
    Start_Procedure("Insert_Staff");
    Procedure->Parameters->AddWithValue("@ID", this->Get_Person());
    Procedure->Parameters->AddWithValue("@superieur", this->Get_Sup());
    Procedure->Parameters->AddWithValue("@role", this->Get_Role());

    return this->Procedure;
}

SqlCommand^ CM_Staff::Delete_Staff() {
    Start_Procedure("Delete_Staff");

    Procedure->Parameters->AddWithValue("@ID", this->Get_Person());

    return this->Procedure;
}

SqlCommand^ CM_Staff::Select_Staff() {
    Start_Procedure("Select_Staff");

    return this->Procedure;
}

SqlCommand^ CM_Staff::Update_Staff() {
    Start_Procedure("Update_Staff");
    Procedure->Parameters->AddWithValue("@ID", this->Get_Person());
    Procedure->Parameters->AddWithValue("@superieur", this->Get_Sup());
    Procedure->Parameters->AddWithValue("@role", this->Get_Role());

    return this->Procedure;
}





String^ CM_Staff::Get_Role() { return this->Role; }
void CM_Staff::Set_Role(String^ tRole) { this->Role = tRole; }

int CM_Staff::Get_Adresse() { return this->Adresse_ID; }
void CM_Staff::Set_Adresse(int tAdresse) { this->Adresse_ID = tAdresse; }


int CM_Staff::Get_Sup() { return this->Sup_ID; }
void CM_Staff::Set_Sup(int tAdresse) { this->Sup_ID = tAdresse; }

int CM_Staff::Get_Person() { return this->Person_ID; }
void CM_Staff::Set_Person(int tAdresse) { this->Person_ID = tAdresse; }
