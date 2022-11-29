#pragma once
#include "CM_Classic.h"

ref class CM_Stat :
    public CM_Classic
{
public:
    String^ Calcul_Panier(void);
    String^ Calcul_Chiffre_Affaire(String^ mois);
    String^ Produit_Sous_Seuil(void);
    String^ Calcul_Montant_Total_client(int ID);
    String^ Articles_Plus_Vendus(void);
    String^ Articles_Moins_Vendus(void);
    String^ Valeur_Commerciale_Stock(void);
    String^ Valeur_Achat_Stock(void);
};

