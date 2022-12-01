#include "CM_Client.h"

using namespace NS_Composants;

CM_Client::CM_Client() {}

String^ CM_Client::Insert_Client() {
    return "NULL";
}

String^ CM_Client::Delete_Client() {
    return "NULL";
}

String^ CM_Client::Select_Client() {
    return "NULL";
}

String^ CM_Client::UpdateClient() {
    return "NULL";
}

String^ CM_Client::Get_Mail() { return this->Mail; }
void CM_Client::Set_Mail(String^ tMail) { this->Mail = tMail; }

String^ CM_Client::Get_Date_Anniv() { return this->Date_Anniv; }
void CM_Client::Set_Date_Anniv(String^ tDate) { this->Date_Anniv = tDate; }

int* CM_Client::Get_Adresse_Livraison() { return this->Adresse_Livraison; }
void CM_Client::Set_Adresse_Livraison(int* tAdresse) { this->Adresse_Livraison = tAdresse; }

int* CM_Client::Get_Adresse_Facturation() { return this->Adresse_Facturation; }
void CM_Client::Set_Adresse_Facturation(int* tAdresse) { this->Adresse_Facturation = tAdresse; }

