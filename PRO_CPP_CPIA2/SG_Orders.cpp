#include "SG_Orders.h"
#include "CM_Orders.h"
#include "fstream"
using namespace std;
using namespace System::IO;
using namespace NS_Services;

SG_Orders::SG_Orders(void){
}

void SG_Orders::Add_Order(void){
}

void SG_Orders::Remove_Order(void){
}

void SG_Orders::Update_Order(void){
}

void SG_Orders::Fetch_Order(void) {
}

void MarshalString(String^ s, string& os) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}
void SG_Orders::Cree_Facture(String^ Facture, String^ ID) {
    StreamWriter^ writer = gcnew StreamWriter("./test.txt");
    writer->Write(Facture);
    writer->Close();

}