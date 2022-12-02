#pragma once
#include "SG_Classic.h"
#include "CM_Identification.h"

namespace NS_Services
{
    ref class SG_Identification :
        public SG_Classic
    {
    private:
        CM_Identification^ IDF;
    public:
        SG_Identification();
        bool Check_Identity(String^, String^);
    };
}
