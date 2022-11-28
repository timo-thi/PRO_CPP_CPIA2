#include "CM_Staff.h"

CM_Staff::CM_Staff() {}

String ^ CM_Staff::Insert_Staff() {}
String^ CM_Staff::Delete_Staff() {}
String^ CM_Staff::Select_Staff() {}
String^ CM_Staff::Update_Staff() {}

String^ CM_Staff::Insert_Role() {}
String^ CM_Staff::Delete_Role() {}
String^ CM_Staff::Select_Role() {}
String^ CM_Staff::Update_Role() {}

int* CM_Staff::Get_Role() { return this->Role; }
void CM_Staff::Set_Role(int* tRole) { this->Role = tRole; }

int* CM_Staff::Get_Adresse() { return this->Adresse; }
void CM_Staff::Set_Adresse(int* tAdresse) { this->Adresse = tAdresse; }
