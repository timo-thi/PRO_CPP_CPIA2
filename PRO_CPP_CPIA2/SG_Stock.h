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
    };
};
