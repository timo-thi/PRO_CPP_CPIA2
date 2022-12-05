#include "CM_Client.h"

using namespace NS_Composants;

CM_Client::CM_Client() {}

SqlCommand^ CM_Client::Insert_Client() {
    Start_Procedure("Insert_Customer");
    Procedure->Parameters->AddWithValue("Person_ID", this->Get_Personne());
    Procedure->Parameters->AddWithValue("@mail", this->Get_Mail());
    Procedure->Parameters->AddWithValue("@date_naissance", this->Get_Date_Anniv());
    Procedure->Parameters->AddWithValue("@date_commande", this->Get_Date_Premiere_Commande());
   

    return this->Procedure;
}

SqlCommand^ CM_Client::Delete_Client() {
    Start_Procedure("Delete_Customer");
    Procedure->Parameters->AddWithValue("@ID", this->Get_Personne());

    return this->Procedure;
}

SqlCommand^ CM_Client::Select_Client() {
    Start_Procedure("Select_Customer");


    return this->Procedure;
}

SqlCommand^ CM_Client::Update_Client() {
    Start_Procedure("Update_Customer");
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

DateTime^ CM_Client::Get_Date_Anniv() { 
    return this->Date_Anniv; 
}
void CM_Client::Set_Date_Anniv(DateTime^ tDate) { 
    this->Date_Anniv = tDate; 
}

DateTime^ CM_Client::Get_Date_Premiere_Commande() {
    return this->Date_Premiere_Commande;
}

void CM_Client::Set_Date_Premiere_Commande(DateTime^ tDate) {
    this->Date_Premiere_Commande = tDate;
}
int CM_Client::Get_Personne() {
    return this->Personne_ID;
}
void CM_Client::Set_Personne(int tMail) {
    this->Personne_ID = tMail;
}

int CM_Client::Get_Facturation() {
    return this->adresseFacturation;
}
void CM_Client::Set_Facturation(int tMail) {
    this->adresseFacturation = tMail;
}

int CM_Client::Get_Livraison() {
    return this->adresseLivraison;
}
void CM_Client::Set_Livraison(int tMail) {
    this->adresseLivraison = tMail;
}

SqlCommand^ CM_Client::Insert_Facturation() {
    Start_Procedure("Insert_Billing");
    Procedure->Parameters->AddWithValue("@PER", this->Get_Personne());
    Procedure->Parameters->AddWithValue("@ADR", this->Get_Facturation());
    return this->Procedure;

}

SqlCommand^ CM_Client::Select_Facturation() {
    Start_Procedure("Select_Billing");
    return this->Procedure;

}

SqlCommand^ CM_Client::Delete_Facturation() {
    Start_Procedure("Delete_Billing");
    Procedure->Parameters->AddWithValue("@PER", this->Get_Personne());
    return this->Procedure;

}
SqlCommand^ CM_Client::Update_Facturation() {
    Start_Procedure("Update_Billing");
    Procedure->Parameters->AddWithValue("@PER", this->Get_Personne());
    Procedure->Parameters->AddWithValue("@ADR", this->Get_Facturation());
    return this->Procedure;

}

SqlCommand^ CM_Client::Select_Livraison() {
    Start_Procedure("Select_Deliver");
    return this->Procedure;

}

SqlCommand^ CM_Client::Delete_Livraison() {
    Start_Procedure("Delete_Deliver");
    Procedure->Parameters->AddWithValue("@PER", this->Get_Personne());
    return this->Procedure;

}
SqlCommand^ CM_Client::Update_Livraison() {
    Start_Procedure("Update_Deliver");
    Procedure->Parameters->AddWithValue("@PER", this->Get_Personne());
    Procedure->Parameters->AddWithValue("@ADR", this->Get_Livraison());
    return this->Procedure;

}

SqlCommand^ CM_Client::Insert_Livraison() {
    Start_Procedure("Insert_Deliver");
    Procedure->Parameters->AddWithValue("@PER", this->Get_Personne());
    Procedure->Parameters->AddWithValue("@ADR", this->Get_Livraison());
    return this->Procedure;

}