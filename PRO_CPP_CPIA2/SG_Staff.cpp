#include "SG_Staff.h"
#include"CM_Staff.h"

using namespace NS_Services;

SG_Staff::SG_Staff() {
	this->AccesStaff = gcnew CM_Connexion();
	this->MapStaff = gcnew CM_Staff();
	this->dataStaff = gcnew Data::DataSet();
}

int SG_Staff::Add_Staff(int IdStaff,int IdSup,String^ role,int adresseID,DateTime^ date,String^ mail) {
	int id_Staff;
	this->MapStaff->Set_ID(IdStaff);
	this->MapStaff->Set_MailStaff(mail);
	this->MapStaff->Set_Sup(IdSup);
	this->MapStaff->Set_DateStaff(date);
	this->MapStaff->Set_Adresse(adresseID);
	this->MapStaff->Set_MailStaff(mail);
	this->MapStaff->Set_Role(role);
	id_Staff = this->AccesStaff->actionRowID(this->MapStaff->Insert_Staff());
	return id_Staff;
}
void SG_Staff::Remove_Staff(int id){
	this->MapStaff->Set_ID(id);
	this->AccesStaff->actionRows(this->MapStaff->Delete_Staff());
}
void SG_Staff::Update_Staff(int IdStaff, int IdSup, String^ role, int adresseID, DateTime^ date,String^ mail) {
	this->MapStaff->Set_ID(IdStaff);
	this->MapStaff->Set_MailStaff(mail);
	this->MapStaff->Set_Sup(IdSup);
	this->MapStaff->Set_DateStaff(date);
	this->MapStaff->Set_Adresse(adresseID);
	this->MapStaff->Set_MailStaff(mail);
	this->MapStaff->Set_Role(role);
	this->AccesStaff->actionRows(this->MapStaff->Update_Staff());
}


DataSet^ SG_Staff::ListeStaff(String^ table) {
	this->dataStaff->Clear();
	this->dataStaff = this->AccesStaff->getRows(this->MapStaff->Select_Staff(), table);
	return this->dataStaff;
}
