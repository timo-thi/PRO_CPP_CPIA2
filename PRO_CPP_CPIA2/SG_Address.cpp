#include "SG_Address.h"

using namespace NS_Services;

SG_Address::SG_Address() : SG_Classic::SG_Classic() {
	this->CMappage = gcnew CM_Adress;
	this->CConnexion = gcnew CM_Connexion;
}

void SG_Address::Add_Adress(String^ Name, String^ Num, String^ Details, int City_Id) {
	this->CMappage->Set_Street_Name(Name);
	this->CMappage->Set_Street_Num(Num);
	this->CMappage->Set_Details(Details);
	this->CMappage->Set_City_ID(City_Id);

	this->CConnexion->actionRows(this->CMappage->Insert_Adress());
}

void SG_Address::Remove_Adress(int id) {
	this->CMappage->Set_ID(id);

	this->CConnexion->actionRowID(this->CMappage->Delete_Adress());
}

void SG_Address::Edit_Adress(int ID, String^ Name, String^ Num, String^ Details, int City_Id) {
	this->CMappage->Set_ID(ID);
	this->CMappage->Set_Street_Name(Name);
	this->CMappage->Set_Street_Num(Num);
	this->CMappage->Set_Details(Details);
	this->CMappage->Set_City_ID(City_Id);

	this->CConnexion->actionRows(this->CMappage->Update_Adress());
}

void SG_Address::Select_Adress() {
	this->DS = gcnew DataSet;

	this->DS = this->CConnexion->getRows(this->CMappage->Select_Adress(), "Adr");
}