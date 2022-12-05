#pragma once
#include "CM_Personne.h"

namespace NS_Composants
{
    ref class CM_Staff :
        public CM_Personne {

    private:
        String^ Role;
        int Adresse_ID;
        int Person_ID;
        int Sup_ID;
    public:

        CM_Staff();

        SqlCommand^ Insert_Staff();
        SqlCommand^ Delete_Staff();
        SqlCommand^ Select_Staff();
        SqlCommand^ Update_Staff();

        

        String^ Get_Role();
        void Set_Role(String^);

        int Get_Adresse();
        void Set_Adresse(int);

        int Get_Person();
        void Set_Person(int);

        int Get_Sup();
        void Set_Sup(int);
    };
};