#pragma once
#include "CM_Classic.h"

namespace NS_Composants
{
    ref class CM_Adress :
        public CM_Classic
    {
    private:
        int ID;
        String^ Street_Name;
        String^ Street_Num;
        String^ Details;

        int City_ID;
        String^ City_Name;
        String^ City_Zip_Code;
    public:
        CM_Adress();

        int Get_ID();
        void Set_ID(int);
        String^ Get_Street_Name();
        void Set_Street_Name(String^);
        String^ Get_Street_Num();
        void Set_Street_Num(String^);
        String^ Get_Details();
        void Set_Details(String^);

        int Get_City_ID();
        void Set_City_ID(int);
        String^ Get_City_Name();
        void Set_City_Name(String^);
        String^ Get_City_Zip_Code();
        void Set_City_Zip_Code(String^);


        SqlCommand^ Insert_Adress(void);
        SqlCommand^ Select_Adress(void);
        SqlCommand^ Update_Adress(void);
        SqlCommand^ Delete_Adress(void);
    };
}
