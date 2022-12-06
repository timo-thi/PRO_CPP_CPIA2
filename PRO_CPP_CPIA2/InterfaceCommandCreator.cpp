#include "InterfaceCommandCreator.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main_CommandCreator(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjetPOO::InterfaceCommandCreator form;
    Application::Run(% form);
}