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
        String^ Date_Premiere_Commande;
        int Personne_ID;
        

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

        String^ Get_Date_Premiere_Commande();
        void Set_Date_Premiere_Commande(String^);
        
        int Get_Personne();
        void Set_Personne(int);


    };
};