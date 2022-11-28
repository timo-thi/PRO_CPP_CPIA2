#pragma once
#include "SG_Classic.h"

ref class SG_Stat :
    public SG_Classic
{
    SG_Stat(void);
    void Add_Stat(void);
    void Remove_Stat(void);
    void Update_Stat(void);
    void Fetch_Stat(void);
};
