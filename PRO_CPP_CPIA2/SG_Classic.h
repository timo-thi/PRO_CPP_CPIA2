#pragma once
#include "CM_Classic.h"
#include "CM_Connexion.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
ref class SG_Classic {

public:
	SG_Classic();
	DataSet^ data;
protected:

	CM_Classic CMappage;
	CM_Connexion CConnexion;

};

