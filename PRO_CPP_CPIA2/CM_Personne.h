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
		String^ Street_Name;
		String^ Details;
		int ID_Adress;
		int Num;
		int ID_City;


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

		void Set_ID_Adress(int);
		int Get_ID_Adress(void);

		void Set_Details(String^);
		String^ Get_Details(void);

		void Set_Street_Name(String^);
		String^ Get_Street_Name(void);

		void Set_Num(int);
		int Get_Num(void);

		void Set_ID_City(int);
		int Get_ID_City(void);
	};
};
