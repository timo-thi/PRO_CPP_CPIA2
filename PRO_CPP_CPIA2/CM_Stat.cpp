#include "CM_Stat.h"

using namespace NS_Composants;

SqlCommand^ CM_Stat::Calcul_Panier(void) {
	Start_Procedure("Panier_Moyen");
	return this->Procedure;
}

SqlCommand^ CM_Stat::Calcul_Chiffre_Affaire(String^ mois){
	Start_Procedure("Select_Chiffre_Mois");

	this->Procedure->Parameters->AddWithValue("@Mois", mois);

	return this->Procedure;
}

SqlCommand^ CM_Stat::Produit_Sous_Seuil(void){
	Start_Procedure("Select_Produit_Sous_Seuil");

	return this->Procedure;
}

SqlCommand^ CM_Stat::Calcul_Montant_Total_client(int ID){
	Start_Procedure("Total_Client");

	this->Procedure->Parameters->AddWithValue("@ID", ID);

	return this->Procedure;
}

SqlCommand^ CM_Stat::Articles_Plus_Vendus(void){
	Start_Procedure("Ten_More_Purchased_Products");

	return this->Procedure;
}

SqlCommand^ CM_Stat::Articles_Moins_Vendus(void){
	Start_Procedure("Ten_Less_Purchased_Products");

	return this->Procedure;
}

SqlCommand^ CM_Stat::Valeur_Commerciale_Stock(void){
	/*
		Warning ! This method should not be called yet.
		Use CM_Stat::Valeur_Commerciale_Stock instead and add TVA or other modification in the software.
	*/
	Start_Procedure("Valeur_Ach_Stock");

	return this->Procedure;
}

SqlCommand^ CM_Stat::Valeur_Achat_Stock(void){
	Start_Procedure("Valeur_Ach_Stock");

	return this->Procedure;
}
