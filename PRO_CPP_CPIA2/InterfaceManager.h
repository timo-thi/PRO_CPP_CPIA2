#pragma once
#include "SG_Personne.h"
#include "SG_Client.h"
#include "SG_Stock.h"
#include "SG_Staff.h"
#include "SG_Stat.h"
#include "SG_Identification.h"
#include "SG_Address.h"
#include "SG_Stat.h"
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
	private: System::Windows::Forms::TabPage^ tabPageGestionClient;
	private: System::Windows::Forms::TabPage^ tabPageGestionCommande;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPageGestionStock;
	private: System::Windows::Forms::TabPage^ tabPageGestionStat;
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
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
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












































private: System::Windows::Forms::TabPage^ tabPageGestionStaff;
private: System::Windows::Forms::Button^ button_Staff_Previous;
private: System::Windows::Forms::Button^ button_Staff_Next;
private: System::Windows::Forms::DataGridView^ dataGridView_Staff;
private: System::Windows::Forms::Button^ button_Staff_Save;
private: System::Windows::Forms::Button^ button_Staff_Edit;
private: System::Windows::Forms::Button^ button_Staff_Remove;
private: System::Windows::Forms::Button^ button_Staff_Add;
private: System::Windows::Forms::TextBox^ textStaffRole;
private: System::Windows::Forms::Label^ label_Staff_Role;
private: System::Windows::Forms::TextBox^ textStaffAdresse;
private: System::Windows::Forms::Label^ label_Staff_Adr_ID;
private: System::Windows::Forms::TextBox^ textStaffDate;
private: System::Windows::Forms::Label^ label_Staff_Date_Embauche;
private: System::Windows::Forms::TextBox^ textStaffSup;
private: System::Windows::Forms::Label^ label_Staff_Nom_Superieur;
private: System::Windows::Forms::TextBox^ textStaffMail;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::TextBox^ textStaffPrenom;
private: System::Windows::Forms::Label^ label_Staff_Pers_Prenom;
private: System::Windows::Forms::TextBox^ textStaffNom;
private: System::Windows::Forms::Label^ label_Staff_Pers_Nom;
private: System::Windows::Forms::TextBox^ textStaffID;
private: System::Windows::Forms::Label^ label_Staff_Pers_ID;
private: System::Windows::Forms::TabPage^ tabPageGestionPersonne;
private: System::Windows::Forms::TextBox^ textPersonnePrenom;
private: System::Windows::Forms::Label^ Label_Personne_Prenom;
private: System::Windows::Forms::TextBox^ textPersonneNom;
private: System::Windows::Forms::Label^ Label_Personne_Nom;
private: System::Windows::Forms::TextBox^ textPersonneID;
private: System::Windows::Forms::Label^ Text_Personne_ID;



private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::Button^ Button_Personne_Retour;
private: System::Windows::Forms::Button^ Button_Personne_Avancer;
private: System::Windows::Forms::Button^ Button_Personne_Enregistrer;
private: System::Windows::Forms::Button^ Button_Personne_Modifier;
private: System::Windows::Forms::Button^ Button_Personne_Supprimer;
private: System::Windows::Forms::Button^ Button_Personne_Ajouter;
private: System::Windows::Forms::Button^ Button_Personne_Load;
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
private: Data::DataSet^ dsPersonne;
private: SG_Personne^ processusPersonnes;
private: Data::DataSet^ dsClient;
private: SG_Client^ processusClient;
private: Data::DataSet^ dsLivraison;
private: Data::DataSet^ dsFacturation;
private: SG_Stock^ processusStock;
private: Data::DataSet^ dsStaff;
private: SG_Staff^ processusStaff;
private: System::Windows::Forms::Label^ textStaffAffiche;
private: System::Windows::Forms::Button^ button46_Staff_Load;
private: SG_Stat^ Stat_Service;
private: SG_Address^ Adr_Service;
private: Data::DataSet^ dsOrders;
private: SG_Orders^ processusOrders;
private: Data::DataSet^ dsBill;

private: SG_Identification^ processusIdentification = gcnew SG_Identification();
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::TextBox^ textBoxValAch;
private: System::Windows::Forms::TextBox^ textBoxPanierAvg;
private: System::Windows::Forms::Button^ buttonStaffReload;
private: System::Windows::Forms::TabControl^ tabControlSimuModeSwitch;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::Button^ buttonDemarque2;
private: System::Windows::Forms::Button^ buttonDemarque3;
private: System::Windows::Forms::Button^ buttonDemarque5;
private: System::Windows::Forms::Button^ buttonRemise3;
private: System::Windows::Forms::Button^ buttonRemise5;
private: System::Windows::Forms::Button^ buttonRemise6;
private: System::Windows::Forms::Button^ buttonMarge5;
private: System::Windows::Forms::Button^ buttonMarge10;
private: System::Windows::Forms::Button^ buttonMarge15;
private: System::Windows::Forms::Button^ buttonTVA5;
private: System::Windows::Forms::Button^ buttonTVA10;
private: System::Windows::Forms::Button^ buttonTVA20;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ textBoxValComAuto;
private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::NumericUpDown^ numericUpDownDemarque;
private: System::Windows::Forms::NumericUpDown^ numericUpDownMarge;
private: System::Windows::Forms::NumericUpDown^ numericUpDownRemise;
private: System::Windows::Forms::NumericUpDown^ numericUpDownTVA;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ textBoxValComPers;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ textBoxTotCli;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::ListBox^ listBoxLessPurchased;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::ListBox^ listBoxMorePurchased;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::ListBox^ listUnderThreshold;
private: System::Windows::Forms::TextBox^ textBoxChfAff;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TabPage^ tabPageGestionAdresses;
private: System::Windows::Forms::Label^ labelAdrStatus;
private: System::Windows::Forms::Button^ buttonLoadAdr;
private: System::Windows::Forms::RichTextBox^ richTextBoxAdrDetails1;
private: System::Windows::Forms::Button^ buttonAdrPrevious;
private: System::Windows::Forms::Button^ buttonAdrNext;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::Button^ buttonRegisterAdr;
private: System::Windows::Forms::Button^ buttonEditAdr;
private: System::Windows::Forms::Button^ buttonDelAdr;
private: System::Windows::Forms::Button^ buttonAddAdr;
private: System::Windows::Forms::TextBox^ textBoxAdrCitZip;
private: System::Windows::Forms::Label^ label52;

private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::TextBox^ textBoxAdrCitID;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::TextBox^ textBoxAdrName;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::TextBox^ textBoxAdrNum;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ textBoxAdrID;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::ComboBox^ comboBoxAdrCitName;
private: System::Windows::Forms::Button^ button20;








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
			this->tabPageGestionClient = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPageGestionCommande = (gcnew System::Windows::Forms::TabPage());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
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
			this->tabPageGestionStock = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPageGestionStat = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxValAch = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPanierAvg = (gcnew System::Windows::Forms::TextBox());
			this->buttonStaffReload = (gcnew System::Windows::Forms::Button());
			this->tabControlSimuModeSwitch = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->buttonDemarque2 = (gcnew System::Windows::Forms::Button());
			this->buttonDemarque3 = (gcnew System::Windows::Forms::Button());
			this->buttonDemarque5 = (gcnew System::Windows::Forms::Button());
			this->buttonRemise3 = (gcnew System::Windows::Forms::Button());
			this->buttonRemise5 = (gcnew System::Windows::Forms::Button());
			this->buttonRemise6 = (gcnew System::Windows::Forms::Button());
			this->buttonMarge5 = (gcnew System::Windows::Forms::Button());
			this->buttonMarge10 = (gcnew System::Windows::Forms::Button());
			this->buttonMarge15 = (gcnew System::Windows::Forms::Button());
			this->buttonTVA5 = (gcnew System::Windows::Forms::Button());
			this->buttonTVA10 = (gcnew System::Windows::Forms::Button());
			this->buttonTVA20 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBoxValComAuto = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDownDemarque = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMarge = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownRemise = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownTVA = (gcnew System::Windows::Forms::NumericUpDown());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBoxValComPers = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBoxTotCli = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->listBoxLessPurchased = (gcnew System::Windows::Forms::ListBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->listBoxMorePurchased = (gcnew System::Windows::Forms::ListBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->listUnderThreshold = (gcnew System::Windows::Forms::ListBox());
			this->textBoxChfAff = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tabPageGestionStaff = (gcnew System::Windows::Forms::TabPage());
			this->textStaffAffiche = (gcnew System::Windows::Forms::Label());
			this->button46_Staff_Load = (gcnew System::Windows::Forms::Button());
			this->button_Staff_Previous = (gcnew System::Windows::Forms::Button());
			this->button_Staff_Next = (gcnew System::Windows::Forms::Button());
			this->dataGridView_Staff = (gcnew System::Windows::Forms::DataGridView());
			this->button_Staff_Save = (gcnew System::Windows::Forms::Button());
			this->button_Staff_Edit = (gcnew System::Windows::Forms::Button());
			this->button_Staff_Remove = (gcnew System::Windows::Forms::Button());
			this->button_Staff_Add = (gcnew System::Windows::Forms::Button());
			this->textStaffRole = (gcnew System::Windows::Forms::TextBox());
			this->label_Staff_Role = (gcnew System::Windows::Forms::Label());
			this->textStaffAdresse = (gcnew System::Windows::Forms::TextBox());
			this->label_Staff_Adr_ID = (gcnew System::Windows::Forms::Label());
			this->textStaffDate = (gcnew System::Windows::Forms::TextBox());
			this->label_Staff_Date_Embauche = (gcnew System::Windows::Forms::Label());
			this->textStaffSup = (gcnew System::Windows::Forms::TextBox());
			this->label_Staff_Nom_Superieur = (gcnew System::Windows::Forms::Label());
			this->textStaffMail = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textStaffPrenom = (gcnew System::Windows::Forms::TextBox());
			this->label_Staff_Pers_Prenom = (gcnew System::Windows::Forms::Label());
			this->textStaffNom = (gcnew System::Windows::Forms::TextBox());
			this->label_Staff_Pers_Nom = (gcnew System::Windows::Forms::Label());
			this->textStaffID = (gcnew System::Windows::Forms::TextBox());
			this->label_Staff_Pers_ID = (gcnew System::Windows::Forms::Label());
			this->tabPageGestionPersonne = (gcnew System::Windows::Forms::TabPage());
			this->textAffichage = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->Button_Personne_Load = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Button_Personne_Retour = (gcnew System::Windows::Forms::Button());
			this->Button_Personne_Avancer = (gcnew System::Windows::Forms::Button());
			this->Button_Personne_Enregistrer = (gcnew System::Windows::Forms::Button());
			this->Button_Personne_Modifier = (gcnew System::Windows::Forms::Button());
			this->Button_Personne_Supprimer = (gcnew System::Windows::Forms::Button());
			this->Button_Personne_Ajouter = (gcnew System::Windows::Forms::Button());
			this->textPersonnePrenom = (gcnew System::Windows::Forms::TextBox());
			this->Label_Personne_Prenom = (gcnew System::Windows::Forms::Label());
			this->textPersonneNom = (gcnew System::Windows::Forms::TextBox());
			this->Label_Personne_Nom = (gcnew System::Windows::Forms::Label());
			this->textPersonneID = (gcnew System::Windows::Forms::TextBox());
			this->Text_Personne_ID = (gcnew System::Windows::Forms::Label());
			this->tabPageGestionAdresses = (gcnew System::Windows::Forms::TabPage());
			this->comboBoxAdrCitName = (gcnew System::Windows::Forms::ComboBox());
			this->labelAdrStatus = (gcnew System::Windows::Forms::Label());
			this->buttonLoadAdr = (gcnew System::Windows::Forms::Button());
			this->richTextBoxAdrDetails1 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonAdrPrevious = (gcnew System::Windows::Forms::Button());
			this->buttonAdrNext = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonRegisterAdr = (gcnew System::Windows::Forms::Button());
			this->buttonEditAdr = (gcnew System::Windows::Forms::Button());
			this->buttonDelAdr = (gcnew System::Windows::Forms::Button());
			this->buttonAddAdr = (gcnew System::Windows::Forms::Button());
			this->textBoxAdrCitZip = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrCitID = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrName = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrNum = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrID = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPageGestionClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPageGestionCommande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPageGestionStock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPageGestionStat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabControlSimuModeSwitch->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDemarque))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMarge))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRemise))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTVA))->BeginInit();
			this->tabPageGestionStaff->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Staff))->BeginInit();
			this->tabPageGestionPersonne->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->tabPageGestionAdresses->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageGestionClient);
			this->tabControl1->Controls->Add(this->tabPageGestionCommande);
			this->tabControl1->Controls->Add(this->tabPageGestionStock);
			this->tabControl1->Controls->Add(this->tabPageGestionStat);
			this->tabControl1->Controls->Add(this->tabPageGestionStaff);
			this->tabControl1->Controls->Add(this->tabPageGestionPersonne);
			this->tabControl1->Controls->Add(this->tabPageGestionAdresses);
			this->tabControl1->Location = System::Drawing::Point(12, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(952, 426);
			this->tabControl1->TabIndex = 8;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &InterfaceManager::tabControl1_SelectedIndexChanged);
			this->tabControl1->VisibleChanged += gcnew System::EventHandler(this, &InterfaceManager::tabControl1_VisibleChanged);
			// 
			// tabPageGestionClient
			// 
			this->tabPageGestionClient->Controls->Add(this->textNomClient);
			this->tabPageGestionClient->Controls->Add(this->label2);
			this->tabPageGestionClient->Controls->Add(this->textPrenomClient);
			this->tabPageGestionClient->Controls->Add(this->label3);
			this->tabPageGestionClient->Controls->Add(this->affichageClient);
			this->tabPageGestionClient->Controls->Add(this->button45);
			this->tabPageGestionClient->Controls->Add(this->button11);
			this->tabPageGestionClient->Controls->Add(this->button12);
			this->tabPageGestionClient->Controls->Add(this->dataGridView1);
			this->tabPageGestionClient->Controls->Add(this->button4);
			this->tabPageGestionClient->Controls->Add(this->button3);
			this->tabPageGestionClient->Controls->Add(this->button2);
			this->tabPageGestionClient->Controls->Add(this->button1);
			this->tabPageGestionClient->Controls->Add(this->textFacturation);
			this->tabPageGestionClient->Controls->Add(this->label8);
			this->tabPageGestionClient->Controls->Add(this->textLivraison);
			this->tabPageGestionClient->Controls->Add(this->label7);
			this->tabPageGestionClient->Controls->Add(this->textAniiv);
			this->tabPageGestionClient->Controls->Add(this->label6);
			this->tabPageGestionClient->Controls->Add(this->textPremiereCommande);
			this->tabPageGestionClient->Controls->Add(this->label5);
			this->tabPageGestionClient->Controls->Add(this->textMail);
			this->tabPageGestionClient->Controls->Add(this->label4);
			this->tabPageGestionClient->Controls->Add(this->textClientID);
			this->tabPageGestionClient->Controls->Add(this->label1);
			this->tabPageGestionClient->Location = System::Drawing::Point(4, 22);
			this->tabPageGestionClient->Name = L"tabPageGestionClient";
			this->tabPageGestionClient->Padding = System::Windows::Forms::Padding(3);
			this->tabPageGestionClient->Size = System::Drawing::Size(944, 400);
			this->tabPageGestionClient->TabIndex = 0;
			this->tabPageGestionClient->Text = L"Gestion client";
			this->tabPageGestionClient->UseVisualStyleBackColor = true;
			this->tabPageGestionClient->Click += gcnew System::EventHandler(this, &InterfaceManager::tabPageGestionClient_Click);
			// 
			// textNomClient
			// 
			this->textNomClient->Location = System::Drawing::Point(26, 227);
			this->textNomClient->Name = L"textNomClient";
			this->textNomClient->Size = System::Drawing::Size(115, 20);
			this->textNomClient->TabIndex = 50;
			this->textNomClient->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textNomClient_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 199);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 49;
			this->label2->Text = L"Nom";
			// 
			// textPrenomClient
			// 
			this->textPrenomClient->Location = System::Drawing::Point(179, 227);
			this->textPrenomClient->Name = L"textPrenomClient";
			this->textPrenomClient->Size = System::Drawing::Size(115, 20);
			this->textPrenomClient->TabIndex = 48;
			this->textPrenomClient->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textPrenomClient_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(176, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Prenom";
			// 
			// affichageClient
			// 
			this->affichageClient->AutoSize = true;
			this->affichageClient->Location = System::Drawing::Point(436, 363);
			this->affichageClient->Name = L"affichageClient";
			this->affichageClient->Size = System::Drawing::Size(56, 13);
			this->affichageClient->TabIndex = 46;
			this->affichageClient->Text = L"En attente";
			this->affichageClient->Click += gcnew System::EventHandler(this, &InterfaceManager::affichageClient_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(355, 358);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(75, 23);
			this->button45->TabIndex = 45;
			this->button45->Text = L"Load";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &InterfaceManager::button45_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(24, 274);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(113, 23);
			this->button11->TabIndex = 44;
			this->button11->Text = L"<";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &InterfaceManager::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(177, 274);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(113, 23);
			this->button12->TabIndex = 43;
			this->button12->Text = L">";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &InterfaceManager::button12_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(355, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(569, 310);
			this->dataGridView1->TabIndex = 19;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InterfaceManager::dataGridView1_CellClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(175, 345);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 36);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Enregistrer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &InterfaceManager::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(22, 345);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 36);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &InterfaceManager::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 36);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InterfaceManager::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 36);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InterfaceManager::button1_Click_1);
			// 
			// textFacturation
			// 
			this->textFacturation->Location = System::Drawing::Point(24, 159);
			this->textFacturation->Name = L"textFacturation";
			this->textFacturation->Size = System::Drawing::Size(115, 20);
			this->textFacturation->TabIndex = 15;
			this->textFacturation->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textFacturation_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Adresse de facturation ";
			// 
			// textLivraison
			// 
			this->textLivraison->Location = System::Drawing::Point(177, 159);
			this->textLivraison->Name = L"textLivraison";
			this->textLivraison->Size = System::Drawing::Size(115, 20);
			this->textLivraison->TabIndex = 13;
			this->textLivraison->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textLivraison_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(174, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Adresse de livraison";
			// 
			// textAniiv
			// 
			this->textAniiv->Location = System::Drawing::Point(177, 101);
			this->textAniiv->Name = L"textAniiv";
			this->textAniiv->Size = System::Drawing::Size(115, 20);
			this->textAniiv->TabIndex = 11;
			this->textAniiv->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textAniiv_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(174, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Date d\'anniversaire";
			// 
			// textPremiereCommande
			// 
			this->textPremiereCommande->Location = System::Drawing::Point(177, 49);
			this->textPremiereCommande->Name = L"textPremiereCommande";
			this->textPremiereCommande->Size = System::Drawing::Size(115, 20);
			this->textPremiereCommande->TabIndex = 9;
			this->textPremiereCommande->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textPremiereCommande_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(174, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Date de premiere commande";
			// 
			// textMail
			// 
			this->textMail->Location = System::Drawing::Point(24, 101);
			this->textMail->Name = L"textMail";
			this->textMail->Size = System::Drawing::Size(115, 20);
			this->textMail->TabIndex = 7;
			this->textMail->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"mail";
			// 
			// textClientID
			// 
			this->textClientID->Location = System::Drawing::Point(22, 49);
			this->textClientID->Name = L"textClientID";
			this->textClientID->Size = System::Drawing::Size(115, 20);
			this->textClientID->TabIndex = 1;
			this->textClientID->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox1_TextChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Personne";
			this->label1->Click += gcnew System::EventHandler(this, &InterfaceManager::label1_Click_1);
			// 
			// tabPageGestionCommande
			// 
			this->tabPageGestionCommande->Controls->Add(this->label44);
			this->tabPageGestionCommande->Controls->Add(this->button20);
			this->tabPageGestionCommande->Controls->Add(this->textBox22);
			this->tabPageGestionCommande->Controls->Add(this->label24);
			this->tabPageGestionCommande->Controls->Add(this->textBox23);
			this->tabPageGestionCommande->Controls->Add(this->label25);
			this->tabPageGestionCommande->Controls->Add(this->button13);
			this->tabPageGestionCommande->Controls->Add(this->button14);
			this->tabPageGestionCommande->Controls->Add(this->dataGridView3);
			this->tabPageGestionCommande->Controls->Add(this->button15);
			this->tabPageGestionCommande->Controls->Add(this->button16);
			this->tabPageGestionCommande->Controls->Add(this->button17);
			this->tabPageGestionCommande->Controls->Add(this->button18);
			this->tabPageGestionCommande->Controls->Add(this->textBox9);
			this->tabPageGestionCommande->Controls->Add(this->label13);
			this->tabPageGestionCommande->Controls->Add(this->textBox10);
			this->tabPageGestionCommande->Controls->Add(this->label17);
			this->tabPageGestionCommande->Controls->Add(this->textBox14);
			this->tabPageGestionCommande->Controls->Add(this->label18);
			this->tabPageGestionCommande->Controls->Add(this->textBox17);
			this->tabPageGestionCommande->Controls->Add(this->label19);
			this->tabPageGestionCommande->Controls->Add(this->textBox18);
			this->tabPageGestionCommande->Controls->Add(this->label20);
			this->tabPageGestionCommande->Controls->Add(this->textBox19);
			this->tabPageGestionCommande->Controls->Add(this->label21);
			this->tabPageGestionCommande->Controls->Add(this->textBox20);
			this->tabPageGestionCommande->Controls->Add(this->label22);
			this->tabPageGestionCommande->Controls->Add(this->textBox21);
			this->tabPageGestionCommande->Controls->Add(this->label23);
			this->tabPageGestionCommande->Location = System::Drawing::Point(4, 22);
			this->tabPageGestionCommande->Name = L"tabPageGestionCommande";
			this->tabPageGestionCommande->Padding = System::Windows::Forms::Padding(3);
			this->tabPageGestionCommande->Size = System::Drawing::Size(944, 400);
			this->tabPageGestionCommande->TabIndex = 1;
			this->tabPageGestionCommande->Text = L"Gestion commande";
			this->tabPageGestionCommande->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(356, 344);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(115, 36);
			this->button20->TabIndex = 72;
			this->button20->Text = L"Load";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &InterfaceManager::button20_Click);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(178, 265);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(115, 20);
			this->textBox22->TabIndex = 71;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(175, 237);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(94, 13);
			this->label24->TabIndex = 70;
			this->label24->Text = L"Nombre de produit";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(23, 265);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(115, 20);
			this->textBox23->TabIndex = 69;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(20, 237);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(50, 13);
			this->label25->TabIndex = 68;
			this->label25->Text = L"Prix total ";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(23, 291);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(113, 23);
			this->button13->TabIndex = 67;
			this->button13->Text = L"<";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &InterfaceManager::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(178, 291);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(113, 23);
			this->button14->TabIndex = 66;
			this->button14->Text = L">";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &InterfaceManager::button14_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(356, 28);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 62;
			this->dataGridView3->Size = System::Drawing::Size(569, 310);
			this->dataGridView3->TabIndex = 65;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(176, 362);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(115, 36);
			this->button15->TabIndex = 63;
			this->button15->Text = L"Enregistrer";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(23, 362);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(115, 36);
			this->button16->TabIndex = 64;
			this->button16->Text = L"Modifier";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(176, 320);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(115, 36);
			this->button17->TabIndex = 62;
			this->button17->Text = L"Supprimer";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(23, 320);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(115, 36);
			this->button18->TabIndex = 61;
			this->button18->Text = L"Ajouter";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &InterfaceManager::button18_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(178, 201);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(115, 20);
			this->textBox9->TabIndex = 60;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(175, 173);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 13);
			this->label13->TabIndex = 59;
			this->label13->Text = L"Moyen de paiement";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(178, 141);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(115, 20);
			this->textBox10->TabIndex = 58;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(175, 113);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(101, 13);
			this->label17->TabIndex = 57;
			this->label17->Text = L"Adresse de livraison";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(178, 83);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(115, 20);
			this->textBox14->TabIndex = 56;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(175, 55);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 13);
			this->label18->TabIndex = 55;
			this->label18->Text = L"Date d\'expedition";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(178, 31);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(115, 20);
			this->textBox17->TabIndex = 54;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(175, 3);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(86, 13);
			this->label19->TabIndex = 53;
			this->label19->Text = L"Date de livraison";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(23, 201);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(115, 20);
			this->textBox18->TabIndex = 52;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(20, 173);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(105, 13);
			this->label20->TabIndex = 51;
			this->label20->Text = L"Nombre de paiement";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(23, 141);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(115, 20);
			this->textBox19->TabIndex = 50;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(20, 113);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(71, 13);
			this->label21->TabIndex = 49;
			this->label21->Text = L"Prenom client";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(23, 83);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(115, 20);
			this->textBox20->TabIndex = 48;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(20, 55);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 13);
			this->label22->TabIndex = 47;
			this->label22->Text = L"Id client";
			this->label22->Click += gcnew System::EventHandler(this, &InterfaceManager::label22_Click);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(23, 31);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(115, 20);
			this->textBox21->TabIndex = 46;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(20, 3);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(74, 13);
			this->label23->TabIndex = 45;
			this->label23->Text = L"ID Commande";
			// 
			// tabPageGestionStock
			// 
			this->tabPageGestionStock->Controls->Add(this->Load_Stock);
			this->tabPageGestionStock->Controls->Add(this->label10);
			this->tabPageGestionStock->Controls->Add(this->button10);
			this->tabPageGestionStock->Controls->Add(this->button9);
			this->tabPageGestionStock->Controls->Add(this->dataGridView2);
			this->tabPageGestionStock->Controls->Add(this->button5);
			this->tabPageGestionStock->Controls->Add(this->button6);
			this->tabPageGestionStock->Controls->Add(this->button7);
			this->tabPageGestionStock->Controls->Add(this->button8);
			this->tabPageGestionStock->Controls->Add(this->label9);
			this->tabPageGestionStock->Controls->Add(this->textBox11);
			this->tabPageGestionStock->Controls->Add(this->label11);
			this->tabPageGestionStock->Controls->Add(this->textBox12);
			this->tabPageGestionStock->Controls->Add(this->label12);
			this->tabPageGestionStock->Controls->Add(this->textBox13);
			this->tabPageGestionStock->Controls->Add(this->label14);
			this->tabPageGestionStock->Controls->Add(this->textBox15);
			this->tabPageGestionStock->Controls->Add(this->label15);
			this->tabPageGestionStock->Controls->Add(this->textBox16);
			this->tabPageGestionStock->Controls->Add(this->label16);
			this->tabPageGestionStock->Location = System::Drawing::Point(4, 22);
			this->tabPageGestionStock->Name = L"tabPageGestionStock";
			this->tabPageGestionStock->Padding = System::Windows::Forms::Padding(3);
			this->tabPageGestionStock->Size = System::Drawing::Size(944, 400);
			this->tabPageGestionStock->TabIndex = 2;
			this->tabPageGestionStock->Text = L"Gestion stock";
			this->tabPageGestionStock->UseVisualStyleBackColor = true;
			this->tabPageGestionStock->Click += gcnew System::EventHandler(this, &InterfaceManager::tabPageGestionStock_Click);
			// 
			// Load_Stock
			// 
			this->Load_Stock->AccessibleName = L"";
			this->Load_Stock->Location = System::Drawing::Point(356, 362);
			this->Load_Stock->Name = L"Load_Stock";
			this->Load_Stock->Size = System::Drawing::Size(75, 23);
			this->Load_Stock->TabIndex = 46;
			this->Load_Stock->Text = L"Load";
			this->Load_Stock->UseVisualStyleBackColor = true;
			this->Load_Stock->Click += gcnew System::EventHandler(this, &InterfaceManager::Load_Stock_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(142, 152);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 13);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Prix";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(25, 258);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(113, 23);
			this->button10->TabIndex = 42;
			this->button10->Text = L"<";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(178, 258);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(113, 23);
			this->button9->TabIndex = 41;
			this->button9->Text = L">";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(356, 30);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->Size = System::Drawing::Size(569, 310);
			this->dataGridView2->TabIndex = 40;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InterfaceManager::dataGridView2_CellClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(178, 329);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 36);
			this->button5->TabIndex = 38;
			this->button5->Text = L"Enregistrer";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(23, 329);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 36);
			this->button6->TabIndex = 39;
			this->button6->Text = L"Modifier";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &InterfaceManager::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(178, 287);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(115, 36);
			this->button7->TabIndex = 37;
			this->button7->Text = L"Supprimer";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &InterfaceManager::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(23, 287);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(115, 36);
			this->button8->TabIndex = 36;
			this->button8->Text = L"Ajouter";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &InterfaceManager::button8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(175, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 34;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(178, 101);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(115, 20);
			this->textBox11->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(175, 73);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 13);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Stock";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(178, 49);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(115, 20);
			this->textBox12->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(175, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(110, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Reapprovisionnement";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(23, 168);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(270, 20);
			this->textBox13->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(20, 131);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 24;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(23, 101);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(115, 20);
			this->textBox15->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(20, 73);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Nom Produit";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(23, 49);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(115, 20);
			this->textBox16->TabIndex = 21;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(20, 21);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 13);
			this->label16->TabIndex = 20;
			this->label16->Text = L"ID Produit";
			// 
			// tabPageGestionStat
			// 
			this->tabPageGestionStat->Controls->Add(this->numericUpDown1);
			this->tabPageGestionStat->Controls->Add(this->comboBox1);
			this->tabPageGestionStat->Controls->Add(this->textBoxValAch);
			this->tabPageGestionStat->Controls->Add(this->textBoxPanierAvg);
			this->tabPageGestionStat->Controls->Add(this->buttonStaffReload);
			this->tabPageGestionStat->Controls->Add(this->tabControlSimuModeSwitch);
			this->tabPageGestionStat->Controls->Add(this->label32);
			this->tabPageGestionStat->Controls->Add(this->textBoxTotCli);
			this->tabPageGestionStat->Controls->Add(this->label31);
			this->tabPageGestionStat->Controls->Add(this->label30);
			this->tabPageGestionStat->Controls->Add(this->listBoxLessPurchased);
			this->tabPageGestionStat->Controls->Add(this->label29);
			this->tabPageGestionStat->Controls->Add(this->listBoxMorePurchased);
			this->tabPageGestionStat->Controls->Add(this->label28);
			this->tabPageGestionStat->Controls->Add(this->listUnderThreshold);
			this->tabPageGestionStat->Controls->Add(this->textBoxChfAff);
			this->tabPageGestionStat->Controls->Add(this->label27);
			this->tabPageGestionStat->Controls->Add(this->label26);
			this->tabPageGestionStat->Location = System::Drawing::Point(4, 22);
			this->tabPageGestionStat->Name = L"tabPageGestionStat";
			this->tabPageGestionStat->Padding = System::Windows::Forms::Padding(3);
			this->tabPageGestionStat->Size = System::Drawing::Size(944, 400);
			this->tabPageGestionStat->TabIndex = 3;
			this->tabPageGestionStat->Text = L"Gestion stat";
			this->tabPageGestionStat->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(408, 104);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -559939585, 902409669, 54, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(37, 20);
			this->numericUpDown1->TabIndex = 72;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &InterfaceManager::numericUpDown1_ValueChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Jan", L"Feb", L"Mar", L"Apr", L"May", L"Jun",
					L"Jul", L"Aug", L"Sep", L"Oct", L"Nov", L"Dec"
			});
			this->comboBox1->Location = System::Drawing::Point(135, 104);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(38, 21);
			this->comboBox1->TabIndex = 71;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &InterfaceManager::comboBox1_SelectedIndexChanged);
			// 
			// textBoxValAch
			// 
			this->textBoxValAch->Location = System::Drawing::Point(290, 37);
			this->textBoxValAch->Name = L"textBoxValAch";
			this->textBoxValAch->Size = System::Drawing::Size(115, 20);
			this->textBoxValAch->TabIndex = 70;
			// 
			// textBoxPanierAvg
			// 
			this->textBoxPanierAvg->Location = System::Drawing::Point(19, 37);
			this->textBoxPanierAvg->Name = L"textBoxPanierAvg";
			this->textBoxPanierAvg->Size = System::Drawing::Size(115, 20);
			this->textBoxPanierAvg->TabIndex = 69;
			// 
			// buttonStaffReload
			// 
			this->buttonStaffReload->Location = System::Drawing::Point(19, 362);
			this->buttonStaffReload->Name = L"buttonStaffReload";
			this->buttonStaffReload->Size = System::Drawing::Size(82, 23);
			this->buttonStaffReload->TabIndex = 68;
			this->buttonStaffReload->Text = L"Reload Page";
			this->buttonStaffReload->UseVisualStyleBackColor = true;
			this->buttonStaffReload->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonStaffReload_Click);
			// 
			// tabControlSimuModeSwitch
			// 
			this->tabControlSimuModeSwitch->Controls->Add(this->tabPage5);
			this->tabControlSimuModeSwitch->Controls->Add(this->tabPage6);
			this->tabControlSimuModeSwitch->Location = System::Drawing::Point(556, 25);
			this->tabControlSimuModeSwitch->Name = L"tabControlSimuModeSwitch";
			this->tabControlSimuModeSwitch->SelectedIndex = 0;
			this->tabControlSimuModeSwitch->Size = System::Drawing::Size(372, 349);
			this->tabControlSimuModeSwitch->TabIndex = 67;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->buttonDemarque2);
			this->tabPage5->Controls->Add(this->buttonDemarque3);
			this->tabPage5->Controls->Add(this->buttonDemarque5);
			this->tabPage5->Controls->Add(this->buttonRemise3);
			this->tabPage5->Controls->Add(this->buttonRemise5);
			this->tabPage5->Controls->Add(this->buttonRemise6);
			this->tabPage5->Controls->Add(this->buttonMarge5);
			this->tabPage5->Controls->Add(this->buttonMarge10);
			this->tabPage5->Controls->Add(this->buttonMarge15);
			this->tabPage5->Controls->Add(this->buttonTVA5);
			this->tabPage5->Controls->Add(this->buttonTVA10);
			this->tabPage5->Controls->Add(this->buttonTVA20);
			this->tabPage5->Controls->Add(this->label42);
			this->tabPage5->Controls->Add(this->label41);
			this->tabPage5->Controls->Add(this->label40);
			this->tabPage5->Controls->Add(this->label39);
			this->tabPage5->Controls->Add(this->label38);
			this->tabPage5->Controls->Add(this->textBoxValComAuto);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(364, 323);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Valeur commerciale defaut";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// buttonDemarque2
			// 
			this->buttonDemarque2->Location = System::Drawing::Point(271, 260);
			this->buttonDemarque2->Name = L"buttonDemarque2";
			this->buttonDemarque2->Size = System::Drawing::Size(60, 23);
			this->buttonDemarque2->TabIndex = 75;
			this->buttonDemarque2->Text = L"2%";
			this->buttonDemarque2->UseVisualStyleBackColor = true;
			this->buttonDemarque2->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonDemarque2_Click);
			// 
			// buttonDemarque3
			// 
			this->buttonDemarque3->Location = System::Drawing::Point(159, 260);
			this->buttonDemarque3->Name = L"buttonDemarque3";
			this->buttonDemarque3->Size = System::Drawing::Size(60, 23);
			this->buttonDemarque3->TabIndex = 74;
			this->buttonDemarque3->Text = L"3%";
			this->buttonDemarque3->UseVisualStyleBackColor = true;
			this->buttonDemarque3->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonDemarque3_Click);
			// 
			// buttonDemarque5
			// 
			this->buttonDemarque5->Enabled = false;
			this->buttonDemarque5->Location = System::Drawing::Point(42, 260);
			this->buttonDemarque5->Name = L"buttonDemarque5";
			this->buttonDemarque5->Size = System::Drawing::Size(60, 23);
			this->buttonDemarque5->TabIndex = 73;
			this->buttonDemarque5->Text = L"5%";
			this->buttonDemarque5->UseVisualStyleBackColor = true;
			this->buttonDemarque5->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonDemarque5_Click);
			// 
			// buttonRemise3
			// 
			this->buttonRemise3->Location = System::Drawing::Point(271, 214);
			this->buttonRemise3->Name = L"buttonRemise3";
			this->buttonRemise3->Size = System::Drawing::Size(60, 23);
			this->buttonRemise3->TabIndex = 72;
			this->buttonRemise3->Text = L"3%";
			this->buttonRemise3->UseVisualStyleBackColor = true;
			this->buttonRemise3->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonRemise3_Click);
			// 
			// buttonRemise5
			// 
			this->buttonRemise5->Location = System::Drawing::Point(159, 214);
			this->buttonRemise5->Name = L"buttonRemise5";
			this->buttonRemise5->Size = System::Drawing::Size(60, 23);
			this->buttonRemise5->TabIndex = 71;
			this->buttonRemise5->Text = L"5%";
			this->buttonRemise5->UseVisualStyleBackColor = true;
			this->buttonRemise5->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonRemise5_Click);
			// 
			// buttonRemise6
			// 
			this->buttonRemise6->Enabled = false;
			this->buttonRemise6->Location = System::Drawing::Point(42, 214);
			this->buttonRemise6->Name = L"buttonRemise6";
			this->buttonRemise6->Size = System::Drawing::Size(60, 23);
			this->buttonRemise6->TabIndex = 70;
			this->buttonRemise6->Text = L"6%";
			this->buttonRemise6->UseVisualStyleBackColor = true;
			this->buttonRemise6->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonRemise6_Click);
			// 
			// buttonMarge5
			// 
			this->buttonMarge5->Location = System::Drawing::Point(271, 166);
			this->buttonMarge5->Name = L"buttonMarge5";
			this->buttonMarge5->Size = System::Drawing::Size(60, 23);
			this->buttonMarge5->TabIndex = 69;
			this->buttonMarge5->Text = L"5%";
			this->buttonMarge5->UseVisualStyleBackColor = true;
			this->buttonMarge5->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonMarge5_Click);
			// 
			// buttonMarge10
			// 
			this->buttonMarge10->Location = System::Drawing::Point(159, 166);
			this->buttonMarge10->Name = L"buttonMarge10";
			this->buttonMarge10->Size = System::Drawing::Size(60, 23);
			this->buttonMarge10->TabIndex = 68;
			this->buttonMarge10->Text = L"10%";
			this->buttonMarge10->UseVisualStyleBackColor = true;
			this->buttonMarge10->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonMarge10_Click);
			// 
			// buttonMarge15
			// 
			this->buttonMarge15->Enabled = false;
			this->buttonMarge15->Location = System::Drawing::Point(42, 166);
			this->buttonMarge15->Name = L"buttonMarge15";
			this->buttonMarge15->Size = System::Drawing::Size(60, 23);
			this->buttonMarge15->TabIndex = 67;
			this->buttonMarge15->Text = L"15%";
			this->buttonMarge15->UseVisualStyleBackColor = true;
			this->buttonMarge15->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonMarge15_Click);
			// 
			// buttonTVA5
			// 
			this->buttonTVA5->Location = System::Drawing::Point(271, 120);
			this->buttonTVA5->Name = L"buttonTVA5";
			this->buttonTVA5->Size = System::Drawing::Size(60, 23);
			this->buttonTVA5->TabIndex = 66;
			this->buttonTVA5->Text = L"5.5%";
			this->buttonTVA5->UseVisualStyleBackColor = true;
			this->buttonTVA5->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonTVA5_Click);
			// 
			// buttonTVA10
			// 
			this->buttonTVA10->Location = System::Drawing::Point(159, 120);
			this->buttonTVA10->Name = L"buttonTVA10";
			this->buttonTVA10->Size = System::Drawing::Size(60, 23);
			this->buttonTVA10->TabIndex = 65;
			this->buttonTVA10->Text = L"10%";
			this->buttonTVA10->UseVisualStyleBackColor = true;
			this->buttonTVA10->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonTVA10_Click);
			// 
			// buttonTVA20
			// 
			this->buttonTVA20->Enabled = false;
			this->buttonTVA20->Location = System::Drawing::Point(42, 120);
			this->buttonTVA20->Name = L"buttonTVA20";
			this->buttonTVA20->Size = System::Drawing::Size(60, 23);
			this->buttonTVA20->TabIndex = 64;
			this->buttonTVA20->Text = L"20%";
			this->buttonTVA20->UseVisualStyleBackColor = true;
			this->buttonTVA20->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonTVA20_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(156, 244);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(56, 13);
			this->label42->TabIndex = 63;
			this->label42->Text = L"Demarque";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(165, 198);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(42, 13);
			this->label41->TabIndex = 59;
			this->label41->Text = L"Remise";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(165, 150);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(37, 13);
			this->label40->TabIndex = 55;
			this->label40->Text = L"Marge";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(170, 104);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(28, 13);
			this->label39->TabIndex = 51;
			this->label39->Text = L"TVA";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(122, 30);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(139, 18);
			this->label38->TabIndex = 41;
			this->label38->Text = L"Valeur commerciale";
			// 
			// textBoxValComAuto
			// 
			this->textBoxValComAuto->Location = System::Drawing::Point(134, 57);
			this->textBoxValComAuto->Name = L"textBoxValComAuto";
			this->textBoxValComAuto->Size = System::Drawing::Size(115, 20);
			this->textBoxValComAuto->TabIndex = 42;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->numericUpDownDemarque);
			this->tabPage6->Controls->Add(this->numericUpDownMarge);
			this->tabPage6->Controls->Add(this->numericUpDownRemise);
			this->tabPage6->Controls->Add(this->numericUpDownTVA);
			this->tabPage6->Controls->Add(this->button19);
			this->tabPage6->Controls->Add(this->label35);
			this->tabPage6->Controls->Add(this->label33);
			this->tabPage6->Controls->Add(this->label37);
			this->tabPage6->Controls->Add(this->textBoxValComPers);
			this->tabPage6->Controls->Add(this->label34);
			this->tabPage6->Controls->Add(this->label36);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(364, 323);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Valeur commerciale parametrable";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// numericUpDownDemarque
			// 
			this->numericUpDownDemarque->Location = System::Drawing::Point(205, 134);
			this->numericUpDownDemarque->Name = L"numericUpDownDemarque";
			this->numericUpDownDemarque->Size = System::Drawing::Size(120, 20);
			this->numericUpDownDemarque->TabIndex = 53;
			this->numericUpDownDemarque->ValueChanged += gcnew System::EventHandler(this, &InterfaceManager::numericUpDownDemarque_ValueChanged);
			// 
			// numericUpDownMarge
			// 
			this->numericUpDownMarge->Location = System::Drawing::Point(38, 72);
			this->numericUpDownMarge->Name = L"numericUpDownMarge";
			this->numericUpDownMarge->Size = System::Drawing::Size(120, 20);
			this->numericUpDownMarge->TabIndex = 52;
			this->numericUpDownMarge->ValueChanged += gcnew System::EventHandler(this, &InterfaceManager::numericUpDownMarge_ValueChanged);
			// 
			// numericUpDownRemise
			// 
			this->numericUpDownRemise->Location = System::Drawing::Point(205, 72);
			this->numericUpDownRemise->Name = L"numericUpDownRemise";
			this->numericUpDownRemise->Size = System::Drawing::Size(120, 20);
			this->numericUpDownRemise->TabIndex = 51;
			this->numericUpDownRemise->ValueChanged += gcnew System::EventHandler(this, &InterfaceManager::numericUpDownRemise_ValueChanged);
			// 
			// numericUpDownTVA
			// 
			this->numericUpDownTVA->Location = System::Drawing::Point(38, 134);
			this->numericUpDownTVA->Name = L"numericUpDownTVA";
			this->numericUpDownTVA->Size = System::Drawing::Size(120, 20);
			this->numericUpDownTVA->TabIndex = 50;
			this->numericUpDownTVA->ValueChanged += gcnew System::EventHandler(this, &InterfaceManager::numericUpDownTVA_ValueChanged);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(137, 269);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 49;
			this->button19->Text = L"Calculer";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(193, 51);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(149, 18);
			this->label35->TabIndex = 43;
			this->label35->Text = L"Remise commerciale";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(108, 190);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(139, 18);
			this->label33->TabIndex = 39;
			this->label33->Text = L"Valeur commerciale";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(193, 113);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(141, 18);
			this->label37->TabIndex = 47;
			this->label37->Text = L"Demarque inconnue";
			// 
			// textBoxValComPers
			// 
			this->textBoxValComPers->Location = System::Drawing::Point(120, 217);
			this->textBoxValComPers->Name = L"textBoxValComPers";
			this->textBoxValComPers->Size = System::Drawing::Size(115, 20);
			this->textBoxValComPers->TabIndex = 40;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(27, 51);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(140, 18);
			this->label34->TabIndex = 41;
			this->label34->Text = L"Marge commerciale";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(81, 113);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(35, 18);
			this->label36->TabIndex = 45;
			this->label36->Text = L"TVA";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(281, 16);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(173, 18);
			this->label32->TabIndex = 66;
			this->label32->Text = L"Valeur  d\'achat du stock :";
			// 
			// textBoxTotCli
			// 
			this->textBoxTotCli->Location = System::Drawing::Point(290, 104);
			this->textBoxTotCli->Name = L"textBoxTotCli";
			this->textBoxTotCli->Size = System::Drawing::Size(115, 20);
			this->textBoxTotCli->TabIndex = 65;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(287, 77);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(167, 18);
			this->label31->TabIndex = 64;
			this->label31->Text = L"Montant total d\'un client:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(287, 146);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(168, 15);
			this->label30->TabIndex = 58;
			this->label30->Text = L"10 articles plus moins vendus";
			// 
			// listBoxLessPurchased
			// 
			this->listBoxLessPurchased->FormattingEnabled = true;
			this->listBoxLessPurchased->Location = System::Drawing::Point(290, 167);
			this->listBoxLessPurchased->Name = L"listBoxLessPurchased";
			this->listBoxLessPurchased->Size = System::Drawing::Size(155, 69);
			this->listBoxLessPurchased->TabIndex = 63;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(16, 146);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(150, 15);
			this->label29->TabIndex = 62;
			this->label29->Text = L"10 articles les plus vendus";
			// 
			// listBoxMorePurchased
			// 
			this->listBoxMorePurchased->FormattingEnabled = true;
			this->listBoxMorePurchased->Location = System::Drawing::Point(19, 167);
			this->listBoxMorePurchased->Name = L"listBoxMorePurchased";
			this->listBoxMorePurchased->Size = System::Drawing::Size(154, 69);
			this->listBoxMorePurchased->TabIndex = 57;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(16, 253);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(246, 15);
			this->label28->TabIndex = 61;
			this->label28->Text = L"Produits sous seuil de réapprovisionnement";
			// 
			// listUnderThreshold
			// 
			this->listUnderThreshold->FormattingEnabled = true;
			this->listUnderThreshold->Location = System::Drawing::Point(19, 274);
			this->listUnderThreshold->Name = L"listUnderThreshold";
			this->listUnderThreshold->Size = System::Drawing::Size(426, 82);
			this->listUnderThreshold->TabIndex = 60;
			// 
			// textBoxChfAff
			// 
			this->textBoxChfAff->Location = System::Drawing::Point(19, 104);
			this->textBoxChfAff->Name = L"textBoxChfAff";
			this->textBoxChfAff->Size = System::Drawing::Size(115, 20);
			this->textBoxChfAff->TabIndex = 59;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(16, 77);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(167, 18);
			this->label27->TabIndex = 56;
			this->label27->Text = L"Chiffre d\'affaire du mois:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(16, 16);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(111, 18);
			this->label26->TabIndex = 55;
			this->label26->Text = L"Panier moyen : ";
			// 
			// tabPageGestionStaff
			// 
			this->tabPageGestionStaff->Controls->Add(this->textStaffAffiche);
			this->tabPageGestionStaff->Controls->Add(this->button46_Staff_Load);
			this->tabPageGestionStaff->Controls->Add(this->button_Staff_Previous);
			this->tabPageGestionStaff->Controls->Add(this->button_Staff_Next);
			this->tabPageGestionStaff->Controls->Add(this->dataGridView_Staff);
			this->tabPageGestionStaff->Controls->Add(this->button_Staff_Save);
			this->tabPageGestionStaff->Controls->Add(this->button_Staff_Edit);
			this->tabPageGestionStaff->Controls->Add(this->button_Staff_Remove);
			this->tabPageGestionStaff->Controls->Add(this->button_Staff_Add);
			this->tabPageGestionStaff->Controls->Add(this->textStaffRole);
			this->tabPageGestionStaff->Controls->Add(this->label_Staff_Role);
			this->tabPageGestionStaff->Controls->Add(this->textStaffAdresse);
			this->tabPageGestionStaff->Controls->Add(this->label_Staff_Adr_ID);
			this->tabPageGestionStaff->Controls->Add(this->textStaffDate);
			this->tabPageGestionStaff->Controls->Add(this->label_Staff_Date_Embauche);
			this->tabPageGestionStaff->Controls->Add(this->textStaffSup);
			this->tabPageGestionStaff->Controls->Add(this->label_Staff_Nom_Superieur);
			this->tabPageGestionStaff->Controls->Add(this->textStaffMail);
			this->tabPageGestionStaff->Controls->Add(this->label47);
			this->tabPageGestionStaff->Controls->Add(this->textStaffPrenom);
			this->tabPageGestionStaff->Controls->Add(this->label_Staff_Pers_Prenom);
			this->tabPageGestionStaff->Controls->Add(this->textStaffNom);
			this->tabPageGestionStaff->Controls->Add(this->label_Staff_Pers_Nom);
			this->tabPageGestionStaff->Controls->Add(this->textStaffID);
			this->tabPageGestionStaff->Controls->Add(this->label_Staff_Pers_ID);
			this->tabPageGestionStaff->Location = System::Drawing::Point(4, 22);
			this->tabPageGestionStaff->Name = L"tabPageGestionStaff";
			this->tabPageGestionStaff->Size = System::Drawing::Size(944, 400);
			this->tabPageGestionStaff->TabIndex = 4;
			this->tabPageGestionStaff->Text = L"Gestion personnel";
			this->tabPageGestionStaff->UseVisualStyleBackColor = true;
			// 
			// textStaffAffiche
			// 
			this->textStaffAffiche->AutoSize = true;
			this->textStaffAffiche->Location = System::Drawing::Point(437, 368);
			this->textStaffAffiche->Name = L"textStaffAffiche";
			this->textStaffAffiche->Size = System::Drawing::Size(56, 13);
			this->textStaffAffiche->TabIndex = 69;
			this->textStaffAffiche->Text = L"En attente";
			this->textStaffAffiche->Click += gcnew System::EventHandler(this, &InterfaceManager::label55_Click);
			// 
			// button46_Staff_Load
			// 
			this->button46_Staff_Load->Location = System::Drawing::Point(356, 363);
			this->button46_Staff_Load->Name = L"button46_Staff_Load";
			this->button46_Staff_Load->Size = System::Drawing::Size(75, 23);
			this->button46_Staff_Load->TabIndex = 68;
			this->button46_Staff_Load->Text = L"Load";
			this->button46_Staff_Load->UseVisualStyleBackColor = true;
			this->button46_Staff_Load->Click += gcnew System::EventHandler(this, &InterfaceManager::button46_Staff_Load_Click);
			// 
			// button_Staff_Previous
			// 
			this->button_Staff_Previous->Location = System::Drawing::Point(25, 266);
			this->button_Staff_Previous->Name = L"button_Staff_Previous";
			this->button_Staff_Previous->Size = System::Drawing::Size(113, 23);
			this->button_Staff_Previous->TabIndex = 67;
			this->button_Staff_Previous->Text = L"<";
			this->button_Staff_Previous->UseVisualStyleBackColor = true;
			this->button_Staff_Previous->Click += gcnew System::EventHandler(this, &InterfaceManager::button_Staff_Previous_Click);
			// 
			// button_Staff_Next
			// 
			this->button_Staff_Next->Location = System::Drawing::Point(178, 266);
			this->button_Staff_Next->Name = L"button_Staff_Next";
			this->button_Staff_Next->Size = System::Drawing::Size(113, 23);
			this->button_Staff_Next->TabIndex = 66;
			this->button_Staff_Next->Text = L">";
			this->button_Staff_Next->UseVisualStyleBackColor = true;
			this->button_Staff_Next->Click += gcnew System::EventHandler(this, &InterfaceManager::button_Staff_Next_Click);
			// 
			// dataGridView_Staff
			// 
			this->dataGridView_Staff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Staff->Location = System::Drawing::Point(356, 36);
			this->dataGridView_Staff->Name = L"dataGridView_Staff";
			this->dataGridView_Staff->RowHeadersWidth = 62;
			this->dataGridView_Staff->Size = System::Drawing::Size(569, 310);
			this->dataGridView_Staff->TabIndex = 65;
			this->dataGridView_Staff->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InterfaceManager::dataGridView_Staff_CellClick);
			// 
			// button_Staff_Save
			// 
			this->button_Staff_Save->Location = System::Drawing::Point(176, 337);
			this->button_Staff_Save->Name = L"button_Staff_Save";
			this->button_Staff_Save->Size = System::Drawing::Size(115, 36);
			this->button_Staff_Save->TabIndex = 63;
			this->button_Staff_Save->Text = L"Enregistrer";
			this->button_Staff_Save->UseVisualStyleBackColor = true;
			this->button_Staff_Save->Click += gcnew System::EventHandler(this, &InterfaceManager::button_Staff_Save_Click);
			// 
			// button_Staff_Edit
			// 
			this->button_Staff_Edit->Location = System::Drawing::Point(23, 337);
			this->button_Staff_Edit->Name = L"button_Staff_Edit";
			this->button_Staff_Edit->Size = System::Drawing::Size(115, 36);
			this->button_Staff_Edit->TabIndex = 64;
			this->button_Staff_Edit->Text = L"Modifier";
			this->button_Staff_Edit->UseVisualStyleBackColor = true;
			this->button_Staff_Edit->Click += gcnew System::EventHandler(this, &InterfaceManager::button_Staff_Edit_Click);
			// 
			// button_Staff_Remove
			// 
			this->button_Staff_Remove->Location = System::Drawing::Point(176, 295);
			this->button_Staff_Remove->Name = L"button_Staff_Remove";
			this->button_Staff_Remove->Size = System::Drawing::Size(115, 36);
			this->button_Staff_Remove->TabIndex = 62;
			this->button_Staff_Remove->Text = L"Supprimer";
			this->button_Staff_Remove->UseVisualStyleBackColor = true;
			this->button_Staff_Remove->Click += gcnew System::EventHandler(this, &InterfaceManager::button_Staff_Remove_Click);
			// 
			// button_Staff_Add
			// 
			this->button_Staff_Add->Location = System::Drawing::Point(23, 295);
			this->button_Staff_Add->Name = L"button_Staff_Add";
			this->button_Staff_Add->Size = System::Drawing::Size(115, 36);
			this->button_Staff_Add->TabIndex = 61;
			this->button_Staff_Add->Text = L"Ajouter";
			this->button_Staff_Add->UseVisualStyleBackColor = true;
			this->button_Staff_Add->Click += gcnew System::EventHandler(this, &InterfaceManager::button_Staff_Add_Click);
			// 
			// textStaffRole
			// 
			this->textStaffRole->Location = System::Drawing::Point(178, 225);
			this->textStaffRole->Name = L"textStaffRole";
			this->textStaffRole->Size = System::Drawing::Size(115, 20);
			this->textStaffRole->TabIndex = 60;
			this->textStaffRole->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox32_TextChanged);
			// 
			// label_Staff_Role
			// 
			this->label_Staff_Role->AutoSize = true;
			this->label_Staff_Role->Location = System::Drawing::Point(175, 197);
			this->label_Staff_Role->Name = L"label_Staff_Role";
			this->label_Staff_Role->Size = System::Drawing::Size(24, 13);
			this->label_Staff_Role->TabIndex = 59;
			this->label_Staff_Role->Text = L"role";
			// 
			// textStaffAdresse
			// 
			this->textStaffAdresse->Location = System::Drawing::Point(178, 165);
			this->textStaffAdresse->Name = L"textStaffAdresse";
			this->textStaffAdresse->Size = System::Drawing::Size(115, 20);
			this->textStaffAdresse->TabIndex = 58;
			this->textStaffAdresse->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox33_TextChanged);
			// 
			// label_Staff_Adr_ID
			// 
			this->label_Staff_Adr_ID->AutoSize = true;
			this->label_Staff_Adr_ID->Location = System::Drawing::Point(175, 137);
			this->label_Staff_Adr_ID->Name = L"label_Staff_Adr_ID";
			this->label_Staff_Adr_ID->Size = System::Drawing::Size(48, 13);
			this->label_Staff_Adr_ID->TabIndex = 57;
			this->label_Staff_Adr_ID->Text = L"Adresse ";
			// 
			// textStaffDate
			// 
			this->textStaffDate->Location = System::Drawing::Point(178, 107);
			this->textStaffDate->Name = L"textStaffDate";
			this->textStaffDate->Size = System::Drawing::Size(115, 20);
			this->textStaffDate->TabIndex = 56;
			this->textStaffDate->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox34_TextChanged);
			// 
			// label_Staff_Date_Embauche
			// 
			this->label_Staff_Date_Embauche->AutoSize = true;
			this->label_Staff_Date_Embauche->Location = System::Drawing::Point(175, 79);
			this->label_Staff_Date_Embauche->Name = L"label_Staff_Date_Embauche";
			this->label_Staff_Date_Embauche->Size = System::Drawing::Size(106, 13);
			this->label_Staff_Date_Embauche->TabIndex = 55;
			this->label_Staff_Date_Embauche->Text = L"Date embauchement";
			// 
			// textStaffSup
			// 
			this->textStaffSup->Location = System::Drawing::Point(178, 55);
			this->textStaffSup->Name = L"textStaffSup";
			this->textStaffSup->Size = System::Drawing::Size(115, 20);
			this->textStaffSup->TabIndex = 54;
			this->textStaffSup->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox35_TextChanged);
			// 
			// label_Staff_Nom_Superieur
			// 
			this->label_Staff_Nom_Superieur->AutoSize = true;
			this->label_Staff_Nom_Superieur->Location = System::Drawing::Point(175, 27);
			this->label_Staff_Nom_Superieur->Name = L"label_Staff_Nom_Superieur";
			this->label_Staff_Nom_Superieur->Size = System::Drawing::Size(75, 13);
			this->label_Staff_Nom_Superieur->TabIndex = 53;
			this->label_Staff_Nom_Superieur->Text = L"Nom superieur";
			// 
			// textStaffMail
			// 
			this->textStaffMail->Location = System::Drawing::Point(23, 225);
			this->textStaffMail->Name = L"textStaffMail";
			this->textStaffMail->Size = System::Drawing::Size(115, 20);
			this->textStaffMail->TabIndex = 52;
			this->textStaffMail->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox36_TextChanged);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(20, 197);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(25, 13);
			this->label47->TabIndex = 51;
			this->label47->Text = L"mail";
			// 
			// textStaffPrenom
			// 
			this->textStaffPrenom->Location = System::Drawing::Point(23, 165);
			this->textStaffPrenom->Name = L"textStaffPrenom";
			this->textStaffPrenom->Size = System::Drawing::Size(115, 20);
			this->textStaffPrenom->TabIndex = 50;
			this->textStaffPrenom->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox37_TextChanged);
			// 
			// label_Staff_Pers_Prenom
			// 
			this->label_Staff_Pers_Prenom->AutoSize = true;
			this->label_Staff_Pers_Prenom->Location = System::Drawing::Point(20, 137);
			this->label_Staff_Pers_Prenom->Name = L"label_Staff_Pers_Prenom";
			this->label_Staff_Pers_Prenom->Size = System::Drawing::Size(92, 13);
			this->label_Staff_Pers_Prenom->TabIndex = 49;
			this->label_Staff_Pers_Prenom->Text = L"Prenom personnel";
			// 
			// textStaffNom
			// 
			this->textStaffNom->Location = System::Drawing::Point(23, 107);
			this->textStaffNom->Name = L"textStaffNom";
			this->textStaffNom->Size = System::Drawing::Size(115, 20);
			this->textStaffNom->TabIndex = 48;
			this->textStaffNom->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox38_TextChanged);
			// 
			// label_Staff_Pers_Nom
			// 
			this->label_Staff_Pers_Nom->AutoSize = true;
			this->label_Staff_Pers_Nom->Location = System::Drawing::Point(20, 79);
			this->label_Staff_Pers_Nom->Name = L"label_Staff_Pers_Nom";
			this->label_Staff_Pers_Nom->Size = System::Drawing::Size(78, 13);
			this->label_Staff_Pers_Nom->TabIndex = 47;
			this->label_Staff_Pers_Nom->Text = L"Nom personnel";
			// 
			// textStaffID
			// 
			this->textStaffID->Location = System::Drawing::Point(23, 55);
			this->textStaffID->Name = L"textStaffID";
			this->textStaffID->Size = System::Drawing::Size(115, 20);
			this->textStaffID->TabIndex = 46;
			this->textStaffID->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox39_TextChanged);
			// 
			// label_Staff_Pers_ID
			// 
			this->label_Staff_Pers_ID->AutoSize = true;
			this->label_Staff_Pers_ID->Location = System::Drawing::Point(20, 27);
			this->label_Staff_Pers_ID->Name = L"label_Staff_Pers_ID";
			this->label_Staff_Pers_ID->Size = System::Drawing::Size(66, 13);
			this->label_Staff_Pers_ID->TabIndex = 45;
			this->label_Staff_Pers_ID->Text = L"ID Personne";
			// 
			// tabPageGestionPersonne
			// 
			this->tabPageGestionPersonne->Controls->Add(this->textAffichage);
			this->tabPageGestionPersonne->Controls->Add(this->label54);
			this->tabPageGestionPersonne->Controls->Add(this->Button_Personne_Load);
			this->tabPageGestionPersonne->Controls->Add(this->dataGridView5);
			this->tabPageGestionPersonne->Controls->Add(this->Button_Personne_Retour);
			this->tabPageGestionPersonne->Controls->Add(this->Button_Personne_Avancer);
			this->tabPageGestionPersonne->Controls->Add(this->Button_Personne_Enregistrer);
			this->tabPageGestionPersonne->Controls->Add(this->Button_Personne_Modifier);
			this->tabPageGestionPersonne->Controls->Add(this->Button_Personne_Supprimer);
			this->tabPageGestionPersonne->Controls->Add(this->Button_Personne_Ajouter);
			this->tabPageGestionPersonne->Controls->Add(this->textPersonnePrenom);
			this->tabPageGestionPersonne->Controls->Add(this->Label_Personne_Prenom);
			this->tabPageGestionPersonne->Controls->Add(this->textPersonneNom);
			this->tabPageGestionPersonne->Controls->Add(this->Label_Personne_Nom);
			this->tabPageGestionPersonne->Controls->Add(this->textPersonneID);
			this->tabPageGestionPersonne->Controls->Add(this->Text_Personne_ID);
			this->tabPageGestionPersonne->Location = System::Drawing::Point(4, 22);
			this->tabPageGestionPersonne->Margin = System::Windows::Forms::Padding(2);
			this->tabPageGestionPersonne->Name = L"tabPageGestionPersonne";
			this->tabPageGestionPersonne->Size = System::Drawing::Size(944, 400);
			this->tabPageGestionPersonne->TabIndex = 5;
			this->tabPageGestionPersonne->Text = L"Gestion personne";
			this->tabPageGestionPersonne->UseVisualStyleBackColor = true;
			this->tabPageGestionPersonne->Click += gcnew System::EventHandler(this, &InterfaceManager::tabPageGestionPersonne_Click);
			// 
			// textAffichage
			// 
			this->textAffichage->AutoSize = true;
			this->textAffichage->Location = System::Drawing::Point(16, 357);
			this->textAffichage->Name = L"textAffichage";
			this->textAffichage->Size = System::Drawing::Size(56, 13);
			this->textAffichage->TabIndex = 77;
			this->textAffichage->Text = L"En attente";
			this->textAffichage->Click += gcnew System::EventHandler(this, &InterfaceManager::textAffichage_Click);
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(42, 357);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(0, 13);
			this->label54->TabIndex = 76;
			// 
			// Button_Personne_Load
			// 
			this->Button_Personne_Load->Location = System::Drawing::Point(119, 294);
			this->Button_Personne_Load->Name = L"Button_Personne_Load";
			this->Button_Personne_Load->Size = System::Drawing::Size(115, 36);
			this->Button_Personne_Load->TabIndex = 75;
			this->Button_Personne_Load->Text = L"Load";
			this->Button_Personne_Load->UseVisualStyleBackColor = true;
			this->Button_Personne_Load->Click += gcnew System::EventHandler(this, &InterfaceManager::button44_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(415, 26);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 62;
			this->dataGridView5->RowTemplate->Height = 28;
			this->dataGridView5->Size = System::Drawing::Size(516, 357);
			this->dataGridView5->TabIndex = 74;
			this->dataGridView5->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InterfaceManager::dataGridView5_CellClick);
			// 
			// Button_Personne_Retour
			// 
			this->Button_Personne_Retour->Location = System::Drawing::Point(49, 136);
			this->Button_Personne_Retour->Name = L"Button_Personne_Retour";
			this->Button_Personne_Retour->Size = System::Drawing::Size(113, 23);
			this->Button_Personne_Retour->TabIndex = 73;
			this->Button_Personne_Retour->Text = L"<";
			this->Button_Personne_Retour->UseVisualStyleBackColor = true;
			this->Button_Personne_Retour->Click += gcnew System::EventHandler(this, &InterfaceManager::button38_Click);
			// 
			// Button_Personne_Avancer
			// 
			this->Button_Personne_Avancer->Location = System::Drawing::Point(204, 136);
			this->Button_Personne_Avancer->Name = L"Button_Personne_Avancer";
			this->Button_Personne_Avancer->Size = System::Drawing::Size(113, 23);
			this->Button_Personne_Avancer->TabIndex = 72;
			this->Button_Personne_Avancer->Text = L">";
			this->Button_Personne_Avancer->UseVisualStyleBackColor = true;
			this->Button_Personne_Avancer->Click += gcnew System::EventHandler(this, &InterfaceManager::button39_Click);
			// 
			// Button_Personne_Enregistrer
			// 
			this->Button_Personne_Enregistrer->Location = System::Drawing::Point(202, 207);
			this->Button_Personne_Enregistrer->Name = L"Button_Personne_Enregistrer";
			this->Button_Personne_Enregistrer->Size = System::Drawing::Size(115, 36);
			this->Button_Personne_Enregistrer->TabIndex = 70;
			this->Button_Personne_Enregistrer->Text = L"Enregistrer";
			this->Button_Personne_Enregistrer->UseVisualStyleBackColor = true;
			this->Button_Personne_Enregistrer->Click += gcnew System::EventHandler(this, &InterfaceManager::button40_Click);
			// 
			// Button_Personne_Modifier
			// 
			this->Button_Personne_Modifier->Location = System::Drawing::Point(49, 207);
			this->Button_Personne_Modifier->Name = L"Button_Personne_Modifier";
			this->Button_Personne_Modifier->Size = System::Drawing::Size(115, 36);
			this->Button_Personne_Modifier->TabIndex = 71;
			this->Button_Personne_Modifier->Text = L"Modifier";
			this->Button_Personne_Modifier->UseVisualStyleBackColor = true;
			this->Button_Personne_Modifier->Click += gcnew System::EventHandler(this, &InterfaceManager::button41_Click);
			// 
			// Button_Personne_Supprimer
			// 
			this->Button_Personne_Supprimer->Location = System::Drawing::Point(202, 164);
			this->Button_Personne_Supprimer->Name = L"Button_Personne_Supprimer";
			this->Button_Personne_Supprimer->Size = System::Drawing::Size(115, 36);
			this->Button_Personne_Supprimer->TabIndex = 69;
			this->Button_Personne_Supprimer->Text = L"Supprimer";
			this->Button_Personne_Supprimer->UseVisualStyleBackColor = true;
			this->Button_Personne_Supprimer->Click += gcnew System::EventHandler(this, &InterfaceManager::button42_Click);
			// 
			// Button_Personne_Ajouter
			// 
			this->Button_Personne_Ajouter->Location = System::Drawing::Point(49, 164);
			this->Button_Personne_Ajouter->Name = L"Button_Personne_Ajouter";
			this->Button_Personne_Ajouter->Size = System::Drawing::Size(115, 36);
			this->Button_Personne_Ajouter->TabIndex = 68;
			this->Button_Personne_Ajouter->Text = L"Ajouter";
			this->Button_Personne_Ajouter->UseVisualStyleBackColor = true;
			this->Button_Personne_Ajouter->Click += gcnew System::EventHandler(this, &InterfaceManager::button43_Click);
			// 
			// textPersonnePrenom
			// 
			this->textPersonnePrenom->Location = System::Drawing::Point(225, 96);
			this->textPersonnePrenom->Name = L"textPersonnePrenom";
			this->textPersonnePrenom->Size = System::Drawing::Size(115, 20);
			this->textPersonnePrenom->TabIndex = 11;
			// 
			// Label_Personne_Prenom
			// 
			this->Label_Personne_Prenom->AutoSize = true;
			this->Label_Personne_Prenom->Location = System::Drawing::Point(247, 68);
			this->Label_Personne_Prenom->Name = L"Label_Personne_Prenom";
			this->Label_Personne_Prenom->Size = System::Drawing::Size(43, 13);
			this->Label_Personne_Prenom->TabIndex = 10;
			this->Label_Personne_Prenom->Text = L"Prenom";
			// 
			// textPersonneNom
			// 
			this->textPersonneNom->Location = System::Drawing::Point(19, 96);
			this->textPersonneNom->Name = L"textPersonneNom";
			this->textPersonneNom->Size = System::Drawing::Size(115, 20);
			this->textPersonneNom->TabIndex = 9;
			// 
			// Label_Personne_Nom
			// 
			this->Label_Personne_Nom->AutoSize = true;
			this->Label_Personne_Nom->Location = System::Drawing::Point(66, 68);
			this->Label_Personne_Nom->Name = L"Label_Personne_Nom";
			this->Label_Personne_Nom->Size = System::Drawing::Size(29, 13);
			this->Label_Personne_Nom->TabIndex = 8;
			this->Label_Personne_Nom->Text = L"Nom";
			// 
			// textPersonneID
			// 
			this->textPersonneID->Location = System::Drawing::Point(119, 44);
			this->textPersonneID->Name = L"textPersonneID";
			this->textPersonneID->Size = System::Drawing::Size(115, 20);
			this->textPersonneID->TabIndex = 7;
			this->textPersonneID->TextChanged += gcnew System::EventHandler(this, &InterfaceManager::textBox42_TextChanged);
			// 
			// Text_Personne_ID
			// 
			this->Text_Personne_ID->AutoSize = true;
			this->Text_Personne_ID->Location = System::Drawing::Point(142, 16);
			this->Text_Personne_ID->Name = L"Text_Personne_ID";
			this->Text_Personne_ID->Size = System::Drawing::Size(66, 13);
			this->Text_Personne_ID->TabIndex = 6;
			this->Text_Personne_ID->Text = L"ID Personne";
			// 
			// tabPageGestionAdresses
			// 
			this->tabPageGestionAdresses->Controls->Add(this->comboBoxAdrCitName);
			this->tabPageGestionAdresses->Controls->Add(this->labelAdrStatus);
			this->tabPageGestionAdresses->Controls->Add(this->buttonLoadAdr);
			this->tabPageGestionAdresses->Controls->Add(this->richTextBoxAdrDetails1);
			this->tabPageGestionAdresses->Controls->Add(this->buttonAdrPrevious);
			this->tabPageGestionAdresses->Controls->Add(this->buttonAdrNext);
			this->tabPageGestionAdresses->Controls->Add(this->dataGridView4);
			this->tabPageGestionAdresses->Controls->Add(this->buttonRegisterAdr);
			this->tabPageGestionAdresses->Controls->Add(this->buttonEditAdr);
			this->tabPageGestionAdresses->Controls->Add(this->buttonDelAdr);
			this->tabPageGestionAdresses->Controls->Add(this->buttonAddAdr);
			this->tabPageGestionAdresses->Controls->Add(this->textBoxAdrCitZip);
			this->tabPageGestionAdresses->Controls->Add(this->label52);
			this->tabPageGestionAdresses->Controls->Add(this->label53);
			this->tabPageGestionAdresses->Controls->Add(this->textBoxAdrCitID);
			this->tabPageGestionAdresses->Controls->Add(this->label43);
			this->tabPageGestionAdresses->Controls->Add(this->label55);
			this->tabPageGestionAdresses->Controls->Add(this->textBoxAdrName);
			this->tabPageGestionAdresses->Controls->Add(this->label56);
			this->tabPageGestionAdresses->Controls->Add(this->textBoxAdrNum);
			this->tabPageGestionAdresses->Controls->Add(this->label57);
			this->tabPageGestionAdresses->Controls->Add(this->textBoxAdrID);
			this->tabPageGestionAdresses->Controls->Add(this->label58);
			this->tabPageGestionAdresses->Location = System::Drawing::Point(4, 22);
			this->tabPageGestionAdresses->Name = L"tabPageGestionAdresses";
			this->tabPageGestionAdresses->Padding = System::Windows::Forms::Padding(3);
			this->tabPageGestionAdresses->Size = System::Drawing::Size(944, 400);
			this->tabPageGestionAdresses->TabIndex = 6;
			this->tabPageGestionAdresses->Text = L"Gestion adresses";
			this->tabPageGestionAdresses->UseVisualStyleBackColor = true;
			// 
			// comboBoxAdrCitName
			// 
			this->comboBoxAdrCitName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBoxAdrCitName->FormattingEnabled = true;
			this->comboBoxAdrCitName->Location = System::Drawing::Point(176, 103);
			this->comboBoxAdrCitName->Name = L"comboBoxAdrCitName";
			this->comboBoxAdrCitName->Size = System::Drawing::Size(117, 21);
			this->comboBoxAdrCitName->TabIndex = 117;
			this->comboBoxAdrCitName->TextUpdate += gcnew System::EventHandler(this, &InterfaceManager::comboBoxAdrCitName_TextUpdate);
			// 
			// labelAdrStatus
			// 
			this->labelAdrStatus->AutoSize = true;
			this->labelAdrStatus->Location = System::Drawing::Point(422, 352);
			this->labelAdrStatus->Name = L"labelAdrStatus";
			this->labelAdrStatus->Size = System::Drawing::Size(65, 13);
			this->labelAdrStatus->TabIndex = 116;
			this->labelAdrStatus->Text = L"En attente...";
			// 
			// buttonLoadAdr
			// 
			this->buttonLoadAdr->Location = System::Drawing::Point(356, 348);
			this->buttonLoadAdr->Name = L"buttonLoadAdr";
			this->buttonLoadAdr->Size = System::Drawing::Size(60, 21);
			this->buttonLoadAdr->TabIndex = 115;
			this->buttonLoadAdr->Text = L"Load";
			this->buttonLoadAdr->UseVisualStyleBackColor = true;
			this->buttonLoadAdr->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonLoadAdr_Click);
			// 
			// richTextBoxAdrDetails1
			// 
			this->richTextBoxAdrDetails1->Location = System::Drawing::Point(23, 214);
			this->richTextBoxAdrDetails1->Name = L"richTextBoxAdrDetails1";
			this->richTextBoxAdrDetails1->Size = System::Drawing::Size(268, 42);
			this->richTextBoxAdrDetails1->TabIndex = 114;
			this->richTextBoxAdrDetails1->Text = L"";
			// 
			// buttonAdrPrevious
			// 
			this->buttonAdrPrevious->Location = System::Drawing::Point(25, 262);
			this->buttonAdrPrevious->Name = L"buttonAdrPrevious";
			this->buttonAdrPrevious->Size = System::Drawing::Size(113, 23);
			this->buttonAdrPrevious->TabIndex = 113;
			this->buttonAdrPrevious->Text = L"<";
			this->buttonAdrPrevious->UseVisualStyleBackColor = true;
			this->buttonAdrPrevious->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonAdrPrevious_Click);
			// 
			// buttonAdrNext
			// 
			this->buttonAdrNext->Location = System::Drawing::Point(178, 262);
			this->buttonAdrNext->Name = L"buttonAdrNext";
			this->buttonAdrNext->Size = System::Drawing::Size(113, 23);
			this->buttonAdrNext->TabIndex = 112;
			this->buttonAdrNext->Text = L">";
			this->buttonAdrNext->UseVisualStyleBackColor = true;
			this->buttonAdrNext->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonAdrNext_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(356, 32);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(569, 310);
			this->dataGridView4->TabIndex = 111;
			this->dataGridView4->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InterfaceManager::dataGridView4_CellClick);
			// 
			// buttonRegisterAdr
			// 
			this->buttonRegisterAdr->Location = System::Drawing::Point(176, 333);
			this->buttonRegisterAdr->Name = L"buttonRegisterAdr";
			this->buttonRegisterAdr->Size = System::Drawing::Size(115, 36);
			this->buttonRegisterAdr->TabIndex = 109;
			this->buttonRegisterAdr->Text = L"Enregistrer";
			this->buttonRegisterAdr->UseVisualStyleBackColor = true;
			this->buttonRegisterAdr->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonRegisterAdr_Click);
			// 
			// buttonEditAdr
			// 
			this->buttonEditAdr->Location = System::Drawing::Point(23, 333);
			this->buttonEditAdr->Name = L"buttonEditAdr";
			this->buttonEditAdr->Size = System::Drawing::Size(115, 36);
			this->buttonEditAdr->TabIndex = 110;
			this->buttonEditAdr->Text = L"Modifier";
			this->buttonEditAdr->UseVisualStyleBackColor = true;
			this->buttonEditAdr->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonEditAdr_Click);
			// 
			// buttonDelAdr
			// 
			this->buttonDelAdr->Location = System::Drawing::Point(176, 291);
			this->buttonDelAdr->Name = L"buttonDelAdr";
			this->buttonDelAdr->Size = System::Drawing::Size(115, 36);
			this->buttonDelAdr->TabIndex = 108;
			this->buttonDelAdr->Text = L"Supprimer";
			this->buttonDelAdr->UseVisualStyleBackColor = true;
			this->buttonDelAdr->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonDelAdr_Click);
			// 
			// buttonAddAdr
			// 
			this->buttonAddAdr->Location = System::Drawing::Point(23, 291);
			this->buttonAddAdr->Name = L"buttonAddAdr";
			this->buttonAddAdr->Size = System::Drawing::Size(115, 36);
			this->buttonAddAdr->TabIndex = 107;
			this->buttonAddAdr->Text = L"Ajouter";
			this->buttonAddAdr->UseVisualStyleBackColor = true;
			this->buttonAddAdr->Click += gcnew System::EventHandler(this, &InterfaceManager::buttonAddAdr_Click);
			// 
			// textBoxAdrCitZip
			// 
			this->textBoxAdrCitZip->Location = System::Drawing::Point(178, 161);
			this->textBoxAdrCitZip->Name = L"textBoxAdrCitZip";
			this->textBoxAdrCitZip->Size = System::Drawing::Size(115, 20);
			this->textBoxAdrCitZip->TabIndex = 106;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(175, 145);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(63, 13);
			this->label52->TabIndex = 105;
			this->label52->Text = L"Code postal";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(175, 87);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(26, 13);
			this->label53->TabIndex = 103;
			this->label53->Text = L"Ville";
			// 
			// textBoxAdrCitID
			// 
			this->textBoxAdrCitID->Location = System::Drawing::Point(178, 51);
			this->textBoxAdrCitID->Name = L"textBoxAdrCitID";
			this->textBoxAdrCitID->Size = System::Drawing::Size(115, 20);
			this->textBoxAdrCitID->TabIndex = 102;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(175, 32);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(54, 13);
			this->label43->TabIndex = 101;
			this->label43->Text = L"ID de ville";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(20, 198);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(39, 13);
			this->label55->TabIndex = 100;
			this->label55->Text = L"Details";
			// 
			// textBoxAdrName
			// 
			this->textBoxAdrName->Location = System::Drawing::Point(23, 161);
			this->textBoxAdrName->Name = L"textBoxAdrName";
			this->textBoxAdrName->Size = System::Drawing::Size(115, 20);
			this->textBoxAdrName->TabIndex = 99;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(20, 145);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(62, 13);
			this->label56->TabIndex = 98;
			this->label56->Text = L"Nom de rue";
			// 
			// textBoxAdrNum
			// 
			this->textBoxAdrNum->Location = System::Drawing::Point(23, 103);
			this->textBoxAdrNum->Name = L"textBoxAdrNum";
			this->textBoxAdrNum->Size = System::Drawing::Size(115, 20);
			this->textBoxAdrNum->TabIndex = 97;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(20, 87);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(77, 13);
			this->label57->TabIndex = 96;
			this->label57->Text = L"Numéro de rue";
			// 
			// textBoxAdrID
			// 
			this->textBoxAdrID->Location = System::Drawing::Point(23, 51);
			this->textBoxAdrID->Name = L"textBoxAdrID";
			this->textBoxAdrID->Size = System::Drawing::Size(115, 20);
			this->textBoxAdrID->TabIndex = 95;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(20, 32);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(74, 13);
			this->label58->TabIndex = 94;
			this->label58->Text = L"ID de Adresse";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(477, 356);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(56, 13);
			this->label44->TabIndex = 73;
			this->label44->Text = L"En attente";
			// 
			// InterfaceManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(976, 451);
			this->Controls->Add(this->tabControl1);
			this->Name = L"InterfaceManager";
			this->Text = L"Interface Manager";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &InterfaceManager::InterfaceManager_FormClosed);
			this->Load += gcnew System::EventHandler(this, &InterfaceManager::MyForm1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPageGestionClient->ResumeLayout(false);
			this->tabPageGestionClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPageGestionCommande->ResumeLayout(false);
			this->tabPageGestionCommande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPageGestionStock->ResumeLayout(false);
			this->tabPageGestionStock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPageGestionStat->ResumeLayout(false);
			this->tabPageGestionStat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabControlSimuModeSwitch->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDemarque))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMarge))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRemise))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTVA))->EndInit();
			this->tabPageGestionStaff->ResumeLayout(false);
			this->tabPageGestionStaff->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Staff))->EndInit();
			this->tabPageGestionPersonne->ResumeLayout(false);
			this->tabPageGestionPersonne->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->tabPageGestionAdresses->ResumeLayout(false);
			this->tabPageGestionAdresses->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void loadDataPersonne(int index)
{
	this->dsPersonne->Clear();
	this->dsPersonne = this->processusPersonnes->ListePersonne("liste");

	// Update dataGridView
	this->dataGridView5->Refresh();

	this->dataGridView5->DataSource = this->dsPersonne;
	this->dataGridView5->DataMember = "liste";
}

	private: System::Void dataGridView_Staff_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		this->index = e->RowIndex;
		this->loadDataStaff(this->index);
	}
	private: System::Void dataGridView5_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex != -1) {
			this->textPersonneID->Text = Convert::ToString(this->dataGridView5->Rows[e->RowIndex]->Cells["ID"]->Value->ToString());
			this->textPersonnePrenom->Text = Convert::ToString(this->dataGridView5->Rows[e->RowIndex]->Cells["Prenom"]->Value->ToString());
			this->textPersonneNom->Text = Convert::ToString(this->dataGridView5->Rows[e->RowIndex]->Cells["Nom"]->Value->ToString());
		}
	}

private: void loadDataClient(int index)
{	
	// Remplir les champs avec la première personne du dataset
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
	compt = 0;
	while (Convert::ToString(this->dsClient->Tables[0]->Rows[this->index]->ItemArray[0]) != Convert::ToString(this->dsPersonne->Tables[0]->Rows[compt]->ItemArray[0])) {
		compt++;
	};
	this->textNomClient->Text = Convert::ToString(this->dsPersonne->Tables[0]->Rows[compt]->ItemArray[1]);
	this->textPrenomClient->Text = Convert::ToString(this->dsPersonne->Tables[0]->Rows[compt]->ItemArray[2]);

	// Mettre à jour le data grid
	this->dataGridView1->Refresh();

	this->dataGridView1->DataSource = this->dsClient;
	this->dataGridView1->DataMember = "liste";
}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		this->index = e->RowIndex;
		this->loadDataClient(this->index);
	}


private: void loadDataOrders(int index)
{
	this->dsOrders->Clear();
	this->dsOrders = this->processusOrders->ListeOrders("liste");
	this->dsBill->Clear();
	this->dsBill = this->processusOrders->ListeBill("liste");
	this->textBox21->Text = Convert::ToString(this->dsOrders->Tables["liste"]->Rows[this->index]->ItemArray[0]);
	this->textBox20->Text = Convert::ToString(this->dsOrders->Tables["liste"]->Rows[this->index]->ItemArray[1]);
	this->textBox19->Text = Convert::ToString(this->dsOrders->Tables["liste"]->Rows[this->index]->ItemArray[2] + " " + this->dsOrders->Tables["liste"]->Rows[this->index]->ItemArray[3]);
	this->textBox14->Text = Convert::ToString(this->dsOrders->Tables["liste"]->Rows[this->index]->ItemArray[4]);
	this->textBox17->Text = Convert::ToString(this->dsOrders->Tables["liste"]->Rows[this->index]->ItemArray[5]);
	this->textBox10->Text = Convert::ToString(this->dsOrders->Tables["liste"]->Rows[this->index]->ItemArray[6]);
	int compt = 0;
	while (Convert::ToString(this->dsOrders->Tables[0]->Rows[this->index]->ItemArray[0]) != Convert::ToString(this->dsBill->Tables["liste"]->Rows[compt]->ItemArray[3])) {
		compt++;
	};
	this->textBox9->Text = Convert::ToString(this->dsBill->Tables["liste"]->Rows[compt]->ItemArray[2]);
	this->textBox23->Text = Convert::ToString(this->dsBill->Tables["liste"]->Rows[compt]->ItemArray[1]);

}

private: void loadDataStaff(int index)
{
	this->dsPersonne->Clear();
	this->dsPersonne = this->processusPersonnes->ListePersonne("liste");
	this->dsStaff->Clear();
	this->dsStaff = this->processusStaff->ListeStaff("liste");
	this->textStaffID->Text = Convert::ToString(this->dsStaff->Tables["liste"]->Rows[this->index]->ItemArray[0]);
	this->textStaffSup->Text = Convert::ToString(this->dsStaff->Tables["liste"]->Rows[this->index]->ItemArray[1]);
	this->textStaffDate->Text = Convert::ToString(this->dsStaff->Tables["liste"]->Rows[this->index]->ItemArray[2]);
	this->textStaffRole->Text = Convert::ToString(this->dsStaff->Tables["liste"]->Rows[this->index]->ItemArray[3]);
	this->textStaffAdresse->Text = Convert::ToString(this->dsStaff->Tables["liste"]->Rows[this->index]->ItemArray[4]);
	this->textStaffMail->Text = Convert::ToString(this->dsStaff->Tables["liste"]->Rows[this->index]->ItemArray[5]);
	
	int compt = 0;
	while (Convert::ToString(this->dsStaff->Tables[0]->Rows[this->index]->ItemArray[0]) != Convert::ToString(this->dsPersonne->Tables[0]->Rows[compt]->ItemArray[0])) {
		compt++;
	};
	this->textStaffNom->Text = Convert::ToString(this->dsPersonne->Tables[0]->Rows[compt]->ItemArray[1]);
	this->textStaffPrenom->Text = Convert::ToString(this->dsPersonne->Tables[0]->Rows[compt]->ItemArray[2]);

	// Update dataGridView
	this->dataGridView_Staff->Refresh();
	this->dataGridView_Staff->DataSource = this->dsStaff;
	this->dataGridView_Staff->DataMember = "liste";
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
	private: System::Void tabPageGestionStock_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPageGestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPageGestionPersonne_Click(System::Object^ sender, System::EventArgs^ e) {
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
		this->processusClient->Update_Client(Convert::ToInt32(this->textClientID->Text),Convert::ToString(this->textMail->Text), Convert::ToDateTime(this->textAniiv->Text), Convert::ToDateTime(this->textPremiereCommande->Text), Convert::ToInt32(this->textFacturation->Text), Convert::ToInt32(this->textLivraison->Text));
	}
	else if (this->mode == "sup")
	{
		this->processusClient->Remove_Client(Convert::ToInt32(this->textClientID->Text));
	}
	this->index = 0;
	this->loadDataClient(this->index);
	this->affichageClient ->Text += "Traitement terminé.";
}
private: System::Void Load_Stock_Click(System::Object^ sender, System::EventArgs^ e) {		//Update the Stock DataGrid
	this->dataGridView2->Refresh();

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
	if (e->RowIndex != -1) {
		this->textBox16->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_ID"]->Value->ToString();
		this->textBox15->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_NAME"]->Value->ToString();
		this->textBox11->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_STOCK"]->Value->ToString();
		this->textBox12->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_Restock_Threshold"]->Value->ToString();
		this->textBox13->Text = this->dataGridView2->Rows[e->RowIndex]->Cells["PRO_PRICE"]->Value->ToString();
	} 
}

private: System::Void textBox39_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox35_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox34_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox32_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox33_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox36_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox37_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox38_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button46_Staff_Load_Click(System::Object^ sender, System::EventArgs^ e) {
	loadDataStaff(0);
}


private: System::Void button_Staff_Next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index < this->dsStaff->Tables["liste"]->Rows->Count - 1)
	{
		this->index++;
		this->loadDataStaff(this->index);
	}

}
private: System::Void button_Staff_Previous_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index > 0)
	{
		this->index--;
		this->loadDataStaff(this->index);

	}

}
private: System::Void button_Staff_Add_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textStaffID->Clear();
	this->textStaffSup->Clear();
	this->textStaffDate->Clear();
	this->textStaffRole->Clear();
	this->textStaffAdresse->Clear();
	this->textStaffMail->Clear();
	this->textStaffNom->Text = "Ne rien entrer.";
	this->textStaffPrenom->Text = "Ne rien entrer.";
	this->mode = "nouv";
	this->textStaffAffiche->Text = Convert::ToString("Veillez entrer les informations");
}
private: System::Void label55_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_Staff_Edit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->textStaffAffiche->Text = "Veuillez modifier les information et enregistrer.";
}
private: System::Void button_Staff_Remove_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "sup";
	this->textStaffAffiche->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
}
private: System::Void button_Staff_Save_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode == "nouv")
	{
		int Id;
		this->processusIdentification->Add_Identification(this->textStaffMail->Text, "1234");
		Id = this->processusStaff->Add_Staff(Convert::ToInt32(this->textStaffID->Text), Convert::ToInt32(this->textStaffSup->Text),Convert::ToString(this->textStaffRole->Text), Convert::ToInt32(this->textStaffAdresse->Text), Convert::ToDateTime(this->textStaffDate->Text), this->textStaffMail->Text);
	}
	else if (this->mode == "maj")
	{
		this->processusStaff->Update_Staff(Convert::ToInt32(this->textStaffID->Text), Convert::ToInt32(this->textStaffSup->Text),Convert::ToString(this->textStaffRole->Text), Convert::ToInt32(this->textStaffAdresse->Text), Convert::ToDateTime(this->textStaffDate->Text), this->textStaffMail->Text);
	}
	else if (this->mode == "sup")
	{
		this->processusStaff->Remove_Staff(Convert::ToInt32(this->textStaffID->Text));
		this->processusIdentification->Remove_Identification(this->textStaffMail->Text);
	}
	this->index = 0;
	this->loadDataStaff(this->index);
	this->textStaffAffiche->Text += "Traitement terminé.";
}
	// Statistics
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Chiffre d'affaire
		int iind = this->comboBox1->Items->IndexOf(this->comboBox1->Text) + 1;
		if (iind >= 10) {
			this->textBoxChfAff->Text = Convert::ToString(this->Stat_Service->Calcul_Chiffre_Affaire(Convert::ToString(iind))) + " €";
		}
		else {
			this->textBoxChfAff->Text = Convert::ToString(this->Stat_Service->Calcul_Chiffre_Affaire("0" + Convert::ToString(iind))) + " €";
		}
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->numericUpDown1->Value != 0) {
			this->textBoxTotCli->Text = Convert::ToString(this->Stat_Service->Calcul_Montant_Total_client((int)this->numericUpDown1->Value)) + " €";
		}
		else {
			MessageBox::Show("Error, client id can't be 0.");
		}
	}
	private: System::Void Refresh_Simulation() {
		this->textBoxValComAuto->Text = Convert::ToString(this->Stat_Service->Valeur_Commerciale_Stock()) + " €";
		this->textBoxValComPers->Text = this->textBoxValComAuto->Text;
	}
	private: System::Void buttonTVA20_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_TVA(20);
		this->Refresh_Simulation();
		this->buttonTVA20->Enabled = false;
		this->buttonTVA10->Enabled = true;
		this->buttonTVA5->Enabled = true;
	}
	private: System::Void buttonTVA10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_TVA(10);
		this->Refresh_Simulation();
		this->buttonTVA20->Enabled = true;
		this->buttonTVA10->Enabled = false;
		this->buttonTVA5->Enabled = true;
	}
	private: System::Void buttonTVA5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_TVA(5.5);
		this->Refresh_Simulation();
		this->buttonTVA20->Enabled = true;
		this->buttonTVA10->Enabled = true;
		this->buttonTVA5->Enabled = false;
	}
	private: System::Void buttonMarge5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Marge(5);
		this->Refresh_Simulation();
		this->buttonMarge5->Enabled = false;
		this->buttonMarge10->Enabled = true;
		this->buttonMarge15->Enabled = true;
	}
	private: System::Void buttonMarge10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Marge(10);
		this->Refresh_Simulation();
		this->buttonMarge5->Enabled = true;
		this->buttonMarge10->Enabled = false;
		this->buttonMarge15->Enabled = true;
	}
	private: System::Void buttonMarge15_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Marge(15);
		this->Refresh_Simulation();
		this->buttonMarge5->Enabled = true;
		this->buttonMarge10->Enabled = true;
		this->buttonMarge15->Enabled = false;
	}
	private: System::Void buttonRemise6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Remise(6);
		this->Refresh_Simulation();
		this->buttonRemise6->Enabled = false;
		this->buttonRemise5->Enabled = true;
		this->buttonRemise3->Enabled = true;
	}
	private: System::Void buttonRemise5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Remise(5);
		this->Refresh_Simulation();
		this->buttonRemise6->Enabled = true;
		this->buttonRemise5->Enabled = false;
		this->buttonRemise3->Enabled = true;
	}
	private: System::Void buttonRemise3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Remise(3);
		this->Refresh_Simulation();
		this->buttonRemise6->Enabled = true;
		this->buttonRemise5->Enabled = true;
		this->buttonRemise3->Enabled = false;
	}
	private: System::Void buttonDemarque2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Demarque(2);
		this->Refresh_Simulation();
		this->buttonDemarque2->Enabled = false;
		this->buttonDemarque3->Enabled = true;
		this->buttonDemarque5->Enabled = true;
	}
	private: System::Void buttonDemarque3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Demarque(3);
		this->Refresh_Simulation();
		this->buttonDemarque2->Enabled = true;
		this->buttonDemarque3->Enabled = false;
		this->buttonDemarque5->Enabled = true;
	}
	private: System::Void buttonDemarque5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Demarque(5);
		this->Refresh_Simulation();
		this->buttonDemarque2->Enabled = true;
		this->buttonDemarque3->Enabled = true;
		this->buttonDemarque5->Enabled = false;
	}
	// / Reset simulation buttons to enabled
	private: System::Void Reset_Simu_Auto_Buttons() {
		this->buttonDemarque2->Enabled = true;
		this->buttonDemarque3->Enabled = true;
		this->buttonDemarque5->Enabled = true;
		this->buttonRemise6->Enabled = true;
		this->buttonRemise5->Enabled = true;
		this->buttonRemise3->Enabled = true;
		this->buttonMarge5->Enabled = true;
		this->buttonMarge10->Enabled = true;
		this->buttonMarge15->Enabled = true;
		this->buttonTVA20->Enabled = true;
		this->buttonTVA10->Enabled = true;
		this->buttonTVA5->Enabled = true;
	}
	// / Personalized simulation controllers
	private: System::Void numericUpDownTVA_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_TVA(Convert::ToDouble(this->numericUpDownTVA->Value));
		this->Refresh_Simulation();
		this->Reset_Simu_Auto_Buttons();
	}
	private: System::Void numericUpDownRemise_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Remise(Convert::ToDouble(this->numericUpDownRemise->Value));
		this->Refresh_Simulation();
		this->Reset_Simu_Auto_Buttons();
	}
	private: System::Void numericUpDownDemarque_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Demarque(Convert::ToDouble(this->numericUpDownDemarque->Value));
		this->Refresh_Simulation();
		this->Reset_Simu_Auto_Buttons();
	}
	private: System::Void numericUpDownMarge_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Stat_Service->Set_Simu_Marge(Convert::ToDouble(this->numericUpDownMarge->Value));
		this->Refresh_Simulation();
		this->Reset_Simu_Auto_Buttons();
	}
	private: System::Void buttonStaffReload_Click(System::Object^ sender, System::EventArgs^ e) {
		// Panier moyen
		this->textBoxPanierAvg->Text = Convert::ToString(this->Stat_Service->Calcul_Panier()) + " €";

		// Chiffre d'affaire
		int iind = this->comboBox1->Items->IndexOf(this->comboBox1->Text) + 1;
		if (iind >= 10) {
			this->textBoxChfAff->Text = Convert::ToString(this->Stat_Service->Calcul_Chiffre_Affaire(Convert::ToString(iind))) + " €";
		}
		else {
			this->textBoxChfAff->Text = Convert::ToString(this->Stat_Service->Calcul_Chiffre_Affaire("0" + Convert::ToString(iind))) + " €";
		}

		// Montant total client
		if (this->numericUpDown1->Value != 0) {
			this->textBoxTotCli->Text = Convert::ToString(this->Stat_Service->Calcul_Montant_Total_client((int)this->numericUpDown1->Value)) + " €";
		}
		else {
			MessageBox::Show("Error, client id can't be 0.");
		}

		cli::array<System::String^>^ list;

		// Articles les plus vendus
		this->listBoxMorePurchased->Items->Clear();
		list = this->Stat_Service->Articles_Plus_Vendus();
		for (int i = 0; i < list->Length; i++) {
			this->listBoxMorePurchased->Items->Add(list[i]);
		}

		// Articles les moins vendus
		this->listBoxLessPurchased->Items->Clear();
		list = this->Stat_Service->Articles_Moins_Vendus();
		for (int i = 0; i < list->Length; i++) {
			this->listBoxLessPurchased->Items->Add(list[i]);
		}

		// Calcul valeur d'achat
		this->textBoxValAch->Text = Convert::ToString(this->Stat_Service->Valeur_Achat_Stock()) + " €";

		// Produit sous le seuil
		this->listUnderThreshold->Items->Clear();
		list = this->Stat_Service->Produit_Sous_Seuil();
		for (int i = 0; i < list->Length; i++) {
			this->listUnderThreshold->Items->Add(list[i]);
		}

		// Valeur commerciale
		this->Refresh_Simulation();
	}

	// Tab switch handler
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->tabControl1->SelectedTab->Name == tabPageGestionStat->Name) {
			this->Stat_Service = gcnew SG_Stat;
		} else if (this->tabControl1->SelectedTab->Name == tabPageGestionAdresses->Name) { // Gestion adresses
			this->Adr_Service = gcnew SG_Address;
		} else if (this->tabControl1->SelectedTab->Name == tabPageGestionClient->Name) { // Gestion Client
			this->processusClient = gcnew SG_Client;
			this->dsClient = gcnew Data::DataSet();
			this->dsLivraison = gcnew Data::DataSet();
			this->dsFacturation = gcnew Data::DataSet();
			this->processusPersonnes = gcnew SG_Personne();
		} else if (this->tabControl1->SelectedTab->Name == tabPageGestionPersonne->Name) { // Gestion Personnes
			this->processusPersonnes = gcnew SG_Personne();
			this->dsPersonne = gcnew Data::DataSet();
		} else if (this->tabControl1->SelectedTab->Name == tabPageGestionStaff->Name) { // Gestion Staff
			this->dsStaff = gcnew Data::DataSet();
			this->dsPersonne = gcnew Data::DataSet();
			this->processusPersonnes = gcnew SG_Personne();
			this->processusStaff = gcnew SG_Staff();
		} else if (this->tabControl1->SelectedTab->Name == tabPageGestionStock->Name) { // Gestion Stock
			this->processusStock = gcnew SG_Stock();
		}
		else if (this->tabControl1->SelectedTab->Name == tabPageGestionCommande->Name) { // Gestion Personnes
			this->processusOrders = gcnew SG_Orders();
			this->dsOrders = gcnew Data::DataSet();
			this->dsBill = gcnew Data::DataSet();
			
	}
	}
	// Gestion adresses
	private: System::Void Refresh_Adr() {
		this->Adr_Service->Select_Adress();
		this->dataGridView4->Refresh();

		this->dataGridView4->DataSource = this->Adr_Service->DS;
		this->dataGridView4->DataMember = "Adr";
	}
	private: System::Void buttonLoadAdr_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Refresh_Adr();
	}
	private: System::Void buttonRegisterAdr_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->mode == "nouv") {
			if (!(this->textBoxAdrNum->Text == "" || this->textBoxAdrName->Text == "" || this->textBoxAdrCitID->Text == "")) {
				this->Adr_Service->Add_Adress(this->textBoxAdrName->Text, this->textBoxAdrNum->Text, this->richTextBoxAdrDetails1->Text, Convert::ToInt32(this->textBoxAdrCitID->Text));
			}
			else {
				MessageBox::Show("Please enter valid entry");
			}
		}
		else
			if (this->mode == "sup") {
				this->Adr_Service->Remove_Adress(Convert::ToInt32(this->textBoxAdrID->Text));
			}
			else
				if (this->mode == "maj") {
					this->Adr_Service->Edit_Adress(Convert::ToInt32(this->textBoxAdrID->Text), this->textBoxAdrName->Text, this->textBoxAdrNum->Text, this->richTextBoxAdrDetails1->Text, Convert::ToInt32(this->textBoxAdrCitID->Text));
				}
		this->mode = "";
		this->labelAdrStatus->Text = "En attente...";
		this->Refresh_Adr();
	}
	private: System::Void buttonDelAdr_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "sup";
		this->labelAdrStatus->Text = "Enregistrer pour confirmer la suppression.";
	}
	private: System::Void buttonAddAdr_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "nouv";
		this->labelAdrStatus->Text = "Veuillez entrer les informations";
		this->textBoxAdrCitID->Text = "";
		this->textBoxAdrID->Text = "";
		this->comboBoxAdrCitName->Text = "";
		this->textBoxAdrCitZip->Text = "";
		this->textBoxAdrName->Text = "";
		this->textBoxAdrNum->Text = "";
		this->richTextBoxAdrDetails1->Text = "";
	}
	private: System::Void buttonEditAdr_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "maj";
		this->labelAdrStatus->Text = "Modifiez et enregistrez.";
	}
	private: System::Void dataGridView4_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		this->index = e->RowIndex;
		this->loadDataAdresse(this->index);
	}
	private: System::Void loadDataAdresse(int index) {
		this->textBoxAdrID->Text = this->dataGridView4->Rows[index]->Cells["ADR_ID"]->Value->ToString();
		this->textBoxAdrName->Text = this->dataGridView4->Rows[index]->Cells["ADR_Street_Name"]->Value->ToString();
		this->textBoxAdrNum->Text = this->dataGridView4->Rows[index]->Cells["ADR_Street_Num"]->Value->ToString();
		this->richTextBoxAdrDetails1->Text = this->dataGridView4->Rows[index]->Cells["ADR_Details"]->Value->ToString();
		this->textBoxAdrCitID->Text = this->dataGridView4->Rows[index]->Cells["CIT_ID"]->Value->ToString();
		this->comboBoxAdrCitName->Text = this->dataGridView4->Rows[index]->Cells["CIT_Name"]->Value->ToString();
		this->textBoxAdrCitZip->Text = this->dataGridView4->Rows[index]->Cells["CIT_ZIP_Code"]->Value->ToString();
		//this->textBox23->Text
	}
	private: System::Void buttonAdrNext_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->index < this->Adr_Service->DS->Tables[0]->Rows->Count - 1) {
			this->index++;
			this->loadDataAdresse(this->index);
		}
	}
	private: System::Void buttonAdrPrevious_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->index > 0) {
			this->index--;
			this->loadDataAdresse(this->index);
		}
	}
	private: System::Void comboBoxAdrCitName_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxAdrCitName->Text == "") return;
		this->Adr_Service->Fetch_City_Drop_Down(this->comboBoxAdrCitName->Text);
		
		this->comboBoxAdrCitName->Items->Clear();
		for (int i = 0; i < this->Adr_Service->DS->Tables[0]->Rows->Count; i++) {
			this->comboBoxAdrCitName->Items->Add(
				Convert::ToString(this->Adr_Service->DS->Tables[0]->Rows[i]->ItemArray[0]) + " - " +
				Convert::ToString(this->Adr_Service->DS->Tables[0]->Rows[i]->ItemArray[1]) + " - " +
				Convert::ToString(this->Adr_Service->DS->Tables[0]->Rows[i]->ItemArray[2])
			);
		}
		this->comboBoxAdrCitName->SelectionStart = this->comboBoxAdrCitName->Text->Length;
	}
	private: System::Void InterfaceManager_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void tabControl1_VisibleChanged(System::Object^ sender, System::EventArgs^ e) { // Initialiser les services et data set du premier onglet qui s'ouvre
		this->processusClient = gcnew SG_Client;
		this->processusPersonnes = gcnew SG_Personne;

		this->dsClient = gcnew Data::DataSet();
		this->dsLivraison = gcnew Data::DataSet();
		this->dsFacturation = gcnew Data::DataSet();
		this->dsPersonne = gcnew Data::DataSet();
	}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	loadDataOrders(0);
}

private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index > 0) {
		this->index--;
		this->loadDataOrders(this->index);
	}
	
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index < this->dsOrders->Tables["liste"]->Rows->Count - 1)
	{
		this->index++;
		this->loadDataOrders(this->index);
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox21->Clear();
	this->textBox20->Clear();
	this->textBox19->Text="Ne rien mettre ici.";
	this->textBox14->Clear();
	this->textBox17->Clear();
	this->textBox23->Clear();
	this->textBox9->Clear();
	this->textBox10->Text="Ne rien mettre ici.";
	this->label44->Text="Veuillez entrer les informations";
}
};
}
