#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;


namespace NS_Composants
{
	ref class CM_Classic
	{
	public: CM_Classic();

	protected:
		SqlCommand^ Procedure;
		void Start_Procedure(String^);
	};
};