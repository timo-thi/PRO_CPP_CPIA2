#pragma once

#include "CM_Connexion.h"
#include"CM_Personne.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;	


	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Data::DataSet^ DS;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(45, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(693, 437);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 530);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(201, 530);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 56);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(372, 530);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 56);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(533, 530);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 56);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1052, 612);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"Gobosoft";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->ColumnCount = 3;
		this->dataGridView1->Columns[0]->Name = "TEST";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->Refresh();
		CM_Personne personne;
		CM_Connexion co;

		this->DS = co.getRows(personne.Select_Personne(),"Person");
		this->dataGridView1->DataSource = this->DS;
		this->dataGridView1->DataMember = "Person";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->Refresh();
		CM_Personne personne;
		CM_Connexion co;

		this->DS = co.getRows(personne.Insert_Personne(),"Person");
		this->dataGridView1->DataSource = this->DS;
		this->dataGridView1->DataMember = "Person";
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->Refresh();
		CM_Personne personne;
		CM_Connexion co;

		this->DS = co.getRows(personne.Update_Personne(), "Person");
		this->dataGridView1->DataSource = this->DS;
		this->dataGridView1->DataMember = "Person";
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->Refresh();
		CM_Personne personne;
		CM_Connexion co;

		this->DS = co.getRows(personne.Delete_Personne(), "Person");
		this->dataGridView1->DataSource = this->DS;
		this->dataGridView1->DataMember = "Person";
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
};
}

