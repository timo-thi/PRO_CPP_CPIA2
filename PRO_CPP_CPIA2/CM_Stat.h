#pragma once
#include "CM_Classic.h"

namespace NS_Composants
{
    ref class CM_Stat :
        public CM_Classic
    {
    public:
        SqlCommand^ Calcul_Panier(void);
        SqlCommand^ Calcul_Chiffre_Affaire(String^ mois);
        SqlCommand^ Produit_Sous_Seuil(void);
        SqlCommand^ Calcul_Montant_Total_client(int ID);
        SqlCommand^ Articles_Plus_Vendus(void);
        SqlCommand^ Articles_Moins_Vendus(void);
        SqlCommand^ Valeur_Commerciale_Stock(void);
        SqlCommand^ Valeur_Achat_Stock(void);
    };
};
