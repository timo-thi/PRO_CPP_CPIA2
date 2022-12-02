#pragma once
#include "CM_Classic.h"

using namespace System;
using namespace Data::SqlClient;

namespace NS_Composants
{
	ref class CM_Identification :
		public CM_Classic
	{
	private:
		String^ Mail;
		String^ Password;
	public:
		CM_Identification();

		SqlCommand^ Identify();
		SqlCommand^ Fetch_Role();

		String^ Get_Mail(void);
		void Set_Mail(String^);
		String^ Get_Password(void);
		void Set_Password(String^);
	};
}
