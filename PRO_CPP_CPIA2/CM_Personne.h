#pragma once
#include "CM_Classic.h"
ref class CM_Personne : public CM_Classic
{
protected:
	int ID;
	String^ Nom;

	String^ Prenom;
public:
	CM_Personne();
	String^ Insert_Personne(void);
	String^ Delete_Personne(void);
	String^ Select_Personne(void);
	String^ Update_Personne(void);
	void Set_ID(int);
	int Get_ID(void);
	void Set_Nom(String^);
	String^ Get_Nom(void);
	void Set_Prenom(String^);
	String^ Get_Prenom(void);
	String^ Insert_Adress(void);
	String^ Select_Adress(void);
	String^ Update_Adress(void);
	String^ Delete_Adress(void);
};

