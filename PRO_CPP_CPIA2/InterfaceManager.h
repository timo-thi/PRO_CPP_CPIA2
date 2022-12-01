#pragma once


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
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::ListBox^ Liste;
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
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
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
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->Liste = (gcnew System::Windows::Forms::ListBox());
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
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Location = System::Drawing::Point(12, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(952, 426);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(944, 400);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Gestion client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(24, 260);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(113, 23);
			this->button11->TabIndex = 44;
			this->button11->Text = L"<";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(177, 260);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(113, 23);
			this->button12->TabIndex = 43;
			this->button12->Text = L">";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(355, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(569, 310);
			this->dataGridView1->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(175, 331);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 36);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Enregistrer";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(22, 331);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 36);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 36);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 36);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(177, 219);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(115, 20);
			this->textBox8->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(174, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Adresse de facturation ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(177, 159);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(115, 20);
			this->textBox7->TabIndex = 13;
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
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(177, 101);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(115, 20);
			this->textBox6->TabIndex = 11;
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
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(177, 49);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(115, 20);
			this->textBox5->TabIndex = 9;
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(22, 219);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(115, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"mail";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(22, 159);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(115, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Prenom client";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(22, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(115, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom client";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Client";
			this->label1->Click += gcnew System::EventHandler(this, &InterfaceManager::label1_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox22);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->textBox23);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->button13);
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->button15);
			this->tabPage2->Controls->Add(this->button16);
			this->tabPage2->Controls->Add(this->button17);
			this->tabPage2->Controls->Add(this->button18);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->label13);
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
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(944, 400);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Gestion commande";
			this->tabPage2->UseVisualStyleBackColor = true;
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
			this->label24->Size = System::Drawing::Size(88, 13);
			this->label24->TabIndex = 70;
			this->label24->Text = L"Prix par paiement";
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
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(178, 291);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(113, 23);
			this->button14->TabIndex = 66;
			this->button14->Text = L">";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(356, 28);
			this->dataGridView3->Name = L"dataGridView3";
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
			this->label22->Size = System::Drawing::Size(57, 13);
			this->label22->TabIndex = 47;
			this->label22->Text = L"Nom client";
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
			// tabPage3
			// 
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
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(944, 400);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Gestion stock";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &InterfaceManager::tabPage3_Click);
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
			this->dataGridView2->Size = System::Drawing::Size(569, 310);
			this->dataGridView2->TabIndex = 40;
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
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(178, 287);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(115, 36);
			this->button7->TabIndex = 37;
			this->button7->Text = L"Supprimer";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(23, 287);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(115, 36);
			this->button8->TabIndex = 36;
			this->button8->Text = L"Ajouter";
			this->button8->UseVisualStyleBackColor = true;
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
			this->label12->Size = System::Drawing::Size(111, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"R�approvisionnement";
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
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl2);
			this->tabPage4->Controls->Add(this->label32);
			this->tabPage4->Controls->Add(this->textBox25);
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->label30);
			this->tabPage4->Controls->Add(this->listBox2);
			this->tabPage4->Controls->Add(this->label29);
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Controls->Add(this->label28);
			this->tabPage4->Controls->Add(this->Liste);
			this->tabPage4->Controls->Add(this->textBox24);
			this->tabPage4->Controls->Add(this->label27);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(944, 400);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Gestion stat";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Location = System::Drawing::Point(556, 23);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(372, 349);
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
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(364, 323);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Valeur commerciale defaut";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(263, 260);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 23);
			this->button29->TabIndex = 65;
			this->button29->Text = L"2%";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(148, 260);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 23);
			this->button30->TabIndex = 64;
			this->button30->Text = L"3%";
			this->button30->UseVisualStyleBackColor = true;
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
			// button31
			// 
			this->button31->Location = System::Drawing::Point(24, 260);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(75, 23);
			this->button31->TabIndex = 62;
			this->button31->Text = L"5%";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(263, 214);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 23);
			this->button26->TabIndex = 61;
			this->button26->Text = L"2%";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(148, 214);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 23);
			this->button27->TabIndex = 60;
			this->button27->Text = L"3%";
			this->button27->UseVisualStyleBackColor = true;
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
			// button28
			// 
			this->button28->Location = System::Drawing::Point(24, 214);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 23);
			this->button28->TabIndex = 58;
			this->button28->Text = L"6%";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(263, 166);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 57;
			this->button23->Text = L"5%";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(148, 166);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 23);
			this->button24->TabIndex = 56;
			this->button24->Text = L"10%";
			this->button24->UseVisualStyleBackColor = true;
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
			// button25
			// 
			this->button25->Location = System::Drawing::Point(24, 166);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 23);
			this->button25->TabIndex = 54;
			this->button25->Text = L"15%";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(263, 122);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 53;
			this->button22->Text = L"5,5%";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(148, 122);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 52;
			this->button21->Text = L"10%";
			this->button21->UseVisualStyleBackColor = true;
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
			// button20
			// 
			this->button20->Location = System::Drawing::Point(24, 122);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 50;
			this->button20->Text = L"20%";
			this->button20->UseVisualStyleBackColor = true;
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
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(134, 57);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(115, 20);
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
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(364, 323);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Valeur commerciale parametrable";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(137, 269);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
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
			this->label35->Location = System::Drawing::Point(193, 51);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(149, 18);
			this->label35->TabIndex = 43;
			this->label35->Text = L"Remise commerciale";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(205, 134);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(115, 20);
			this->textBox30->TabIndex = 48;
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
			this->label37->Click += gcnew System::EventHandler(this, &InterfaceManager::label37_Click);
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(120, 217);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(115, 20);
			this->textBox26->TabIndex = 40;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(30, 134);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(115, 20);
			this->textBox29->TabIndex = 46;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(18, 51);
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
			this->label36->Location = System::Drawing::Point(72, 113);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(35, 18);
			this->label36->TabIndex = 45;
			this->label36->Text = L"TVA";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(30, 78);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(115, 20);
			this->textBox27->TabIndex = 42;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(205, 78);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(115, 20);
			this->textBox28->TabIndex = 44;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(281, 14);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(173, 18);
			this->label32->TabIndex = 38;
			this->label32->Text = L"Valeur  d\'achat du stock :";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(290, 76);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(115, 20);
			this->textBox25->TabIndex = 37;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(287, 49);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(167, 18);
			this->label31->TabIndex = 36;
			this->label31->Text = L"Montant total d\'un client:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(287, 123);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(168, 15);
			this->label30->TabIndex = 15;
			this->label30->Text = L"10 articles plus moins vendus";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(290, 144);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(155, 69);
			this->listBox2->TabIndex = 35;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(17, 123);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(150, 15);
			this->label29->TabIndex = 34;
			this->label29->Text = L"10 articles les plus vendus";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(20, 144);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(154, 69);
			this->listBox1->TabIndex = 15;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(148, 250);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(246, 15);
			this->label28->TabIndex = 32;
			this->label28->Text = L"Produits sous seuil de r�approvisionnement";
			// 
			// Liste
			// 
			this->Liste->FormattingEnabled = true;
			this->Liste->Location = System::Drawing::Point(151, 271);
			this->Liste->Name = L"Liste";
			this->Liste->Size = System::Drawing::Size(154, 82);
			this->Liste->TabIndex = 31;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(19, 76);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(115, 20);
			this->textBox24->TabIndex = 30;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(16, 49);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(167, 18);
			this->label27->TabIndex = 1;
			this->label27->Text = L"Chiffre d\'affaire du mois:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(16, 14);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(111, 18);
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
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(944, 400);
			this->tabPage7->TabIndex = 4;
			this->tabPage7->Text = L"Gestion personnel";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(25, 266);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(113, 23);
			this->button32->TabIndex = 67;
			this->button32->Text = L"<";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(178, 266);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(113, 23);
			this->button33->TabIndex = 66;
			this->button33->Text = L">";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(356, 36);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(569, 310);
			this->dataGridView4->TabIndex = 65;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(176, 337);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(115, 36);
			this->button34->TabIndex = 63;
			this->button34->Text = L"Enregistrer";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(23, 337);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(115, 36);
			this->button35->TabIndex = 64;
			this->button35->Text = L"Modifier";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(176, 295);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(115, 36);
			this->button36->TabIndex = 62;
			this->button36->Text = L"Supprimer";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(23, 295);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(115, 36);
			this->button37->TabIndex = 61;
			this->button37->Text = L"Ajouter";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(178, 165);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(115, 20);
			this->textBox33->TabIndex = 58;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(175, 137);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(48, 13);
			this->label44->TabIndex = 57;
			this->label44->Text = L"Adresse ";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(178, 107);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(115, 20);
			this->textBox34->TabIndex = 56;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(175, 79);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(106, 13);
			this->label45->TabIndex = 55;
			this->label45->Text = L"Date embauchement";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(178, 55);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(115, 20);
			this->textBox35->TabIndex = 54;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(175, 27);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(75, 13);
			this->label46->TabIndex = 53;
			this->label46->Text = L"Nom superieur";
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
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(23, 165);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(115, 20);
			this->textBox37->TabIndex = 50;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(20, 137);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(92, 13);
			this->label48->TabIndex = 49;
			this->label48->Text = L"Prenom personnel";
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(23, 107);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(115, 20);
			this->textBox38->TabIndex = 48;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(20, 79);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(78, 13);
			this->label49->TabIndex = 47;
			this->label49->Text = L"Nom personnel";
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(23, 55);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(115, 20);
			this->textBox39->TabIndex = 46;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(20, 27);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(68, 13);
			this->label50->TabIndex = 45;
			this->label50->Text = L"ID Personnel";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(175, 197);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(24, 13);
			this->label43->TabIndex = 59;
			this->label43->Text = L"role";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(178, 225);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(115, 20);
			this->textBox32->TabIndex = 60;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(23, 225);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(115, 20);
			this->textBox36->TabIndex = 52;
			// 
			// InterfaceManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(976, 451);
			this->Controls->Add(this->tabControl1);
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
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
	};
}

