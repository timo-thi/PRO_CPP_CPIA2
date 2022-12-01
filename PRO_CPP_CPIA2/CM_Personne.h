#pragma once
#include "CM_Classic.h"

namespace NS_Composants
{
	ref class CM_Personne : public CM_Classic
	{
	protected:
		int ID;
		String^ Nom;
		String^ Prenom;


	public:
		CM_Personne();
		SqlCommand^ Insert_Personne(void);
		SqlCommand^ Delete_Personne(void);
		SqlCommand^ Select_Personne(void);
		SqlCommand^ Update_Personne(void);

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
};
