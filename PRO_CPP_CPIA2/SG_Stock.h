#pragma once
#include "SG_Classic.h"
#include "CM_Stock.h"


namespace NS_Services
{
    ref class SG_Stock :
        public SG_Classic {

    private:

        DataSet^ DS;
        CM_Stock^ Map_Stock;
        CM_Connexion^ Connect;

        int Reference;
        String^ Nom;
        int Prix;
        int Stock;
        int Seuil_Stock;

    public:

        SG_Stock();

        DataSet^ Fetch_Products(String^);

        void Add_Products();
        void Remove_Products();
        void Update_Products();

        int Get_Reference();
        void Set_Reference(int);

        String^ Get_Nom();
        void Set_Nom(String^);

        int Get_Prix();
        void Set_Prix(int);

        int Get_Stock();
        void Set_Stock(int);

        int Get_Seuil_Stock();
        void Set_Seuil_Stock(int);
    };
};
