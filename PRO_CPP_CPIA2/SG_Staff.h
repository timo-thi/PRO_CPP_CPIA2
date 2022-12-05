#pragma once
#include "SG_Personne.h"
#include "CM_Staff.h"
namespace NS_Services
{
    ref class SG_Staff :
        public SG_Personne {
    private:
        DataSet^ dataStaff;
        CM_Staff^ MapStaff;
        CM_Connexion^ AccesStaff;
       
    public:

        SG_Staff();

        int Add_Staff(int, int, String^, int, DateTime^,String^);
        void Remove_Staff(int);
        void Update_Staff(int, int, String^, int, DateTime^, String^);
        DataSet^ ListeStaff(String^ table);
    };
};
