#include "SG_Stat.h"
#include "CM_Stat.h"
#include <exception>

using namespace NS_Services;

SG_Stat::SG_Stat(void){
	this->CMappage = gcnew CM_Stat;
	this->CConnexion = gcnew CM_Connexion;
	this->Set_Simu_TVA(20);
	this->Set_Simu_Marge(15);
	this->Set_Simu_Remise(6);
	this->Set_Simu_Demarque(5);
}

double SG_Stat::Calcul_Panier(void) {
	DataSet^ dt;
	dt = this->CConnexion->getRows(this->CMappage->Calcul_Panier(), "CP");

	return Convert::ToDouble(dt->Tables[0]->Rows[0]->ItemArray[0]);
}

double SG_Stat::Calcul_Chiffre_Affaire(String^ mois){
	DataSet^ dt = gcnew DataSet;
	dt = this->CConnexion->getRows(this->CMappage->Calcul_Chiffre_Affaire(mois), "CCA");

	return Convert::ToDouble(dt->Tables[0]->Rows[0]->ItemArray[0]);
}

array<String^>^ SG_Stat::Produit_Sous_Seuil(void){
	DataSet^ dt = gcnew DataSet;
	dt = this->CConnexion->getRows(this->CMappage->Produit_Sous_Seuil(), "PSS");

	array<String^>^ list = gcnew array<String^>(dt->Tables[0]->Rows->Count);
	for (int i = 0; i < dt->Tables[0]->Rows->Count; i++) {
		list[i] = (String^)dt->Tables[0]->Rows[i]->ItemArray[0] + " - "
				+ Convert::ToString(dt->Tables[0]->Rows[i]->ItemArray[1]) + "€ - Qtt: "
				+ Convert::ToString(dt->Tables[0]->Rows[i]->ItemArray[2]) + " - Threshold: "
				+ Convert::ToString(dt->Tables[0]->Rows[i]->ItemArray[3]);
	}

	return list;
}

double SG_Stat::Calcul_Montant_Total_client(int ID){
	DataSet^ dt;
	dt = this->CConnexion->getRows(this->CMappage->Calcul_Montant_Total_client(ID), "CMTC");

	if (!dt->Tables[0]->Rows[0]->ItemArray[0]) {
		return 0;
	}

	if (dt->Tables[0]->Rows[0]->IsNull(0)) return 0;

	return Convert::ToDouble(dt->Tables[0]->Rows[0]->ItemArray[0]);
}

array<String^>^ SG_Stat::Articles_Moins_Vendus(void){
	DataSet^ dt = gcnew DataSet;
	dt = this->CConnexion->getRows(this->CMappage->Articles_Moins_Vendus(), "AMV");

	array<String^>^ list = gcnew array<String^>(dt->Tables[0]->Rows->Count);
	for (int i = 0; i < dt->Tables[0]->Rows->Count; i++) {
		list[i] = (String^)dt->Tables[0]->Rows[i]->ItemArray[0];
	}

	return list;
}

array<String^>^ SG_Stat::Articles_Plus_Vendus(void){
	DataSet^ dt = gcnew DataSet;
	dt = this->CConnexion->getRows(this->CMappage->Articles_Plus_Vendus(), "APV");

	array<String^>^ list = gcnew array<String^>(dt->Tables[0]->Rows->Count);
	for (int i = 0; i < dt->Tables[0]->Rows->Count; i++) {
		list[i] = (String^)dt->Tables[0]->Rows[i]->ItemArray[0];
	}

	return list;
}

double SG_Stat::Valeur_Achat_Stock(void) {
	DataSet^ dt;
	dt = this->CConnexion->getRows(this->CMappage->Valeur_Achat_Stock(), "VAS");

	this->Set_Val_Achat(Convert::ToDouble(dt->Tables[0]->Rows[0]->ItemArray[0]));

	return this->Get_Val_Achat();
}

double SG_Stat::Valeur_Commerciale_Stock(void){

	double val_achat = this->Get_Val_Achat() * (this->Get_Simu_Marge()/100.0 + 1) * (this->Get_Simu_Demarque()/100.0 + 1) * (this->Get_Simu_Remise()/100.0 + 1) * (this->Get_Simu_TVA()/100.0 + 1);

	return val_achat;
}



double SG_Stat::Get_Val_Achat() {
	return this->Val_Achat;
}
void SG_Stat::Set_Val_Achat(double Valeur){
	this->Val_Achat = Valeur;
}


float SG_Stat::Get_Simu_TVA() {
	return this->Simu_TVA;
}

void SG_Stat::Set_Simu_TVA(float TVA){
	this->Simu_TVA = TVA;
}

int SG_Stat::Get_Simu_Marge(){
	return this->Simu_Marge;
}

void SG_Stat::Set_Simu_Marge(int Marge){
	this->Simu_Marge= Marge;
}

int SG_Stat::Get_Simu_Remise(){
	return this->Simu_Remise;
}

void SG_Stat::Set_Simu_Remise(int Remise){
	this->Simu_Remise = Remise;
}

int SG_Stat::Get_Simu_Demarque(){
	return this->Simu_Demarque;
}

void SG_Stat::Set_Simu_Demarque(int Demarque){
	this->Simu_Demarque = Demarque;
}
