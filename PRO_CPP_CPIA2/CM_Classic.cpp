#include "CM_Classic.h"

CM_Classic::CM_Classic() {

}

String^ CM_Classic::Insert_Date(void) {
	return "EXEC Insert_Date @New_Date = " + this->Date;
}

String^ CM_Classic::Delete_Date(void) {
	return "EXEC Delete_Date @To_Delete_ID" + this->Date;
}

String^ CM_Classic::Update_Date(void) {
	return "EXEC Update_Date @To_Update=" + this->Date + ", @New_Value=";
}

String^ CM_Classic::Select_Date(void) {
	return "EXEC Select_Date";
}

String^ CM_Classic::Get_Date(void) {
	return this->Date;
}

void CM_Classic::Set_Date(String^ New_Date) {
	this->Date = New_Date;
}