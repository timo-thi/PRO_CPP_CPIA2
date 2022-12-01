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


	private: CM_Personne personne;
	private: CM_Connexion co;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(34, 54);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(520, 355);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(34, 431);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(151, 431);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(279, 431);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 46);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(400, 431);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 46);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(581, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 15);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(581, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Prenom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(581, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Nom";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(559, 200);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(559, 226);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 497);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Gobosoft";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->Refresh();
		this->DS = co.getRows(personne.Select_Personne(),"Result");
		this->dataGridView1->DataSource = this->DS;
		this->dataGridView1->DataMember = "Result";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->personne.Set_Prenom(textBox1->Text);
		this->personne.Set_Nom(textBox2->Text);
		this->DS = co.getRows(personne.Insert_Personne(),"Result");
		button1->PerformClick();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text !="") this->personne.Set_Prenom(textBox1->Text);
		if (textBox2->Text != "") this->personne.Set_Nom(textBox2->Text);
		this->DS = co.getRows(personne.Update_Personne(), "Result");
		button1->PerformClick();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		this->DS = co.getRows(personne.Delete_Personne(), "Result");
		button1->PerformClick();
	}

	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		this->label1->Text = this->dataGridView1->Rows[e->RowIndex]->Cells["ID"]->Value->ToString();
		if (this->dataGridView1->Rows[e->RowIndex]->Cells["ID"]->Value->ToString() != "") this->personne.Set_ID(Convert::ToDouble(this->dataGridView1->Rows[e->RowIndex]->Cells["ID"]->Value));
		
		this->label2->Text = this->dataGridView1->Rows[e->RowIndex]->Cells["Prenom"]->Value->ToString();
		this->personne.Set_Prenom(this->dataGridView1->Rows[e->RowIndex]->Cells["Prenom"]->Value->ToString());
		
		this->label3->Text = this->dataGridView1->Rows[e->RowIndex]->Cells["Nom"]->Value->ToString();
		this->personne.Set_Prenom(this->dataGridView1->Rows[e->RowIndex]->Cells["Nom"]->Value->ToString());
	}
};
}

