#pragma once
#include "CM_Personne.h"

using namespace std;

namespace NS_Composants
{
    ref class CM_Client :
        public CM_Personne {

    private:

        String^ Mail;
        DateTime^ Date_Anniv;
        DateTime^ Date_Premiere_Commande;
        int Personne_ID;
        int adresseLivraison;
        int adresseFacturation;
        

    public:

        CM_Client();

        SqlCommand^ Insert_Client();
        SqlCommand^ Delete_Client();
        SqlCommand^ Select_Client();
        SqlCommand^ Update_Client();

        String^ Get_Mail();
        void Set_Mail(String^);

        DateTime^ Get_Date_Anniv();
        void Set_Date_Anniv(DateTime^);

        DateTime^ Get_Date_Premiere_Commande();
        void Set_Date_Premiere_Commande(DateTime^);
        
        int Get_Personne();
        void Set_Personne(int);

        int Get_Facturation();
        void Set_Facturation(int);

        int Get_Livraison();
        void Set_Livraison(int);

        SqlCommand^ Insert_Facturation();
        SqlCommand^ Delete_Facturation();
        SqlCommand^ Select_Facturation();
        SqlCommand^ Update_Facturation();

        SqlCommand^ Insert_Livraison();
        SqlCommand^ Delete_Livraison();
        SqlCommand^ Select_Livraison();
        SqlCommand^ Update_Livraison();


    };
};