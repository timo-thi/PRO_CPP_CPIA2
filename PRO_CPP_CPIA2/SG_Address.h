#pragma once
#include "SG_Classic.h"
#include "CM_Adress.h"

using namespace NS_Composants;

namespace NS_Services
{
    ref class SG_Address :
        public SG_Classic
    {
    private:
        CM_Adress^ CMappage;
    public:
        DataSet^ DS;
        SG_Address();

        void Add_Adress(String^, String^, String^, int);
        void Remove_Adress(int);
        void Edit_Adress(int, String^, String^, String^, int);
        void Select_Adress();
    };
}