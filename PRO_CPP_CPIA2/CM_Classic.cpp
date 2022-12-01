#include "CM_Classic.h"

using namespace System::Data::SqlClient;
using namespace System::Data;
CM_Classic::CM_Classic() {
}

void CM_Classic::Start_Procedure(String^ command) {
	this->Procedure = gcnew SqlCommand(command);
	this->Procedure->CommandType = CommandType::StoredProcedure;
}
