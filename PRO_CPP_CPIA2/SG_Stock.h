#pragma once
#include "SG_Classic.h"

namespace NS_Services
{
    ref class SG_Stock :
        public SG_Classic {

    public:

        SG_Stock();

        void Add_Products();
        void Remove_Products();
        void Update_Products();
        void Fetch_Products();
    };
};
