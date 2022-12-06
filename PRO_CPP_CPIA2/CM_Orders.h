#pragma once
#include "CM_Stock.h"

namespace NS_Composants
{
    ref class CM_Orders :
        public CM_Stock
    {
    private:


        String^ Identifiant;
        DateTime^ Date_Livraison;
        DateTime^ Date_Expedition;
        DateTime^ Date_Bill;
        int Client_id;
        int Bill_ID;
        String^ Mean_Of_Payment;
        int Balance;

    public:
        CM_Orders(void);
        String^ Get_ID(void);
        void Set_ID(String^);
        DateTime^ Get_Date_Liv(void);
        void Set_Date_Liv(DateTime^);
        DateTime^ Get_Date_Exp(void);
        void Set_Date_Exp(DateTime^);
        int Get_Client_ID(void);
        void Set_Client_ID(int);

        String^ Get_Mean_Of_Payment(void);
        void Set_Mean_Of_Payment(String^);
        int Get_Bill(void);
        void Set_Bill(int);
        int Get_Balance(void);
        void Set_Balance(int);
        DateTime^ Get_Date_Bill(void);
        void Set_Date_Bill(DateTime^);

        SqlCommand^ Insert_Order(void);
        SqlCommand^ Delete_Order(void);
        SqlCommand^ Update_Order(void);
        SqlCommand^ Select_Order(void);

        SqlCommand^ Insert_Bill(void);
        SqlCommand^ Delete_Bill(void);
        SqlCommand^ Delete_All_Bill(void);
        SqlCommand^ Update_Bill(void);
        SqlCommand^ Fetch_Order_Bill(void);
        SqlCommand^ Get_Number_Order(void);

        SqlCommand^ Insert_Mean_Of_Payment(void);
        SqlCommand^ Delete_Mean_Of_Payment(void);
        SqlCommand^ Update_Mean_Of_Payment(void);
        SqlCommand^ Select_Mean_Of_Payment(void);
    };
};