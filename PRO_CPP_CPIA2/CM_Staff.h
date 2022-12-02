#pragma once
#include "CM_Personne.h"*

namespace NS_Composants
{
    ref class CM_Staff :
        public CM_Personne {

    private:
        String^ Role;
        int Superieur;

    public:

        CM_Staff();

        SqlCommand^ Insert_Staff();
        SqlCommand^ Delete_Staff();
        SqlCommand^ Select_Staff();
        SqlCommand^ Update_Staff();

        SqlCommand^ Insert_Role();
        SqlCommand^ Delete_Role();
        SqlCommand^ Select_Role();
        SqlCommand^ Update_Role();

        String^ Get_Role();
        void Set_Role(String^);

        int Get_Superieur();
        void Set_Superieur(int);
    };
};