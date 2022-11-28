#pragma once
#include "SG_Stock.h"

ref class SG_Orders :
    public SG_Stock
{
public:
    SG_Orders(void);
    void Add_Order(void);
    void Remove_Order(void);
    void Update_Order(void);
    void Fetch_Order(void);
};

