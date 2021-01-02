#pragma once
#include <string>
#include "Classes.h"
#include <ctime>

namespace Practive5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Label^ label14;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox12;

		   StreamReader^ SR;
		   StreamWriter^ SW;
		   array <String^>^ prodType;
		   array <String^>^ prodCat;
		   System::Collections::Generic::List <Loan^>^ LoanList;
		   System::Collections::Generic::Queue <Loan^>^ LoanQueue;
		   System::Collections::Generic::List <Product^>^ ProductList;


	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
















		   Loan^ loan;
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->LoanList = gcnew System::Collections::Generic::List <Loan^>();
			this->LoanQueue = gcnew System::Collections::Generic::Queue <Loan^>();
			this->ProductList = gcnew System::Collections::Generic::List <Product^>();
			this->prodType = gcnew array<String^>(1);
			this->prodCat = gcnew array<String^>(3);
			this->prodCat[0] = "Золото";
			this->prodCat[1] = "Серебро";
			this->prodCat[2] = "Часы";

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;



	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
















	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::ComponentModel::IContainer^ components;











	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(9, 120);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(235, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(19, 29);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(129, 20);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Администартор";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(159, 29);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 20);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Клиент";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(279, 55);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(685, 703);
			this->dataGridView1->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(235, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(9, 160);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(235, 21);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Фамилия И. О.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Категория товара";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Тип товара";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 340);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(235, 20);
			this->textBox2->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 455);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 23);
			this->button1->TabIndex = 10;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 162);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(255, 596);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление заказа";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 484);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 23);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Отправить на продажу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(9, 533);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(235, 20);
			this->textBox11->TabIndex = 30;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 559);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 23);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Продлить на указанный срок";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 401);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Дата выплаты займа";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(9, 417);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(235, 20);
			this->textBox5->TabIndex = 15;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 184);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(83, 13);
			this->label18->TabIndex = 21;
			this->label18->Text = L"Наименование";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(9, 200);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(235, 20);
			this->textBox14->TabIndex = 20;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 265);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(133, 13);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Вес изделия (в граммах)";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(9, 281);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(235, 20);
			this->textBox12->TabIndex = 18;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 65);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(93, 13);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Номер телефона";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(9, 81);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(235, 20);
			this->textBox6->TabIndex = 16;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 378);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(235, 20);
			this->textBox4->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(6, 363);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(203, 35);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Сумма выплаты клиента с процентом";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(240, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Срок (Напишите 0 если хотите продать товар)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 242);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(235, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 324);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Сумма выплаты клиенту";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(12, 74);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(139, 20);
			this->checkBox3->TabIndex = 32;
			this->checkBox3->Text = L"Добавить заявку";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(12, 126);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(209, 20);
			this->checkBox2->TabIndex = 31;
			this->checkBox2->Text = L"Закрыть заявку из очереди";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(12, 100);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(141, 20);
			this->checkBox1->TabIndex = 30;
			this->checkBox1->Text = L"Изменить заявку";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(279, 29);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(167, 20);
			this->checkBox4->TabIndex = 33;
			this->checkBox4->Text = L"Просмотр должников";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(452, 29);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(150, 20);
			this->checkBox5->TabIndex = 34;
			this->checkBox5->Text = L"Просмотр товаров";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 786);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: bool isEmpty(TextBox^ TB) {
		return TB->Text == "";
	}

	private: bool isEmpty(ComboBox^ CB) {
		return CB->SelectedIndex == -1;
	}

	private: void ClearAll() {
		this->textBox1->Clear();
		this->textBox6->Clear();
		this->textBox14->Clear();
		this->textBox3->Clear();
		this->textBox12->Clear();
		this->textBox2->Clear();
		this->textBox4->Clear();
		this->comboBox1->SelectedIndex = -1;
		this->comboBox2->SelectedIndex = -1;
	}

	private: void PeekFromQueue() {
		try {
			Loan^ el = this->LoanQueue->Peek();
			this->textBox1->Text = el->customerName;
			this->textBox6->Text = el->customerNumber;
			this->textBox14->Text = el->product->productName;
			this->comboBox1->Text = el->product->productCategory;
			this->comboBox2->Text = el->product->productType;
			this->textBox2->Text = Convert::ToString(el->product->price);
			this->textBox4->Text = Convert::ToString(el->loan);
			this->textBox3->Text = Convert::ToString(el->days);
			this->textBox12->Text = Convert::ToString(el->product->weight);
		}
		catch (...) {

		}
		
	}

	private: void LookLoan() {
		dataGridView1->RowCount = 1;
		for each (Loan ^ el in this->LoanList) {
			DateTime dt = el->date.AddDays(el->days);
			dataGridView1->Rows->Add(el->customerName, el->product->productCategory, el->product->productType, el->product->productName, dt.ToString("dd.MM.yyyy"), el->loan);
		
		}
	}

	private: void LookProduct() {
		dataGridView1->RowCount = 1;
		for each (Product ^ el in ProductList) {
			dataGridView1->Rows->Add(el->productCategory, el->productType, el->productName, el->price);
		}
	}
	
	

	private: void Change() {
		try
		{
			DateTime dt = DateTime::Now;
			if (this->comboBox1->SelectedIndex == 2) {
				if (!isEmpty(this->textBox1) && !isEmpty(this->textBox6) && !isEmpty(this->comboBox2) && !isEmpty(this->textBox14) && !isEmpty(this->textBox3)) {
					Product^ product = gcnew Product(this->comboBox1->Text, this->comboBox2->Text, this->textBox14->Text);
					product->countprice(this->comboBox1->SelectedIndex, this->comboBox2->SelectedIndex);
					loan = gcnew Loan(this->textBox1->Text, this->textBox6->Text, product, dt, Convert::ToInt16(this->textBox3->Text));
					this->textBox2->Text = Convert::ToString(this->loan->product->price);
					this->textBox4->Text = Convert::ToString(this->loan->loan);
					dt = this->loan->date.AddDays(Convert::ToInt16(this->textBox3->Text));
					this->textBox5->Text = dt.ToString("dd.MM.yyyy");
				}
			}
			else
				if (this->comboBox1->SelectedIndex != -1) {
					if (!isEmpty(this->textBox1) && !isEmpty(this->textBox6) && !isEmpty(this->comboBox2) && !isEmpty(this->textBox14) && !isEmpty(this->textBox12) && !isEmpty(this->textBox3)) {
						Product^ product = gcnew Product(this->comboBox1->Text, this->comboBox2->Text, this->textBox14->Text, Convert::ToDouble(this->textBox12->Text));
						product->countprice(this->comboBox1->SelectedIndex, this->comboBox2->SelectedIndex);
						loan = gcnew Loan(this->textBox1->Text, this->textBox6->Text, product, dt, Convert::ToInt16(this->textBox3->Text));
						this->textBox2->Text = Convert::ToString(this->loan->product->price);
						this->textBox4->Text = Convert::ToString(this->loan->loan);
						dt = this->loan->date.AddDays(Convert::ToInt16(this->textBox3->Text));
						this->textBox5->Text = dt.ToString("dd.MM.yyyy");
					}
				}
		}
		catch (...)
		{

		}
		
	}
	private: void clearDGV() {
		this->dataGridView1->Rows->Clear();  // удаление всех строк
		int count = this->dataGridView1->Columns->Count;
		for (int i = 0; i < count; i++) { this->dataGridView1->Columns->RemoveAt(0); } //удаление всех столбцов
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		clearDGV();
		for (int i = 0; i < 6; i++) {
			array <String^>^ columnNames = { "Ф.И.О. клиента", "Категория товара", "Тип", "Наименование", "Дата выплаты займа", "Стоимость", "Итоговая стоимость" };
			this->dataGridView1->Columns->Add("Column" + i, columnNames[i]);
		}
		this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
		this->dataGridView1->AutoResizeColumns();
		this->checkBox3->Show();
		this->checkBox3->Checked = true;
		this->checkBox1->Show();
		this->checkBox2->Show();
		this->checkBox4->Show();
		this->checkBox5->Show();
		this->checkBox4->Checked = true;
		LookLoan();
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		clearDGV();
		for (int i = 0; i < 4; i++) {
			array <String^>^ columnNames = { "Категория товара", "Тип", "Наименование", "Стоимость" };
			this->dataGridView1->Columns->Add("Column" + i, columnNames[i]);
		}
		this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
		this->checkBox3->Checked = true;
		this->checkBox3->Hide();
		this->checkBox1->Hide();
		this->checkBox2->Hide();
		this->checkBox4->Hide();
		this->checkBox5->Hide();
		this->checkBox5->Checked = true;
		this->groupBox1->Text = "Подать заявку";
		this->button1->Text = "Подать заявку";
		LookProduct();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ToolTip^ t = gcnew ToolTip();
		t->SetToolTip(this->textBox3, "Если товар не будет выкупаться поставьте 0");
		String^ FL = gcnew String(Directory::GetCurrentDirectory() + "\\BaseCustomer.txt");
		this->SR = gcnew StreamReader(FL);
		readFromFile(this->SR, this->LoanList, this->LoanQueue);
		FL = gcnew String(Directory::GetCurrentDirectory() + "\\BaseProduct.txt");
		this->SR = gcnew StreamReader(FL);
		readFromFile(this->SR, this->ProductList);
		this->radioButton2->Checked = true;
		this->comboBox1->Items->AddRange(this->prodCat);
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked) {
			PeekFromQueue();
			this->comboBox1->Enabled = true;
			this->comboBox2->Enabled = true;
			this->textBox1->ReadOnly = false;
			this->textBox6->ReadOnly = false;
			this->textBox14->ReadOnly = false;
			this->textBox12->ReadOnly = false;
			this->textBox3->ReadOnly = true;
			this->checkBox2->Checked = false;
			this->checkBox3->Checked = false;
			this->groupBox1->Enabled = true;
			this->button1->Text = "Внести изменения";
			this->groupBox1->Text = "Изменение заявки";
			this->textBox11->Show();
			this->button3->Show();
			this->button2->Hide();
		}
		else
			if (!this->checkBox2->Checked && !this->checkBox3->Checked)
				this->groupBox1->Enabled = false;
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox2->Checked) {
			PeekFromQueue();
			this->comboBox1->Enabled = false;
			this->comboBox2->Enabled = false;
			this->textBox1->ReadOnly = true;
			this->textBox6->ReadOnly = true;
			this->textBox14->ReadOnly = true;
			this->textBox12->ReadOnly = true;
			this->textBox3->ReadOnly = true;
			this->checkBox1->Checked = false;
			this->checkBox3->Checked = false;
			this->groupBox1->Enabled = true;
			this->textBox11->Show();
			this->button3->Show();
			this->groupBox1->Text = "Закрытие заявки";
			this->button1->Text = "Закрыть заявку";
			this->button2->Show();
		}
		else
			if (!this->checkBox1->Checked && !this->checkBox3->Checked)
				this->groupBox1->Enabled = false;
	}

	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox3->Checked) {
			ClearAll();
			this->comboBox1->Enabled = true;
			this->comboBox2->Enabled = true;
			this->textBox1->ReadOnly = false;
			this->textBox6->ReadOnly = false;
			this->textBox14->ReadOnly = false;
			this->textBox12->ReadOnly = false;
			this->textBox3->ReadOnly = false;
			this->checkBox1->Checked = false;
			this->checkBox2->Checked = false;
			this->groupBox1->Enabled = true;
			this->textBox11->Hide();
			this->button3->Hide();
			this->groupBox1->Text = "Добавление заявки";
			this->button1->Text = "Добавить заявку";
			this->button2->Hide();
		}
		else
			if (!this->checkBox1->Checked && !this->checkBox2->Checked)
				this->groupBox1->Enabled = false;
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Change();
		switch (this->comboBox1->SelectedIndex) {
		case 0: {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"Проба 583/585", L"Проба 375", L"Проба 500", L"Проба 750/875", L"Проба 900/916", L"Проба 958/999" });
			this->comboBox2->SelectedIndex = 0;
			this->label14->Show();
			this->textBox12->Show();
			break;
		}
		case 1: {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Проба 875/925/960" });
			this->comboBox2->SelectedIndex = 0;
			this->label14->Show();
			this->textBox12->Show();
			break;
		}
		case 2: {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Arnold & Son", L"Breguet", L"Cartier", L"DeWitt" });
			this->comboBox2->SelectedIndex = 0;
			this->label14->Hide();
			this->textBox12->Hide();
			break;
		}
		default:
			break;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Add
		if (!isEmpty(this->textBox1) && !isEmpty(this->textBox6) && !isEmpty(this->textBox14) &&
			!isEmpty(this->textBox3) && !isEmpty(this->comboBox1) &&
			!isEmpty(this->comboBox2)) {
			if (this->checkBox3->Checked) {
				if (this->textBox3->Text == "0")
					this->ProductList->Add(this->loan->product);
				else {
					this->LoanList->Add(this->loan);
					this->LoanList->Sort(gcnew System::Comparison <Loan^>(CompareByDate));
					this->LoanQueue->Clear();
					for each (Loan ^ el in this->LoanList) {
						this->LoanQueue->Enqueue(el);
					}
					if (this->radioButton1->Checked)
						LookLoan();
					else
						MessageBox::Show(String::Format("Ваша заявка подана, стоимость выкупа товара: {0}\nДата выплаты: {1}", this->loan->loan, this->loan->date), "Заявка принята.", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
		}
		else
			MessageBox::Show("Не все поля заполнены", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
		//Close
		if (this->checkBox2->Checked) {
			try
			{
				this->LoanList->Remove(this->LoanQueue->Dequeue());
				this->LoanQueue->Clear();
				for each (Loan ^ el in this->LoanList) {
					this->LoanQueue->Enqueue(el);
				}
				LookLoan();
				PeekFromQueue();
			}
			catch (...)
			{

			}
			
		}
		//Edit
		if (this->checkBox1->Checked) {
			try
			{
				Change();
				this->loan->days = this->LoanList[0]->days;
				this->LoanList[0] = this->loan;
				this->LoanQueue->Clear();
				for each (Loan ^ el in this->LoanList) {
					this->LoanQueue->Enqueue(el);
				}
				LookLoan();
				PeekFromQueue();
			}
			catch (...)
			{

			}
			
		}

	}

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Change();
	}

	private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Change();
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Change();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->LoanList[0]->date = this->LoanList[0]->date.AddDays(Convert::ToInt16(this->textBox11->Text));
	this->LoanList[0]->days += Convert::ToInt16(this->textBox11->Text);
	this->LoanList[0]->loan = LoanList[0]->loanExtension(Convert::ToInt16(this->textBox11->Text));
	this->LoanList->Sort(gcnew System::Comparison <Loan^>(CompareByDate));
	this->LoanQueue->Clear();
	for each (Loan ^ el in this->LoanList) {
		this->LoanQueue->Enqueue(el);
	}
	if (this->radioButton1->Checked)
		LookLoan();
	PeekFromQueue();
	this->textBox11->Clear();
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	Change();
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	Change();
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	Change();
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	String^ FL = gcnew String(Directory::GetCurrentDirectory() + "\\BaseCustomer.txt");
	this->SW = gcnew StreamWriter(FL);
	writeToFile(this->SW, this->LoanList);
	FL = gcnew String(Directory::GetCurrentDirectory() + "\\BaseProduct.txt");
	this->SW = gcnew StreamWriter(FL);
	writeToFile(this->SW, this->ProductList);
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox4->Checked) {
		this->checkBox5->Checked = false;
		clearDGV();
		for (int i = 0; i < 6; i++) {
			array <String^>^ columnNames = { "Ф.И.О. клиента", "Категория товара", "Тип", "Наименование", "Дата выплаты займа", "Стоимость", "Итоговая стоимость" };
			this->dataGridView1->Columns->Add("Column" + i, columnNames[i]);
		}
		LookLoan();
	}
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox5->Checked) {
		this->checkBox4->Checked = false;
		clearDGV();
		for (int i = 0; i < 4; i++) {
			array <String^>^ columnNames = { "Категория товара", "Тип", "Наименование", "Стоимость" };
			this->dataGridView1->Columns->Add("Column" + i, columnNames[i]);
		}
		LookProduct();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		this->LoanList->Remove(this->LoanQueue->Dequeue());
		this->LoanQueue->Clear();
		for each (Loan ^ el in this->LoanList) { this->LoanQueue->Enqueue(el); }
		this->ProductList->Add(this->loan->product);
		LookLoan();
		PeekFromQueue();
	}
	catch (...)
	{

	}
	
}
};
}
