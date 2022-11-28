#pragma once
#include "CM_Personne.h"*

ref class CM_Staff :
    public CM_Personne {

private:
    int* Role;
    int* Adresse;

public:

    CM_Staff();

    String^ Insert_Staff();
    String^ Delete_Staff();
    String^ Select_Staff();
    String^ Update_Staff();
    
    String^ Insert_Role();
    String^ Delete_Role();
    String^ Select_Role();
    String^ Update_Role();

    int* Get_Role();
    void Set_Role(int*);

    int* Get_Adresse();
    void Set_Adresse(int*);
};

