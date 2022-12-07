#pragma once
#include "CM_Orders.h"
#include "CM_Connexion.h"
using namespace NS_Composants;
namespace NS_Services
{
    ref class SG_Orders : public CM_Orders
    {
    private:
        DataSet^ dataOrders;
        DataSet^ dataBill;
        DataSet^ dataMOP;
        CM_Orders^ MapOrders;
        CM_Connexion^ AccesOrders;
        DataSet^ GenerationID;

    public:
        SG_Orders(void);
        void Add_Order(String^ ID, DateTime^ dateExp, DateTime^ dateRec, int client, int nombrePaiement, String^ MOP, int balance,int produit, int amount, int nombreProduit, DateTime^ datTkt);
        void Remove_Order(String^);
        void Update_Order(String^ ID, DateTime^ dateExp, DateTime^ dateRec, int client);
        DataSet^ ListeOrders(String^);
        DataSet^ ListeID(String^,DateTime^,int);
        DataSet^ ListeMOP(String^);
        DataSet^ ListeBill(String^);
        void Cree_Facture(String^,String^);
    };
};
