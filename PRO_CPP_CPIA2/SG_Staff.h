#pragma once
#include "SG_Personne.h"

ref class SG_Staff :
    public SG_Personne {

public:

    SG_Staff();

    void Add_Staff();
    void Remove_Staff();
    void Update_Staff();
    void Fetch_Staff();
};

