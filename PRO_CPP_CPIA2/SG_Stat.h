#pragma once
#include "SG_Classic.h"
#include "CM_Stat.h"

using namespace NS_Composants;

namespace NS_Services
{
    ref class SG_Stat :
        public SG_Classic
    {
    private:
        CM_Stat^ CMappage;
        CM_Connexion^ CConnexion;

        double Val_Achat;

        float Simu_TVA;
        int Simu_Marge;
        int Simu_Remise;
        int Simu_Demarque;
    public:
        SG_Stat(void);
        double Calcul_Panier(void);
        double Calcul_Chiffre_Affaire(String^ mois);
        array<String^>^ Produit_Sous_Seuil(void);
        double Calcul_Montant_Total_client(int ID);
        array<String^>^ Articles_Plus_Vendus(void);
        array<String^>^ Articles_Moins_Vendus(void);
        double Valeur_Commerciale_Stock(void);
        double Valeur_Achat_Stock(void);

        double Get_Val_Achat();
        void Set_Val_Achat(double);

        float Get_Simu_TVA();
        void Set_Simu_TVA(float);
        int Get_Simu_Marge();
        void Set_Simu_Marge(int);
        int Get_Simu_Remise();
        void Set_Simu_Remise(int);
        int Get_Simu_Demarque();
        void Set_Simu_Demarque(int);
    };
};
