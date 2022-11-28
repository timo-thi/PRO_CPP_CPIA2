#pragma once
#include "SG_Classic.h"

ref class SG_Personne :
    public SG_Classic {

public:

    SG_Personne();

    void Add_Personne();
    void Remove_Personne();
    void Update_Personne();
    void Fetch_Personne();
};

