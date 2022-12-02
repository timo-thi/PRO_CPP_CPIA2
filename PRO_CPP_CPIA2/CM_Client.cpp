#include "CM_Client.h"

using namespace NS_Composants;

CM_Client::CM_Client() {}

SqlCommand^ CM_Client::Insert_Client() {
    Start_Procedure("Insert_Client");
    Procedure->Parameters->AddWithValue("Person_ID", this->Get_Personne());
    Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());
    Procedure->Parameters->AddWithValue("@date_naissance", this->Get_Date_Anniv());
    Procedure->Parameters->AddWithValue("@date_commande", this->Get_Date_Premiere_Commande());

    return this->Procedure;
}

SqlCommand^ CM_Client::Delete_Client() {
    Start_Procedure("Delete_Client");
    Procedure->Parameters->AddWithValue("@ID", this->Get_Personne());

    return this->Procedure;
}

SqlCommand^ CM_Client::Select_Client() {
    Start_Procedure("Select_Client");


    return this->Procedure;
}

SqlCommand^ CM_Client::Update_Client() {
    Start_Procedure("Update_Client");
    Procedure->Parameters->AddWithValue("@ID", this->Get_Personne());
    Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());
    Procedure->Parameters->AddWithValue("@date_naissance", this->Get_Date_Anniv());
    Procedure->Parameters->AddWithValue("@date_commande", this->Get_Date_Premiere_Commande());

    return this->Procedure;
}


String^ CM_Client::Get_Mail() { 
    return this->Mail; 
}
void CM_Client::Set_Mail(String^ tMail) { 
    this->Mail = tMail; 
}

String^ CM_Client::Get_Date_Anniv() { 
    return this->Date_Anniv; 
}
void CM_Client::Set_Date_Anniv(String^ tDate) { 
    this->Date_Anniv = tDate; 
}

String^ CM_Client::Get_Date_Premiere_Commande() {
    return this->Date_Premiere_Commande;
}

void CM_Client::Set_Date_Premiere_Commande(String^ tDate) {
    this->Date_Premiere_Commande = tDate;
}
int CM_Client::Get_Personne() {
    return this->Personne_ID;
}
void CM_Client::Set_Personne(int tMail) {
    this->Personne_ID = tMail;
}



