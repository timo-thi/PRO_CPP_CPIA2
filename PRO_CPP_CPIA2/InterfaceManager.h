#pragma once
#include "SG_Personne.h"
#include "SG_Client.h"
#include "SG_Stock.h"
#include "SG_Orders.h"

using namespace  NS_Services;
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm1
	/// </summary>
	public ref class InterfaceManager : public System::Windows::Forms::Form
	{
	public:
		InterfaceManager(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~InterfaceManager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textFacturation;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textLivraison;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textAniiv;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textPremiereCommande;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textMail;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::TextBox^ textClientID;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label16;


	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;


	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;

	private: System::Windows::Forms::Label^ label29;

	private: System::Windows::Forms::Label^ label28;

	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::TabPage^ tabPage7;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::TabPage^ tabPage8;
private: System::Windows::Forms::TextBox^ textPersonnePrenom;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::TextBox^ textPersonneNom;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::TextBox^ textPersonneID;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::DataGridView^ dataGridView8;
private: System::Windows::Forms::DataGridView^ dataGridView7;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ textAffichage;
private: System::Windows::Forms::Label^ affichageClient;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::TextBox^ textNomClient;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textPrenomClient;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ Load_Stock;
private: int index = 0;

private: String^ mode = "RIEN";
private: Data::DataSet^ dsPersonne = gcnew Data::DataSet();
private: SG_Personne^ processusPersonnes = gcnew SG_Personne();
private: Data::DataSet^ dsClient = gcnew Data::DataSet();
private: Data::DataSet^ dsLivraison = gcnew Data::DataSet();
private: Data::DataSet^ dsFacturation = gcnew Data::DataSet();
private: SG_Client^ processusClient = gcnew SG_Client();
private: SG_Stock^ processusStock = gcnew SG_Stock();
private: SG_Orders^ processusOrders = gcnew SG_Orders();
private: System::Windows::Forms::Button^ button46;











	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textNomClient = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textPrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->affichageClient = (gcnew System::Windows::Forms::Label());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textFacturation = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textAniiv = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textPremiereCommande = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textMail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textClientID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->Load_Stock = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->textAffichage = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->textPersonnePrenom = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->textPersonneNom = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->textPersonneID = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Location = System::Drawing::Point(16, 16);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1269, 524);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textNomClient);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textPrenomClient);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->affichageClient);
			this->tabPage1->Controls->Add(this->button45);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textFacturation);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textLivraison);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textAniiv);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textPremiereCommande);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textMail);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textClientID);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1261, 495);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Gestion client";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &InterfaceManager::tabPage1_Click);
			// 
			// textNomClient
			// 
			this->textNomClient->Location = System::Drawing::Point(35, 279);
			this->textNomClient->Margin = System::Windows::Forms::Padding(4);
			this->textNomClient->Name = L"textNomClient";
			this->textNomClient->Size = System::Drawing::Size(152, 22);
			this->textNomClient->TabIndex = 50;
			this->textNomClient->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textNomClient_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 245);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 49;
			this->label2->Text = L"Nom";
			// 
			// textPrenomClient
			// 
			this->textPrenomClient->Location = System::Drawing::Point(239, 279);
			this->textPrenomClient->Margin = System::Windows::Forms::Padding(4);
			this->textPrenomClient->Name = L"textPrenomClient";
			this->textPrenomClient->Size = System::Drawing::Size(152, 22);
			this->textPrenomClient->TabIndex = 48;
			this->textPrenomClient->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textPrenomClient_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(235, 245);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Prenom";
			// 
			// affichageClient
			// 
			this->affichageClient->AutoSize = true;
			this->affichageClient->Location = System::Drawing::Point(581, 447);
			this->affichageClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->affichageClient->Name = L"affichageClient";
			this->affichageClient->Size = System::Drawing::Size(66, 16);
			this->affichageClient->TabIndex = 46;
			this->affichageClient->Text = L"En attente";
			this->affichageClient->Click += gcnew System::EventHandler(this, &InterfaceManager::affichageClient_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(473, 441);
			this->button45->Margin = System::Windows::Forms::Padding(4);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(100, 28);
			this->button45->TabIndex = 45;
			this->button45->Text = L"Load";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &InterfaceManager::button45_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(32, 337);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(151, 28);
			this->button11->TabIndex = 44;
			this->button11->Text = L"<";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &InterfaceManager::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(236, 337);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(151, 28);
			this->button12->TabIndex = 43;
			this->button12->Text = L">";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &InterfaceManager::button12_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(473, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(759, 382);
			this->dataGridView1->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(233, 425);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 44);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Enregistrer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &InterfaceManager::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(29, 425);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 44);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &InterfaceManager::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(233, 373);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 44);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InterfaceManager::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 373);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 44);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InterfaceManager::button1_Click_1);
			// 
			// textFacturation
			// 
			this->textFacturation->Location = System::Drawing::Point(32, 196);
			this->textFacturation->Margin = System::Windows::Forms::Padding(4);
			this->textFacturation->Name = L"textFacturation";
			this->textFacturation->Size = System::Drawing::Size(152, 22);
			this->textFacturation->TabIndex = 15;
			this->textFacturation->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textFacturation_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 161);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Adresse de facturation ";
			// 
			// textLivraison
			// 
			this->textLivraison->Location = System::Drawing::Point(236, 196);
			this->textLivraison->Margin = System::Windows::Forms::Padding(4);
			this->textLivraison->Name = L"textLivraison";
			this->textLivraison->Size = System::Drawing::Size(152, 22);
			this->textLivraison->TabIndex = 13;
			this->textLivraison->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textLivraison_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(232, 161);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Adresse de livraison";
			// 
			// textAniiv
			// 
			this->textAniiv->Location = System::Drawing::Point(236, 124);
			this->textAniiv->Margin = System::Windows::Forms::Padding(4);
			this->textAniiv->Name = L"textAniiv";
			this->textAniiv->Size = System::Drawing::Size(152, 22);
			this->textAniiv->TabIndex = 11;
			this->textAniiv->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textAniiv_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(232, 90);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Date d\'anniversaire";
			// 
			// textPremiereCommande
			// 
			this->textPremiereCommande->Location = System::Drawing::Point(236, 60);
			this->textPremiereCommande->Margin = System::Windows::Forms::Padding(4);
			this->textPremiereCommande->Name = L"textPremiereCommande";
			this->textPremiereCommande->Size = System::Drawing::Size(152, 22);
			this->textPremiereCommande->TabIndex = 9;
			this->textPremiereCommande->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textPremiereCommande_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(232, 26);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(183, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Date de premiere commande";
			// 
			// textMail
			// 
			this->textMail->Location = System::Drawing::Point(32, 124);
			this->textMail->Margin = System::Windows::Forms::Padding(4);
			this->textMail->Name = L"textMail";
			this->textMail->Size = System::Drawing::Size(152, 22);
			this->textMail->TabIndex = 7;
			this->textMail->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 90);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"mail";
			// 
			// textClientID
			// 
			this->textClientID->Location = System::Drawing::Point(29, 60);
			this->textClientID->Margin = System::Windows::Forms::Padding(4);
			this->textClientID->Name = L"textClientID";
			this->textClientID->Size = System::Drawing::Size(152, 22);
			this->textClientID->TabIndex = 1;
			this->textClientID->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox1_TextChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Personne";
			this->label1->Click += gcnew System::EventHandler(this, &InterfaceManager::label1_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button46);
			this->tabPage2->Controls->Add(this->textBox23);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->button13);
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->button15);
			this->tabPage2->Controls->Add(this->button16);
			this->tabPage2->Controls->Add(this->button17);
			this->tabPage2->Controls->Add(this->button18);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->textBox20);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->textBox21);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1261, 495);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Gestion commande";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->AccessibleName = L"";
			this->button46->Location = System::Drawing::Point(154, 301);
			this->button46->Margin = System::Windows::Forms::Padding(4);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(100, 28);
			this->button46->TabIndex = 70;
			this->button46->Text = L"Load";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &InterfaceManager::button46_Click_1);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(238, 247);
			this->textBox23->Margin = System::Windows::Forms::Padding(4);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(152, 22);
			this->textBox23->TabIndex = 69;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(234, 213);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(60, 16);
			this->label25->TabIndex = 68;
			this->label25->Text = L"Prix total ";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(31, 358);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(151, 28);
			this->button13->TabIndex = 67;
			this->button13->Text = L"<";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(237, 358);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(151, 28);
			this->button14->TabIndex = 66;
			this->button14->Text = L">";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(475, 34);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 62;
			this->dataGridView3->Size = System::Drawing::Size(759, 382);
			this->dataGridView3->TabIndex = 65;
			this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InterfaceManager::dataGridView3_CellClick);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(235, 446);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(153, 44);
			this->button15->TabIndex = 63;
			this->button15->Text = L"Enregistrer";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(31, 446);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(153, 44);
			this->button16->TabIndex = 64;
			this->button16->Text = L"Modifier";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &InterfaceManager::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(235, 394);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(153, 44);
			this->button17->TabIndex = 62;
			this->button17->Text = L"Supprimer";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &InterfaceManager::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(31, 394);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(153, 44);
			this->button18->TabIndex = 61;
			this->button18->Text = L"Ajouter";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &InterfaceManager::button18_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(237, 174);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(152, 22);
			this->textBox10->TabIndex = 58;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(233, 139);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(130, 16);
			this->label17->TabIndex = 57;
			this->label17->Text = L"Adresse de livraison";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(237, 102);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(152, 22);
			this->textBox14->TabIndex = 56;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(233, 68);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(112, 16);
			this->label18->TabIndex = 55;
			this->label18->Text = L"Date d\'expedition";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(237, 38);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(152, 22);
			this->textBox17->TabIndex = 54;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(233, 4);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(108, 16);
			this->label19->TabIndex = 53;
			this->label19->Text = L"Date de livraison";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(31, 247);
			this->textBox18->Margin = System::Windows::Forms::Padding(4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(152, 22);
			this->textBox18->TabIndex = 52;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(27, 213);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(134, 16);
			this->label20->TabIndex = 51;
			this->label20->Text = L"Nombre de paiement";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(31, 174);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(152, 22);
			this->textBox19->TabIndex = 50;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(27, 139);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(70, 16);
			this->label21->TabIndex = 49;
			this->label21->Text = L"Nom client";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(31, 102);
			this->textBox20->Margin = System::Windows::Forms::Padding(4);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(152, 22);
			this->textBox20->TabIndex = 48;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(27, 68);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(52, 16);
			this->label22->TabIndex = 47;
			this->label22->Text = L"Id client";
			this->label22->Click += gcnew System::EventHandler(this, &InterfaceManager::label22_Click);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(31, 38);
			this->textBox21->Margin = System::Windows::Forms::Padding(4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(152, 22);
			this->textBox21->TabIndex = 46;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(27, 4);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 16);
			this->label23->TabIndex = 45;
			this->label23->Text = L"ID Commande";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->Load_Stock);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->button10);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->textBox13);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->textBox15);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->textBox16);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(4);
			this->tabPage3->Size = System::Drawing::Size(1261, 495);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Gestion stock";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &InterfaceManager::tabPage3_Click);
			// 
			// Load_Stock
			// 
			this->Load_Stock->AccessibleName = L"";
			this->Load_Stock->Location = System::Drawing::Point(475, 446);
			this->Load_Stock->Margin = System::Windows::Forms::Padding(4);
			this->Load_Stock->Name = L"Load_Stock";
			this->Load_Stock->Size = System::Drawing::Size(100, 28);
			this->Load_Stock->TabIndex = 46;
			this->Load_Stock->Text = L"Load";
			this->Load_Stock->UseVisualStyleBackColor = true;
			this->Load_Stock->Click += gcnew System::EventHandler(this, &InterfaceManager::button46_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(189, 187);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 16);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Prix";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(33, 318);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(151, 28);
			this->button10->TabIndex = 42;
			this->button10->Text = L"<";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(237, 318);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(151, 28);
			this->button9->TabIndex = 41;
			this->button9->Text = L">";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(475, 37);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->Size = System::Drawing::Size(759, 382);
			this->dataGridView2->TabIndex = 40;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InterfaceManager::dataGridView2_CellClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(237, 405);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 44);
			this->button5->TabIndex = 38;
			this->button5->Text = L"Enregistrer";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(31, 405);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(153, 44);
			this->button6->TabIndex = 39;
			this->button6->Text = L"Modifier";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &InterfaceManager::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(237, 353);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(153, 44);
			this->button7->TabIndex = 37;
			this->button7->Text = L"Supprimer";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &InterfaceManager::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(31, 353);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(153, 44);
			this->button8->TabIndex = 36;
			this->button8->Text = L"Ajouter";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &InterfaceManager::button8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(233, 235);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 16);
			this->label9->TabIndex = 34;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(237, 124);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(152, 22);
			this->textBox11->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(233, 90);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 16);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Stock";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(237, 60);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(152, 22);
			this->textBox12->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(233, 26);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(140, 16);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Reapprovisionnement";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(31, 207);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(359, 22);
			this->textBox13->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(27, 161);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 16);
			this->label14->TabIndex = 24;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(31, 124);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(152, 22);
			this->textBox15->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(27, 90);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(81, 16);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Nom Produit";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(31, 60);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(152, 22);
			this->textBox16->TabIndex = 21;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(27, 26);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 16);
			this->label16->TabIndex = 20;
			this->label16->Text = L"ID Produit";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView8);
			this->tabPage4->Controls->Add(this->dataGridView7);
			this->tabPage4->Controls->Add(this->dataGridView6);
			this->tabPage4->Controls->Add(this->tabControl2);
			this->tabPage4->Controls->Add(this->label32);
			this->tabPage4->Controls->Add(this->textBox25);
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->label30);
			this->tabPage4->Controls->Add(this->label29);
			this->tabPage4->Controls->Add(this->label28);
			this->tabPage4->Controls->Add(this->textBox24);
			this->tabPage4->Controls->Add(this->label27);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(4);
			this->tabPage4->Size = System::Drawing::Size(1261, 495);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Gestion stat";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView8
			// 
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Location = System::Drawing::Point(236, 351);
			this->dataGridView8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->RowHeadersWidth = 62;
			this->dataGridView8->RowTemplate->Height = 28;
			this->dataGridView8->Size = System::Drawing::Size(243, 106);
			this->dataGridView8->TabIndex = 52;
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(27, 188);
			this->dataGridView7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowHeadersWidth = 62;
			this->dataGridView7->RowTemplate->Height = 28;
			this->dataGridView7->Size = System::Drawing::Size(212, 86);
			this->dataGridView7->TabIndex = 51;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(387, 188);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 62;
			this->dataGridView6->RowTemplate->Height = 28;
			this->dataGridView6->Size = System::Drawing::Size(212, 86);
			this->dataGridView6->TabIndex = 50;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Location = System::Drawing::Point(741, 28);
			this->tabControl2->Margin = System::Windows::Forms::Padding(4);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(496, 430);
			this->tabControl2->TabIndex = 49;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button29);
			this->tabPage5->Controls->Add(this->button30);
			this->tabPage5->Controls->Add(this->label42);
			this->tabPage5->Controls->Add(this->button31);
			this->tabPage5->Controls->Add(this->button26);
			this->tabPage5->Controls->Add(this->button27);
			this->tabPage5->Controls->Add(this->label41);
			this->tabPage5->Controls->Add(this->button28);
			this->tabPage5->Controls->Add(this->button23);
			this->tabPage5->Controls->Add(this->button24);
			this->tabPage5->Controls->Add(this->label40);
			this->tabPage5->Controls->Add(this->button25);
			this->tabPage5->Controls->Add(this->button22);
			this->tabPage5->Controls->Add(this->button21);
			this->tabPage5->Controls->Add(this->label39);
			this->tabPage5->Controls->Add(this->button20);
			this->tabPage5->Controls->Add(this->label38);
			this->tabPage5->Controls->Add(this->textBox31);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4);
			this->tabPage5->Size = System::Drawing::Size(488, 401);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Valeur commerciale defaut";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(351, 320);
			this->button29->Margin = System::Windows::Forms::Padding(4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(100, 28);
			this->button29->TabIndex = 65;
			this->button29->Text = L"2%";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(197, 320);
			this->button30->Margin = System::Windows::Forms::Padding(4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(100, 28);
			this->button30->TabIndex = 64;
			this->button30->Text = L"3%";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(208, 300);
			this->label42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(71, 16);
			this->label42->TabIndex = 63;
			this->label42->Text = L"Demarque";
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(32, 320);
			this->button31->Margin = System::Windows::Forms::Padding(4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(100, 28);
			this->button31->TabIndex = 62;
			this->button31->Text = L"5%";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(351, 263);
			this->button26->Margin = System::Windows::Forms::Padding(4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(100, 28);
			this->button26->TabIndex = 61;
			this->button26->Text = L"2%";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(197, 263);
			this->button27->Margin = System::Windows::Forms::Padding(4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(100, 28);
			this->button27->TabIndex = 60;
			this->button27->Text = L"3%";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(220, 244);
			this->label41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(54, 16);
			this->label41->TabIndex = 59;
			this->label41->Text = L"Remise";
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(32, 263);
			this->button28->Margin = System::Windows::Forms::Padding(4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(100, 28);
			this->button28->TabIndex = 58;
			this->button28->Text = L"6%";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(351, 204);
			this->button23->Margin = System::Windows::Forms::Padding(4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(100, 28);
			this->button23->TabIndex = 57;
			this->button23->Text = L"5%";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(197, 204);
			this->button24->Margin = System::Windows::Forms::Padding(4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(100, 28);
			this->button24->TabIndex = 56;
			this->button24->Text = L"10%";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(220, 185);
			this->label40->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(46, 16);
			this->label40->TabIndex = 55;
			this->label40->Text = L"Marge";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(32, 204);
			this->button25->Margin = System::Windows::Forms::Padding(4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(100, 28);
			this->button25->TabIndex = 54;
			this->button25->Text = L"15%";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(351, 150);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(100, 28);
			this->button22->TabIndex = 53;
			this->button22->Text = L"5,5%";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(197, 150);
			this->button21->Margin = System::Windows::Forms::Padding(4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(100, 28);
			this->button21->TabIndex = 52;
			this->button21->Text = L"10%";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(227, 128);
			this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(34, 16);
			this->label39->TabIndex = 51;
			this->label39->Text = L"TVA";
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(32, 150);
			this->button20->Margin = System::Windows::Forms::Padding(4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(100, 28);
			this->button20->TabIndex = 50;
			this->button20->Text = L"20%";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(163, 37);
			this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(179, 24);
			this->label38->TabIndex = 41;
			this->label38->Text = L"Valeur commerciale";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(179, 70);
			this->textBox31->Margin = System::Windows::Forms::Padding(4);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(152, 22);
			this->textBox31->TabIndex = 42;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->button19);
			this->tabPage6->Controls->Add(this->label35);
			this->tabPage6->Controls->Add(this->textBox30);
			this->tabPage6->Controls->Add(this->label33);
			this->tabPage6->Controls->Add(this->label37);
			this->tabPage6->Controls->Add(this->textBox26);
			this->tabPage6->Controls->Add(this->textBox29);
			this->tabPage6->Controls->Add(this->label34);
			this->tabPage6->Controls->Add(this->label36);
			this->tabPage6->Controls->Add(this->textBox27);
			this->tabPage6->Controls->Add(this->textBox28);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Margin = System::Windows::Forms::Padding(4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(4);
			this->tabPage6->Size = System::Drawing::Size(488, 401);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Valeur commerciale parametrable";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(183, 331);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(100, 28);
			this->button19->TabIndex = 49;
			this->button19->Text = L"Calculer";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &InterfaceManager::button19_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(257, 63);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(188, 24);
			this->label35->TabIndex = 43;
			this->label35->Text = L"Remise commerciale";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(273, 165);
			this->textBox30->Margin = System::Windows::Forms::Padding(4);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(152, 22);
			this->textBox30->TabIndex = 48;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(144, 234);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(179, 24);
			this->label33->TabIndex = 39;
			this->label33->Text = L"Valeur commerciale";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(257, 139);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(184, 24);
			this->label37->TabIndex = 47;
			this->label37->Text = L"Demarque inconnue";
			this->label37->Click += gcnew System::EventHandler(this, &InterfaceManager::label37_Click);
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(160, 267);
			this->textBox26->Margin = System::Windows::Forms::Padding(4);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(152, 22);
			this->textBox26->TabIndex = 40;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(40, 165);
			this->textBox29->Margin = System::Windows::Forms::Padding(4);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(152, 22);
			this->textBox29->TabIndex = 46;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(24, 63);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(178, 24);
			this->label34->TabIndex = 41;
			this->label34->Text = L"Marge commerciale";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(96, 139);
			this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(48, 24);
			this->label36->TabIndex = 45;
			this->label36->Text = L"TVA";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(40, 96);
			this->textBox27->Margin = System::Windows::Forms::Padding(4);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(152, 22);
			this->textBox27->TabIndex = 42;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(273, 96);
			this->textBox28->Margin = System::Windows::Forms::Padding(4);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(152, 22);
			this->textBox28->TabIndex = 44;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(375, 17);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(220, 24);
			this->label32->TabIndex = 38;
			this->label32->Text = L"Valeur  d\'achat du stock :";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(387, 94);
			this->textBox25->Margin = System::Windows::Forms::Padding(4);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(152, 22);
			this->textBox25->TabIndex = 37;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(383, 60);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(211, 24);
			this->label31->TabIndex = 36;
			this->label31->Text = L"Montant total d\'un client:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(383, 151);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(202, 18);
			this->label30->TabIndex = 15;
			this->label30->Text = L"10 articles plus moins vendus";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(23, 151);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(180, 18);
			this->label29->TabIndex = 34;
			this->label29->Text = L"10 articles les plus vendus";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(197, 308);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(297, 18);
			this->label28->TabIndex = 32;
			this->label28->Text = L"Produits sous seuil de r�approvisionnement";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(25, 94);
			this->textBox24->Margin = System::Windows::Forms::Padding(4);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(152, 22);
			this->textBox24->TabIndex = 30;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(21, 60);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(209, 24);
			this->label27->TabIndex = 1;
			this->label27->Text = L"Chiffre d\'affaire du mois:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(21, 17);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(142, 24);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Panier moyen : ";
			this->label26->Click += gcnew System::EventHandler(this, &InterfaceManager::label26_Click);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->button32);
			this->tabPage7->Controls->Add(this->button33);
			this->tabPage7->Controls->Add(this->dataGridView4);
			this->tabPage7->Controls->Add(this->button34);
			this->tabPage7->Controls->Add(this->button35);
			this->tabPage7->Controls->Add(this->button36);
			this->tabPage7->Controls->Add(this->button37);
			this->tabPage7->Controls->Add(this->textBox32);
			this->tabPage7->Controls->Add(this->label43);
			this->tabPage7->Controls->Add(this->textBox33);
			this->tabPage7->Controls->Add(this->label44);
			this->tabPage7->Controls->Add(this->textBox34);
			this->tabPage7->Controls->Add(this->label45);
			this->tabPage7->Controls->Add(this->textBox35);
			this->tabPage7->Controls->Add(this->label46);
			this->tabPage7->Controls->Add(this->textBox36);
			this->tabPage7->Controls->Add(this->label47);
			this->tabPage7->Controls->Add(this->textBox37);
			this->tabPage7->Controls->Add(this->label48);
			this->tabPage7->Controls->Add(this->textBox38);
			this->tabPage7->Controls->Add(this->label49);
			this->tabPage7->Controls->Add(this->textBox39);
			this->tabPage7->Controls->Add(this->label50);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Margin = System::Windows::Forms::Padding(4);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(1261, 495);
			this->tabPage7->TabIndex = 4;
			this->tabPage7->Text = L"Gestion personnel";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(33, 327);
			this->button32->Margin = System::Windows::Forms::Padding(4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(151, 28);
			this->button32->TabIndex = 67;
			this->button32->Text = L"<";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(237, 327);
			this->button33->Margin = System::Windows::Forms::Padding(4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(151, 28);
			this->button33->TabIndex = 66;
			this->button33->Text = L">";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(475, 44);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 62;
			this->dataGridView4->Size = System::Drawing::Size(759, 382);
			this->dataGridView4->TabIndex = 65;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(235, 415);
			this->button34->Margin = System::Windows::Forms::Padding(4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(153, 44);
			this->button34->TabIndex = 63;
			this->button34->Text = L"Enregistrer";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(31, 415);
			this->button35->Margin = System::Windows::Forms::Padding(4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(153, 44);
			this->button35->TabIndex = 64;
			this->button35->Text = L"Modifier";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(235, 363);
			this->button36->Margin = System::Windows::Forms::Padding(4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(153, 44);
			this->button36->TabIndex = 62;
			this->button36->Text = L"Supprimer";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(31, 363);
			this->button37->Margin = System::Windows::Forms::Padding(4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(153, 44);
			this->button37->TabIndex = 61;
			this->button37->Text = L"Ajouter";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(237, 277);
			this->textBox32->Margin = System::Windows::Forms::Padding(4);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(152, 22);
			this->textBox32->TabIndex = 60;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(233, 242);
			this->label43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(30, 16);
			this->label43->TabIndex = 59;
			this->label43->Text = L"role";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(237, 203);
			this->textBox33->Margin = System::Windows::Forms::Padding(4);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(152, 22);
			this->textBox33->TabIndex = 58;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(233, 169);
			this->label44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(61, 16);
			this->label44->TabIndex = 57;
			this->label44->Text = L"Adresse ";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(237, 132);
			this->textBox34->Margin = System::Windows::Forms::Padding(4);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(152, 22);
			this->textBox34->TabIndex = 56;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(233, 97);
			this->label45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(132, 16);
			this->label45->TabIndex = 55;
			this->label45->Text = L"Date embauchement";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(237, 68);
			this->textBox35->Margin = System::Windows::Forms::Padding(4);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(152, 22);
			this->textBox35->TabIndex = 54;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(233, 33);
			this->label46->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(95, 16);
			this->label46->TabIndex = 53;
			this->label46->Text = L"Nom superieur";
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(31, 277);
			this->textBox36->Margin = System::Windows::Forms::Padding(4);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(152, 22);
			this->textBox36->TabIndex = 52;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(27, 242);
			this->label47->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(32, 16);
			this->label47->TabIndex = 51;
			this->label47->Text = L"mail";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(31, 203);
			this->textBox37->Margin = System::Windows::Forms::Padding(4);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(152, 22);
			this->textBox37->TabIndex = 50;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(27, 169);
			this->label48->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(117, 16);
			this->label48->TabIndex = 49;
			this->label48->Text = L"Prenom personnel";
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(31, 132);
			this->textBox38->Margin = System::Windows::Forms::Padding(4);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(152, 22);
			this->textBox38->TabIndex = 48;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(27, 97);
			this->label49->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(99, 16);
			this->label49->TabIndex = 47;
			this->label49->Text = L"Nom personnel";
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(31, 68);
			this->textBox39->Margin = System::Windows::Forms::Padding(4);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(152, 22);
			this->textBox39->TabIndex = 46;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(27, 33);
			this->label50->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(81, 16);
			this->label50->TabIndex = 45;
			this->label50->Text = L"ID Personne";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->textAffichage);
			this->tabPage8->Controls->Add(this->label54);
			this->tabPage8->Controls->Add(this->button44);
			this->tabPage8->Controls->Add(this->dataGridView5);
			this->tabPage8->Controls->Add(this->button38);
			this->tabPage8->Controls->Add(this->button39);
			this->tabPage8->Controls->Add(this->button40);
			this->tabPage8->Controls->Add(this->button41);
			this->tabPage8->Controls->Add(this->button42);
			this->tabPage8->Controls->Add(this->button43);
			this->tabPage8->Controls->Add(this->textPersonnePrenom);
			this->tabPage8->Controls->Add(this->label51);
			this->tabPage8->Controls->Add(this->textPersonneNom);
			this->tabPage8->Controls->Add(this->label52);
			this->tabPage8->Controls->Add(this->textPersonneID);
			this->tabPage8->Controls->Add(this->label53);
			this->tabPage8->Location = System::Drawing::Point(4, 25);
			this->tabPage8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(1261, 495);
			this->tabPage8->TabIndex = 5;
			this->tabPage8->Text = L"Gestion personne";
			this->tabPage8->UseVisualStyleBackColor = true;
			this->tabPage8->Click += gcnew System::EventHandler(this, &InterfaceManager::tabPage8_Click);
			// 
			// textAffichage
			// 
			this->textAffichage->AutoSize = true;
			this->textAffichage->Location = System::Drawing::Point(21, 439);
			this->textAffichage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textAffichage->Name = L"textAffichage";
			this->textAffichage->Size = System::Drawing::Size(66, 16);
			this->textAffichage->TabIndex = 77;
			this->textAffichage->Text = L"En attente";
			this->textAffichage->Click += gcnew System::EventHandler(this, &InterfaceManager::textAffichage_Click);
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(56, 439);
			this->label54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(0, 16);
			this->label54->TabIndex = 76;
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(159, 362);
			this->button44->Margin = System::Windows::Forms::Padding(4);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(153, 44);
			this->button44->TabIndex = 75;
			this->button44->Text = L"Load";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &InterfaceManager::button44_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(553, 32);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 62;
			this->dataGridView5->RowTemplate->Height = 28;
			this->dataGridView5->Size = System::Drawing::Size(688, 439);
			this->dataGridView5->TabIndex = 74;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(65, 167);
			this->button38->Margin = System::Windows::Forms::Padding(4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(151, 28);
			this->button38->TabIndex = 73;
			this->button38->Text = L"<";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &InterfaceManager::button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(272, 167);
			this->button39->Margin = System::Windows::Forms::Padding(4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(151, 28);
			this->button39->TabIndex = 72;
			this->button39->Text = L">";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &InterfaceManager::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(269, 255);
			this->button40->Margin = System::Windows::Forms::Padding(4);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(153, 44);
			this->button40->TabIndex = 70;
			this->button40->Text = L"Enregistrer";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &InterfaceManager::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(65, 255);
			this->button41->Margin = System::Windows::Forms::Padding(4);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(153, 44);
			this->button41->TabIndex = 71;
			this->button41->Text = L"Modifier";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &InterfaceManager::button41_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(269, 202);
			this->button42->Margin = System::Windows::Forms::Padding(4);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(153, 44);
			this->button42->TabIndex = 69;
			this->button42->Text = L"Supprimer";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &InterfaceManager::button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(65, 202);
			this->button43->Margin = System::Windows::Forms::Padding(4);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(153, 44);
			this->button43->TabIndex = 68;
			this->button43->Text = L"Ajouter";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &InterfaceManager::button43_Click);
			// 
			// textPersonnePrenom
			// 
			this->textPersonnePrenom->Location = System::Drawing::Point(300, 118);
			this->textPersonnePrenom->Margin = System::Windows::Forms::Padding(4);
			this->textPersonnePrenom->Name = L"textPersonnePrenom";
			this->textPersonnePrenom->Size = System::Drawing::Size(152, 22);
			this->textPersonnePrenom->TabIndex = 11;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(329, 84);
			this->label51->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(88, 16);
			this->label51->TabIndex = 10;
			this->label51->Text = L"Prenom client";
			// 
			// textPersonneNom
			// 
			this->textPersonneNom->Location = System::Drawing::Point(25, 118);
			this->textPersonneNom->Margin = System::Windows::Forms::Padding(4);
			this->textPersonneNom->Name = L"textPersonneNom";
			this->textPersonneNom->Size = System::Drawing::Size(152, 22);
			this->textPersonneNom->TabIndex = 9;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(61, 84);
			this->label52->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(70, 16);
			this->label52->TabIndex = 8;
			this->label52->Text = L"Nom client";
			// 
			// textPersonneID
			// 
			this->textPersonneID->Location = System::Drawing::Point(159, 54);
			this->textPersonneID->Margin = System::Windows::Forms::Padding(4);
			this->textPersonneID->Name = L"textPersonneID";
			this->textPersonneID->Size = System::Drawing::Size(152, 22);
			this->textPersonneID->TabIndex = 7;
			this->textPersonneID->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox42_TextChanged);
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(189, 20);
			this->label53->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(81, 16);
			this->label53->TabIndex = 6;
			this->label53->Text = L"ID Personne";
			// 
			// InterfaceManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1301, 555);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"InterfaceManager";
			this->Text = L"Interface Manager";
			this->Load += gcnew System::EventHandler(this, &InterfaceManager::MyForm1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void loadDataPersonne(int index)
{

	this->dsPersonne->Clear();
	this->dsPersonne = this->processusPersonnes->ListePersonne("liste");
	this->textPersonneID->Text = Convert::ToString(this->dsPersonne->Tables[0]->Rows[this->index]->ItemArray[0]);
	this->textPersonneNom->Text = Convert::ToString(this->dsPersonne->Tables["liste"]->Rows[this->index]->ItemArray[1]);
	this->textPersonnePrenom->Text = Convert::ToString(this->dsPersonne->Tables["liste"]->Rows[this->index]->ItemArray[2]);

}



private: void loadDataClient(int index)
{	
	this->dsPersonne->Clear();
	this->dsPersonne = this->processusPersonnes->ListePersonne("liste");
	this->dsClient->Clear();
	this->dsClient = this->processusClient->ListeClient("liste");
	this->textClientID->Text = Convert::ToString(this->dsClient->Tables["liste"]->Rows[this->index]->ItemArray[0]);
	this->textMail->Text = Convert::ToString(this->dsClient->Tables["liste"]->Rows[this->index]->ItemArray[1]);
	this->textAniiv->Text = Convert::ToString(this->dsClient->Tables["liste"]->Rows[this->index]->ItemArray[2]);
	this->textPremiereCommande->Text=Convert::ToString(this->dsClient->Tables["liste"]->Rows[this->index]->ItemArray[3]);
	this->dsFacturation = this->processusClient->ListeFacturation("liste");
	int compt = 0;
	while (Convert::ToString(this->dsClient->Tables[0]->Rows[this->index]->ItemArray[0]) != Convert::ToString(this->dsFacturation->Tables[0]->Rows[compt]->ItemArray[0])) {
		compt++;
	};
	this->textFacturation->Text = Convert::ToString(this->dsFacturation->Tables[0]->Rows[compt]->ItemArray[1]);
	this->dsLivraison = this->processusClient->ListeLivraison("liste");
	compt = 0;
	while (Convert::ToString(this->dsClient->Tables[0]->Rows[this->index]->ItemArray[0]) != Convert::ToString(this->dsLivraison->Tables[0]->Rows[compt]->ItemArray[0])) {
		compt++;
	};
	this->textLivraison->Text = Convert::ToString(this->dsLivraison->Tables[0]->Rows[compt]->ItemArray[1]);
	while (Convert::ToString(this->dsClient->Tables[0]->Rows[this->index]->ItemArray[0]) != Convert::ToString(this->dsPersonne->Tables[0]->Rows[compt]->ItemArray[0])) {
		compt++;
	};
	this->textNomClient->Text = Convert::ToString(this->dsPersonne->Tables[0]->Rows[compt]->ItemArray[1]);
	this->textPrenomClient->Text = Convert::ToString(this->dsPersonne->Tables[0]->Rows[compt]->ItemArray[2]);

	

}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textClientID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPage8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox42_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
	this->loadDataPersonne(0);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index < this->dsClient->Tables["liste"]->Rows->Count - 1)
	{
		this->index++;
		this->loadDataClient(this->index);
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index > 0)
	{
		this->index--;
		this->loadDataClient(this->index);
		
	}
}

private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index < this->dsPersonne->Tables["liste"]->Rows->Count - 1)
	{
		this->index++;
		this->loadDataPersonne(this->index);
	}
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index > 0)
	{
		this->index--;
		this->loadDataPersonne(this->index);

	}
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textPersonneID->Clear();
	this->textPersonneNom->Clear();
	this->textPersonnePrenom->Clear();
	this->mode = "nouv";
	this->textAffichage->Text = Convert::ToString("Veillez entrer les informations");
}
private: System::Void textAffichage_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->textAffichage->Text = "Veuillez modifier les information et enregistrer.";
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "sup";
	this->textAffichage->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode == "nouv")
	{
		int Id;
		Id = this->processusPersonnes->Add_Personne(this->textPersonnePrenom->Text, this->textPersonneNom->Text);
		this->textAffichage->Text = "L'ID généré est le : " + Id + ". ";
	}
	else if (this->mode == "maj")
	{
		this->processusPersonnes->Update_Personne(Convert::ToInt32(this->textPersonneID->Text), this->textPersonnePrenom->Text, this->textPersonneNom->Text);
	}
	else if (this->mode == "sup")
	{
		this->processusPersonnes->Remove_Personne(Convert::ToInt32(this->textPersonneID->Text));
	}
	this->index = 0;
	this->loadDataPersonne(this->index);
	this->textAffichage->Text += "Traitement terminé.";
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
	loadDataClient(0);
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textPremiereCommande_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textAniiv_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textLivraison_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textFacturation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void affichageClient_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->textClientID->Clear();
	this->textMail->Clear();
	this->textFacturation->Clear();
	this->textLivraison->Clear();
	this->textAniiv->Clear();
	this->textPremiereCommande->Clear();
	this->textPrenomClient->Text = "Ne rien entrer.";
	this->textNomClient->Text = "Ne rien entrer.";
	this->mode = "nouv";
	this->textAffichage->Text = Convert::ToString("Veillez entrer les informations");
}
private: System::Void textNomClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textPrenomClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->textAffichage->Text = "Veuillez modifier les information et enregistrer.";
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "sup";
	this->textAffichage->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode == "nouv")
	{
		int Id;
		Id = this->processusClient->Add_Client(Convert::ToInt32(this->textClientID->Text),this->textMail->Text, Convert::ToDateTime(this->textAniiv->Text), Convert::ToDateTime(this->textPremiereCommande->Text),Convert::ToInt32(this->textFacturation->Text), Convert::ToInt32(this->textLivraison->Text));
	}
	else if (this->mode == "maj")
	{
		this->processusClient->Update_Client(Convert::ToInt32(this->textClientID->Text),this->textMail->Text, Convert::ToDateTime(this->textAniiv->Text), Convert::ToDateTime(this->textPremiereCommande->Text), Convert::ToInt32(this->textFacturation->Text), Convert::ToInt32(this->textLivraison->Text));
	}
	else if (this->mode == "sup")
	{
		this->processusClient->Remove_Client(Convert::ToInt32(this->textClientID->Text));
	}
	this->index = 0;
	this->loadDataClient(this->index);
	this->textAffichage->Text += "Traitement terminé.";
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {		//Update the Stock DataGrid
	this->dataGridView1->Refresh();

	this->dataGridView2->DataSource = this->processusStock->Fetch_Products("Stock");
	this->dataGridView2->DataMember = "Stock";
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {			//Insert in Stock

	processusStock->Set_Nom(textBox15->Text);
	processusStock->Set_Stock(Convert::ToInt32(textBox11->Text));
	processusStock->Set_Seuil_Stock(Convert::ToInt32(textBox12->Text));
	processusStock->Set_Prix(Convert::ToInt32(textBox13->Text));

	this->processusStock->Add_Products();

	Load_Stock->PerformClick(); //refresh Grid
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {			//Delete from stock

	processusStock->Set_Reference(Convert::ToInt32(textBox16->Text));

	this->processusStock->Remove_Products();

	Load_Stock->PerformClick(); //refresh Grid
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {		//Update from stock

	processusStock->Set_Reference(Convert::ToInt32(textBox16->Text));
	processusStock->Set_Nom(textBox15->Text);
	processusStock->Set_Stock(Convert::ToInt32(textBox11->Text));
	processusStock->Set_Seuil_Stock(Convert::ToInt32(textBox12->Text));
	processusStock->Set_Prix(Convert::ToInt32(textBox13->Text));

	this->processusStock->Update_Products();

	Load_Stock->PerformClick(); //refresh Grid
}
private: System::Void dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	this->textBox16->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_ID"]->Value->ToString();
	this->textBox15->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_NAME"]->Value->ToString();
	this->textBox11->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_STOCK"]->Value->ToString();
	this->textBox12->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_Restock_Threshold"]->Value->ToString();
	this->textBox13->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_PRICE"]->Value->ToString();
}

private: System::Void dataGridView3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->textBox21->Text = this->dataGridView3->Rows[e->RowIndex]->Cells["ID"]->Value->ToString();
	this->textBox20->Text = this->dataGridView3->Rows[e->RowIndex]->Cells["Client_ID"]->Value->ToString();
	this->textBox19->Text = this->dataGridView3->Rows[e->RowIndex]->Cells["Prenom"]->Value->ToString() + " " + this->dataGridView3->Rows[e->RowIndex]->Cells["Nom"]->Value->ToString();
	this->textBox18->Text = this->dataGridView3->Rows[e->RowIndex]->Cells["Nb_paiements"]->Value->ToString();
	this->textBox17->Text = this->dataGridView3->Rows[e->RowIndex]->Cells["Date_reception"]->Value->ToString();
	this->textBox14->Text = this->dataGridView3->Rows[e->RowIndex]->Cells["Date_expedition"]->Value->ToString();
	this->textBox10->Text = this->dataGridView3->Rows[e->RowIndex]->Cells["Adresse_Livraison"]->Value->ToString();
	//this->textBox23->Text
}

private: System::Void button46_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView3->Refresh();

	this->dataGridView3->DataSource = this->processusOrders->Fetch_Order("Orders");
	this->dataGridView3->DataMember = "Orders";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {	//Add order
	processusOrders->Set_ID_Client(Convert::ToInt32(textBox20->Text));
	processusOrders->Set_Date_Rec(Convert::ToDateTime(textBox17->Text));
	processusOrders->Set_Date_Exp(Convert::ToDateTime(textBox14->Text));

	this->processusOrders->Add_Order();

	Load_Stock->PerformClick(); //refresh Grid
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {	//Delete Order

	processusOrders->Set_ID(textBox21->Text);

	this->processusOrders->Remove_Order();

	Load_Stock->PerformClick(); //refresh Grid
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {	//Update Order

	processusOrders->Set_ID(textBox21->Text);
	processusOrders->Set_ID_Client(Convert::ToInt32(textBox20->Text));
	processusOrders->Set_Date_Rec(Convert::ToDateTime(textBox17->Text));
	processusOrders->Set_Date_Exp(Convert::ToDateTime(textBox14->Text));

	this->processusOrders->Update_Order();

	Load_Stock->PerformClick(); //refresh Grid
}
};
}