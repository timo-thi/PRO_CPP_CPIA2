#pragma once
#include "SG_Classic.h"
#include "CM_Personne.h"
using namespace NS_Composants;
namespace NS_Services
{
    ref class SG_Personne : public SG_Classic {
    private:
        DataSet^ dataPersonne;
        CM_Personne^ MapPersonne;
        CM_Connexion^ AccesPersonne;
    public:

        SG_Personne();
        DataSet^ ListePersonne(String^ table);
        int Add_Personne(String^, String^);
        void Remove_Personne(int);
        void Update_Personne(int, String^, String^);
    };
};
