#pragma once
#include "CM_Personne.h"

using namespace std;

namespace NS_Composants
{
    ref class CM_Client :
        public CM_Personne {

    private:

        String^ Mail;
        String^ Date_Anniv;
        int Adresse_Livraison;
        int Adresse_Facturation;

    public:

        CM_Client();

        SqlCommand^ Insert_Client();
        SqlCommand^ Delete_Client();
        SqlCommand^ Select_Client();
        SqlCommand^ Update_Client();

        String^ Get_Mail();
        void Set_Mail(String^);

        String^ Get_Date_Anniv();
        void Set_Date_Anniv(String^);

        int Get_Adresse_Livraison();
        void Set_Adresse_Livraison(int);

        int Get_Adresse_Facturation();
        void Set_Adresse_Facturation(int);
    };
};