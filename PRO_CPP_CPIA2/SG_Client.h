#pragma once
#include "SG_Personne.h"
#include "CM_Client.h"
using namespace NS_Composants;
namespace NS_Services
{
    ref class SG_Client :public SG_Personne {
    private:
        DataSet^ dataClient;
        CM_Client^ MapClient;
        CM_Connexion^ AccesClient;
        DataSet^ dataFacturation;
        DataSet^ dataLivraison;
    public:

        SG_Client();
        DataSet^ ListeClient(String^ table);
        DataSet^ ListeFacturation(String^ table);
        DataSet^ ListeLivraison(String^ table);
        int Add_Client(int, String^, DateTime^, DateTime^, int, int);
        void Remove_Client(int);
        void Update_Client(int, String^ ,DateTime^, DateTime^,int,int);
       


    };
};
