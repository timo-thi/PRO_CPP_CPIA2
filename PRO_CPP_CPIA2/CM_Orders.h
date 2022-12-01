#pragma once
#include "CM_Stock.h"

namespace NS_Composants
{
    ref class CM_Orders :
        public CM_Stock
    {
    private:
        String^ Date_Livraison;
        int Client_id;
        int Bill_ID;
        int Mean_Of_Payement;
        int Balance;

    public:
        CM_Orders(void);
        String^ Get_Date_Liv(void);
        void Set_Date_Liv(String^);
        int Get_Client_ID(void);
        void Set_Client_ID(int);
        int Get_Mean_Of_Payment(void);
        void Set_Mean_Of_Payment(int);
        int Get_Bill(void);
        void Set_Bill(int);
        int Get_Balance(void);
        void Set_Balance(int);

        String^ Insert_Order(void);
        String^ Delete_Order(void);
        String^ Update_Order(void);
        String^ Select_Order(void);

        String^ Insert_Bill(void);
        String^ Delete_Bill(void);
        String^ Update_Bill(void);
        String^ Select_Bill(void);

        String^ Insert_Mean_Of_Payment(void);
        String^ Delete_Mean_Of_Payment(void);
        String^ Update_Mean_Of_Payment(void);
        String^ Select_Mean_Of_Payment(void);
    };
};