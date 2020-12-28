#pragma once

//Разработать топонимический словарь.

namespace WindowsForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		SortedDictionary <String^, String^>  ^ dictionary;	
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;






			 Object ^P;

	public:
		MyForm(void)
		{
			InitializeComponent();
			dictionary = gcnew SortedDictionary<String^, String^>;
			P = gcnew Object;
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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  valueTextBox;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  keyTextBox;
	private: System::Windows::Forms::TextBox^  searchBox;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->valueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->keyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchBox = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 25);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(519, 512);
			this->dataGridView1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(654, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(103, 81);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Файл";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Загрузить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(534, 350);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(223, 107);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Изменение";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Значение";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Слово";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(78, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 22);
			this->textBox1->TabIndex = 7;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(5, 74);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(212, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Изменить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(78, 18);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 22);
			this->textBox2->TabIndex = 6;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(111, 48);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Удалить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->valueTextBox);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->keyTextBox);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(534, 238);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(223, 106);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Добавление";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Значение";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Слово";
			// 
			// valueTextBox
			// 
			this->valueTextBox->Location = System::Drawing::Point(78, 46);
			this->valueTextBox->Name = L"valueTextBox";
			this->valueTextBox->Size = System::Drawing::Size(139, 22);
			this->valueTextBox->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(5, 74);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(212, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// keyTextBox
			// 
			this->keyTextBox->Location = System::Drawing::Point(78, 18);
			this->keyTextBox->Name = L"keyTextBox";
			this->keyTextBox->Size = System::Drawing::Size(139, 22);
			this->keyTextBox->TabIndex = 6;
			// 
			// searchBox
			// 
			this->searchBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->searchBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchBox->Location = System::Drawing::Point(5, 20);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(212, 22);
			this->searchBox->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(4, 48);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Поиск";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(3, 24);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 21);
			this->radioButton1->TabIndex = 16;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Автор";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(4, 52);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(106, 21);
			this->radioButton2->TabIndex = 17;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Пользователь";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(534, 25);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(121, 81);
			this->groupBox4->TabIndex = 18;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Доступ";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button3);
			this->groupBox5->Controls->Add(this->button5);
			this->groupBox5->Controls->Add(this->searchBox);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->Location = System::Drawing::Point(534, 154);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2);
			this->groupBox5->Size = System::Drawing::Size(223, 79);
			this->groupBox5->TabIndex = 19;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Поиск по слову";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"Слово";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column1->Width = 63;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"Синонимы";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 85;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 553);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	void dataDraw() {
		dataGridView1->Rows->Clear();
		for each(KeyValuePair<String^, String^> ^kvp in dictionary) { dataGridView1->Rows->Add(kvp->Key->ToLower(), kvp->Value->ToLower()); }
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		array<String^> ^listOfWords = File::ReadAllText(Directory::GetCurrentDirectory() + "\\Dictionary.txt")->Split('\r');
		dictionary = gcnew SortedDictionary<String^, String^>;
		for (int i = 0; i < listOfWords->Length - 1; i++) { dictionary->Add(listOfWords[i]->Split('#')[0]->Replace("\n", ""), listOfWords[i]->Split('#')[1]); }
		dataDraw();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ toWrite;
		for each (KeyValuePair<String^, String^> ^ kvp in dictionary) { toWrite += kvp->Key->ToString() + "#" + kvp->Value->ToString() + "\r\n"; }
		File::WriteAllText(Directory::GetCurrentDirectory() + "\\Dictionary.txt", toWrite);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ClearSelection();
		for (int i = 0; i < dictionary->Count; i++)
			if (dataGridView1[0, i]->Value->ToString() == searchBox->Text->ToLower()) {
				dataGridView1->Rows[i]->Selected = true;
			}
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		dictionary->Remove(this->searchBox->Text->ToLower());
		dataDraw();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		dictionary->Add(keyTextBox->Text->ToLower(), valueTextBox->Text->ToLower());
		dataDraw();
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		dictionary[textBox2->Text] = textBox1->Text;
		dataDraw();
	}

	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		groupBox3->Hide();
		groupBox2->Hide();
		groupBox5->Show();
		button5->Hide();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		groupBox3->Hide();
		groupBox2->Hide();
		groupBox5->Hide();
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		groupBox3->Show();
		groupBox2->Show();
		groupBox5->Show();
		button5->Show();
	}
};
}
