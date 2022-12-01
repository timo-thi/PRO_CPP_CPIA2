#pragma once
#include "CM_Classic.h"

namespace NS_Composants
{
    ref class CM_Stock :
        public CM_Classic
    {
    protected:
        int Reference;
        String^ Nom;
        int Prix;
        int Stock;
        int Seuil_restock;

    public:
        CM_Stock();

        String^ Get_Nom();
        void Set_Nom(String^);
        int Get_Reference();
        void Set_Reference(int);
        int Get_Prix();
        void Set_Prix(int);
        int Get_Stock();
        void Set_Stock(int);
        int Get_Seuil_restock();
        void Set_Seuil_restock(int);

        SqlCommand^ Insert_Stock(void);
        SqlCommand^ Delete_Stock(void);
        SqlCommand^ Update_Stock(void);
        SqlCommand^ Select_Stock(void);
    };
};