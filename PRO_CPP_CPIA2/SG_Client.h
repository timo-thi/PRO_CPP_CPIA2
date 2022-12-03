#pragma once
#include "SG_Personne.h"
#include "CM_Client.h"
using namespace NS_Composants;
namespace NS_Services
{
    ref class SG_Client :public SG_Personne {
    private: 
        DataSet^ data;

    public:

        SG_Client();
        void Add_Client();
        void Remove_Client();
        void Update_Client();
        void Fetch_Client();
    };
};
