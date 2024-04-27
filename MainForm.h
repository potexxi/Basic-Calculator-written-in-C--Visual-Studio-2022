#pragma once

namespace CalculatorApp2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textbox1;
	protected:

	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	protected:



	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn9;













	private: System::Windows::Forms::Button^ btnclear;

	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btnminus;

	private: System::Windows::Forms::Button^ btn1;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btnplus;

	private: System::Windows::Forms::Button^ btn0;

	private: System::Windows::Forms::Button^ btndot;

	private: System::Windows::Forms::Button^ btnequal;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnminus = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnplus = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btndot = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textbox1
			// 
			this->textbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox1->Location = System::Drawing::Point(12, 12);
			this->textbox1->Multiline = true;
			this->textbox1->Name = L"textbox1";
			this->textbox1->ReadOnly = true;
			this->textbox1->Size = System::Drawing::Size(490, 100);
			this->textbox1->TabIndex = 0;
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn7.BackgroundImage")));
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 118);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(113, 94);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MainForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn8.BackgroundImage")));
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(131, 118);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(120, 94);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MainForm::btn8_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn5.BackgroundImage")));
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(131, 218);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(120, 94);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MainForm::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn4.BackgroundImage")));
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 218);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(113, 94);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MainForm::btn4_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn9.BackgroundImage")));
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(257, 118);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(120, 94);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MainForm::btn9_Click);
			// 
			// btnclear
			// 
			this->btnclear->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnclear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnclear.BackgroundImage")));
			this->btnclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclear->Location = System::Drawing::Point(383, 118);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(120, 94);
			this->btnclear->TabIndex = 4;
			this->btnclear->Text = L"Clear";
			this->btnclear->UseVisualStyleBackColor = false;
			this->btnclear->Click += gcnew System::EventHandler(this, &MainForm::btnclear_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn6.BackgroundImage")));
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(257, 218);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(120, 94);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MainForm::btn6_Click);
			// 
			// btnminus
			// 
			this->btnminus->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnminus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnminus.BackgroundImage")));
			this->btnminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnminus->Location = System::Drawing::Point(383, 218);
			this->btnminus->Name = L"btnminus";
			this->btnminus->Size = System::Drawing::Size(120, 94);
			this->btnminus->TabIndex = 8;
			this->btnminus->Text = L"-";
			this->btnminus->UseVisualStyleBackColor = false;
			this->btnminus->Click += gcnew System::EventHandler(this, &MainForm::btnminus_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1.BackgroundImage")));
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 318);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(113, 94);
			this->btn1->TabIndex = 9;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MainForm::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn2.BackgroundImage")));
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(131, 318);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(120, 94);
			this->btn2->TabIndex = 10;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MainForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn3.BackgroundImage")));
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(257, 318);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(120, 94);
			this->btn3->TabIndex = 11;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MainForm::btn3_Click);
			// 
			// btnplus
			// 
			this->btnplus->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnplus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnplus.BackgroundImage")));
			this->btnplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnplus->Location = System::Drawing::Point(383, 318);
			this->btnplus->Name = L"btnplus";
			this->btnplus->Size = System::Drawing::Size(120, 94);
			this->btnplus->TabIndex = 12;
			this->btnplus->Text = L"+";
			this->btnplus->UseVisualStyleBackColor = false;
			this->btnplus->Click += gcnew System::EventHandler(this, &MainForm::btnplus_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn0.BackgroundImage")));
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 418);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(239, 94);
			this->btn0->TabIndex = 13;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MainForm::btn0_Click);
			// 
			// btndot
			// 
			this->btndot->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btndot->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btndot.BackgroundImage")));
			this->btndot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndot->Location = System::Drawing::Point(257, 418);
			this->btndot->Name = L"btndot";
			this->btndot->Size = System::Drawing::Size(120, 94);
			this->btndot->TabIndex = 15;
			this->btndot->Text = L",";
			this->btndot->UseVisualStyleBackColor = false;
			this->btndot->Click += gcnew System::EventHandler(this, &MainForm::btndot_Click);
			// 
			// btnequal
			// 
			this->btnequal->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnequal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnequal.BackgroundImage")));
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequal->Location = System::Drawing::Point(383, 418);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(120, 94);
			this->btnequal->TabIndex = 16;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = false;
			this->btnequal->Click += gcnew System::EventHandler(this, &MainForm::btnequal_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 537);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btndot);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnplus);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnminus);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btnclear);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->textbox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(530, 576);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(530, 576);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Rechner";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double first, second = first = 0;
		char Operator;
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
    }
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textbox1->Text == "0")
			textbox1->Clear();
		textbox1->Text += "1";
	}

    private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textbox1->Text == "0")
			textbox1->Clear();
		textbox1->Text += "2";
	}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text == "0")
		textbox1->Clear();
	textbox1->Text += "3";
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text == "0")
		textbox1->Clear();
	textbox1->Text += "4";
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text == "0")
		textbox1->Clear();
	textbox1->Text += "5";
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text == "0")
		textbox1->Clear();
	textbox1->Text += "6";
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text == "0")
		textbox1->Clear();
	textbox1->Text += "7";
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text == "0")
		textbox1->Clear();
	textbox1->Text += "8";
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text == "0")
		textbox1->Clear();
	textbox1->Text += "9";
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text == "" || (textbox1->Text != "0" && textbox1->Text != "-"))
		textbox1->Text += "0";
}
private: System::Void btndot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text != "")
		textbox1->Text += ",";
}
private: System::Void btnplus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text == "-")
		textbox1->Clear();
	else if (textbox1->Text != "") {
		first = double::Parse(textbox1->Text);
		Operator = '+';
		textbox1->Clear();
	}
}
private: System::Void btnminus_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textbox1->Text == "" && textbox1->Text != "-")
		textbox1->Text += "-";

    else if (textbox1->Text != "" && textbox1->Text != "-") {
		first = double::Parse(textbox1->Text);
		Operator = '-';
		textbox1->Clear();
	}
	
	
}
private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox1->Text != "" && textbox1->Text != "-")
		second = double::Parse(textbox1->Text);

	if (Operator == '+')
		textbox1->Text = System::Convert::ToString(first + second);
	else if (Operator == '-')
		textbox1->Text = System::Convert::ToString(first - second);
}
private: System::Void btnclear_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Clear();
	first = second = 0;
	Operator = ' ';
}
};
}
