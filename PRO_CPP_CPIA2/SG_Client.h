#pragma once
#include "SG_Personne.h"

ref class SG_Client :
    public SG_Personne {

public:

    SG_Client();

    void Add_Client();
    void Remove_Client();
    void Update_Client();
    void Fetch_Client();
};

