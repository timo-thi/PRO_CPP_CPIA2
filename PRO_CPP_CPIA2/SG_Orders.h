#pragma once

#include "SG_Classic.h"
#include "SG_Stock.h"
#include "CM_Orders.h"


namespace NS_Services
{
    ref class SG_Orders :
        public SG_Stock
    {
    private:
        DataSet^ DS;
        CM_Orders^ Map_Orders;
        CM_Connexion^ Connect;

        int Mode;
        String^ ID;
        int ID_Client; 
        DateTime^ Date_Expedition;
        DateTime^ Date_Reception;
        DateTime^ Date_Bill;
        int Bill_ID;
        String^ Mean_Of_Payment;
        int Balance;

    public:

        DataSet^ Fetch_Order(String^);
        SG_Orders(void);
        void Add_Order(void);
        void Remove_Order(void);
        void Update_Order(void);
        String^ Total_Order(void);

        DataSet^ Fetch_Order_Bill(String^);
        void Add_Bill(void);
        void Remove_Bill(void);
        void Update_Bill(void);
        void Remove_All_Bill(void);

        DataSet^ Fetch_Means_Of_Payment(String^);
        void Add_Mean_Of_Payment();
        void Remove_Mean_Of_Payment();
        void Update_Mean_Of_Payment();

        String^ Get_ID();
        void Set_ID(String^);

        int Get_ID_Client();
        void Set_ID_Client(int);

        DateTime^ Get_Date_Exp();
        void Set_Date_Exp(DateTime^);

        DateTime^ Get_Date_Rec();
        void Set_Date_Rec(DateTime^);

        DateTime^ Get_Date_Bill();
        void Set_Date_Bill(DateTime^);

        int Get_Bill_ID();
        void Set_Bill_ID(int);

        String^ Get_Mean_Of_Payment();
        void Set_Mean_Of_Payment(String^);

        int Get_Balance();
        void Set_Balance(int);

        int Get_Mode();
        void Set_Mode(int);
    };
};