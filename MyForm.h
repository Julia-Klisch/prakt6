#pragma once

namespace Prakt6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ПІП";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Курс";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Група";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(204, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Пропуски з поважної причини";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(220, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Пропуски без поважної причини";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(221, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(221, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(221, 135);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(240, 194);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(240, 244);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 9;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(26, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(401, 323);
			this->panel1->TabIndex = 10;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(472, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(441, 150);
			this->dataGridView1->TabIndex = 11;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(472, 223);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(441, 150);
			this->dataGridView2->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 53);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Додати студента";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(509, 446);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 54);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Перевірити пропуски";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 566);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		ref struct Student
		{
			String^ FIO;
			String^ Curs;
			String^ Gruppa;
			int validPass;      
			int invalidPass;    
		};
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Створення стовпців для DataGridView1 
		dataGridView1->Columns->Add("FIO", "ПІБ");
		dataGridView1->Columns->Add("Curs", "Курс");
		dataGridView1->Columns->Add("Gruppa", "Група");
		dataGridView1->Columns->Add("ValidPass", "Пропуски з поважної причини");
		dataGridView1->Columns->Add("InvalidPass", "Пропуски без поважної причини");
		// Створення стовпців для DataGridView2 
		dataGridView2->Columns->Add("FIO", "ПІБ");
		dataGridView2->Columns->Add("Curs", "Курс");
		dataGridView2->Columns->Add("Gruppa", "Група");
		dataGridView2->Columns->Add("ValidPass", "Пропуски з поважної причини");
		dataGridView2->Columns->Add("InvalidPass", "Пропуски без поважної причини");
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Створення нового студента 
	Student^ stud = gcnew Student();

	stud->FIO = textBox1->Text;
	stud->Curs = textBox2->Text;
	stud->Gruppa = textBox3->Text;
	stud->validPass = Convert::ToInt32(textBox4->Text);
	stud->invalidPass = Convert::ToInt32(textBox5->Text);

	dataGridView1->Rows->Add(stud->FIO, stud->Curs, stud->Gruppa, stud->validPass, stud->invalidPass);

	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->Rows->Clear();
	int k = 0;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		if (dataGridView1->Rows[i]->Cells["InvalidPass"]->Value != nullptr) {
			String^ FIO = dataGridView1->Rows[i]->Cells["FIO"]->Value->ToString();
			String^ Curs = dataGridView1->Rows[i]->Cells["Curs"]->Value->ToString();
			String^ Gruppa = dataGridView1->Rows[i]->Cells["Gruppa"]->Value->ToString();
			int invalidPass = Convert::ToInt32(dataGridView1->Rows[i]->Cells["InvalidPass"]->Value);
			if (invalidPass > 10) {

				dataGridView2->Rows->Add(FIO, Curs, Gruppa, invalidPass);
				k++;
			}
		}
	}
	MessageBox::Show(Convert::ToString(k));
}
};
}
