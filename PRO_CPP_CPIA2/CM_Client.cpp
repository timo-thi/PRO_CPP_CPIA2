#include "CM_Client.h"

    CM_Client::CM_Client() {}

        //String^ Insert_Client();
        //String^ Delete_Client();
        //String^ Select_Client();
        //String^ UpdateClient();

    String^ CM_Client::Get_Mail() { return this->Mail; }
    void CM_Client::Set_Mail(String^ tMail) { this->Mail = tMail; }

    String^ CM_Client::Get_Date_Anniv() { return this->Date_Anniv; }
    void CM_Client::Set_Date_Anniv(String^ tDate) { this->Date_Anniv = tDate; }

    int* CM_Client::Get_Adresse_Livraison() { return this->Adresse_Livraison; }
    void CM_Client::Set_Adresse_Livraison(int* tAdresse) { this->Adresse_Livraison = tAdresse; }

    int* CM_Client::Get_Adresse_Facturation() { return this->Adresse_Facturation; }
    void CM_Client::Set_Adresse_Livraison(int* tAdresse) { this->Adresse_Facturation = tAdresse; }

