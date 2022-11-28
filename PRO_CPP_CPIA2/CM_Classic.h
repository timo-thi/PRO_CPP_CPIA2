#pragma once
using namespace System;

ref class CM_Classic
{
protected:
	String^ Date;
public:
	CM_Classic();
	String^ Insert_Date(void);
	String^ Dlete_Date(void);
	String^ Update_Date(void);
	String^ Select_Date(void);
	String^ Get_Date(void);
	void Set_Date(String^);
};
