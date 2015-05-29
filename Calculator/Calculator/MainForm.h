#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::Button^  EqualButton;
	private: System::Windows::Forms::Button^  CarrotButton;
	private: System::Windows::Forms::Button^  ModButton;
	private: System::Windows::Forms::Button^  SqrtButton;
	private: System::Windows::Forms::Button^  PlusButton;
	private: System::Windows::Forms::Button^  MinusButton;
	private: System::Windows::Forms::Button^  MultiplyButton;


	private: System::Windows::Forms::Button^  DivideButton;
	private: System::Windows::Forms::Button^  SignChangeButton;
	private: System::Windows::Forms::Button^  PeriodButton;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;



	protected:

	protected:

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
			this->EqualButton = (gcnew System::Windows::Forms::Button());
			this->CarrotButton = (gcnew System::Windows::Forms::Button());
			this->ModButton = (gcnew System::Windows::Forms::Button());
			this->SqrtButton = (gcnew System::Windows::Forms::Button());
			this->PlusButton = (gcnew System::Windows::Forms::Button());
			this->MinusButton = (gcnew System::Windows::Forms::Button());
			this->MultiplyButton = (gcnew System::Windows::Forms::Button());
			this->DivideButton = (gcnew System::Windows::Forms::Button());
			this->SignChangeButton = (gcnew System::Windows::Forms::Button());
			this->PeriodButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// EqualButton
			// 
			this->EqualButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EqualButton->Location = System::Drawing::Point(614, 282);
			this->EqualButton->Name = L"EqualButton";
			this->EqualButton->Size = System::Drawing::Size(59, 104);
			this->EqualButton->TabIndex = 0;
			this->EqualButton->Text = L"=";
			this->EqualButton->UseVisualStyleBackColor = true;
			this->EqualButton->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// CarrotButton
			// 
			this->CarrotButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CarrotButton->Location = System::Drawing::Point(614, 227);
			this->CarrotButton->Name = L"CarrotButton";
			this->CarrotButton->Size = System::Drawing::Size(59, 49);
			this->CarrotButton->TabIndex = 1;
			this->CarrotButton->Text = L"^";
			this->CarrotButton->UseVisualStyleBackColor = true;
			this->CarrotButton->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// ModButton
			// 
			this->ModButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModButton->Location = System::Drawing::Point(614, 172);
			this->ModButton->Name = L"ModButton";
			this->ModButton->Size = System::Drawing::Size(59, 49);
			this->ModButton->TabIndex = 2;
			this->ModButton->Text = L"%";
			this->ModButton->UseVisualStyleBackColor = true;
			// 
			// SqrtButton
			// 
			this->SqrtButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SqrtButton->Location = System::Drawing::Point(614, 117);
			this->SqrtButton->Name = L"SqrtButton";
			this->SqrtButton->Size = System::Drawing::Size(59, 49);
			this->SqrtButton->TabIndex = 3;
			this->SqrtButton->Text = L"Sqrt";
			this->SqrtButton->UseVisualStyleBackColor = true;
			// 
			// PlusButton
			// 
			this->PlusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlusButton->Location = System::Drawing::Point(549, 337);
			this->PlusButton->Name = L"PlusButton";
			this->PlusButton->Size = System::Drawing::Size(59, 49);
			this->PlusButton->TabIndex = 4;
			this->PlusButton->Text = L"+";
			this->PlusButton->UseVisualStyleBackColor = true;
			// 
			// MinusButton
			// 
			this->MinusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MinusButton->Location = System::Drawing::Point(549, 282);
			this->MinusButton->Name = L"MinusButton";
			this->MinusButton->Size = System::Drawing::Size(59, 49);
			this->MinusButton->TabIndex = 5;
			this->MinusButton->Text = L"-";
			this->MinusButton->UseVisualStyleBackColor = true;
			this->MinusButton->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_2);
			// 
			// MultiplyButton
			// 
			this->MultiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MultiplyButton->Location = System::Drawing::Point(549, 227);
			this->MultiplyButton->Name = L"MultiplyButton";
			this->MultiplyButton->Size = System::Drawing::Size(59, 49);
			this->MultiplyButton->TabIndex = 6;
			this->MultiplyButton->Text = L"*";
			this->MultiplyButton->UseVisualStyleBackColor = true;
			// 
			// DivideButton
			// 
			this->DivideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DivideButton->Location = System::Drawing::Point(549, 172);
			this->DivideButton->Name = L"DivideButton";
			this->DivideButton->Size = System::Drawing::Size(59, 49);
			this->DivideButton->TabIndex = 7;
			this->DivideButton->Text = L"/";
			this->DivideButton->UseVisualStyleBackColor = true;
			this->DivideButton->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// SignChangeButton
			// 
			this->SignChangeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignChangeButton->Location = System::Drawing::Point(549, 117);
			this->SignChangeButton->Name = L"SignChangeButton";
			this->SignChangeButton->Size = System::Drawing::Size(59, 49);
			this->SignChangeButton->TabIndex = 8;
			this->SignChangeButton->Text = L"-,+";
			this->SignChangeButton->UseVisualStyleBackColor = true;
			// 
			// PeriodButton
			// 
			this->PeriodButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PeriodButton->Location = System::Drawing::Point(484, 337);
			this->PeriodButton->Name = L"PeriodButton";
			this->PeriodButton->Size = System::Drawing::Size(59, 49);
			this->PeriodButton->TabIndex = 9;
			this->PeriodButton->Text = L".";
			this->PeriodButton->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->AutoEllipsis = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(484, 282);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 49);
			this->button3->TabIndex = 10;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->AutoEllipsis = true;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(484, 227);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(59, 49);
			this->button6->TabIndex = 11;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->AutoEllipsis = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(484, 172);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(59, 49);
			this->button9->TabIndex = 12;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->AutoEllipsis = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(419, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 49);
			this->button1->TabIndex = 13;
			this->button1->Text = L"3";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->AutoEllipsis = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(354, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 49);
			this->button2->TabIndex = 14;
			this->button2->Text = L"3";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->AutoEllipsis = true;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(354, 227);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(59, 49);
			this->button4->TabIndex = 15;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->AutoEllipsis = true;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(419, 227);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 49);
			this->button5->TabIndex = 16;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->AutoEllipsis = true;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(419, 172);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(59, 49);
			this->button7->TabIndex = 17;
			this->button7->Text = L"3";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->AutoEllipsis = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(354, 172);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(59, 49);
			this->button8->TabIndex = 18;
			this->button8->Text = L"3";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 398);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->PeriodButton);
			this->Controls->Add(this->SignChangeButton);
			this->Controls->Add(this->DivideButton);
			this->Controls->Add(this->MultiplyButton);
			this->Controls->Add(this->MinusButton);
			this->Controls->Add(this->PlusButton);
			this->Controls->Add(this->SqrtButton);
			this->Controls->Add(this->ModButton);
			this->Controls->Add(this->CarrotButton);
			this->Controls->Add(this->EqualButton);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
