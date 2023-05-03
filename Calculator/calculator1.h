#pragma once
#include <math.h>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ calculator
	/// </summary>
	public ref class calculator : public System::Windows::Forms::Form
	{
	public:
		calculator(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_eq;




	private: System::Windows::Forms::Button^ btn_add;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btn_min;


	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ btn_mult;


	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ btn_div;
	private: System::Windows::Forms::Button^ btn_plmin;


	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ btn_point;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(calculator::typeid));
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_eq = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn_min = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_plmin = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->BackColor = System::Drawing::Color::Red;
			this->btn_close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_close.Image")));
			this->btn_close->Location = System::Drawing::Point(12, 12);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(25, 25);
			this->btn_close->TabIndex = 0;
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->Click += gcnew System::EventHandler(this, &calculator::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::PaleGreen;
			this->label1->Location = System::Drawing::Point(88, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 55);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &calculator::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(21, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 60);
			this->button1->TabIndex = 2;
			this->button1->Text = L"AC";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &calculator::btn_Fac_click);
			// 
			// btn_eq
			// 
			this->btn_eq->BackColor = System::Drawing::Color::LimeGreen;
			this->btn_eq->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_eq->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eq->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_eq->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_eq->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_eq.Image")));
			this->btn_eq->Location = System::Drawing::Point(153, 112);
			this->btn_eq->Name = L"btn_eq";
			this->btn_eq->Size = System::Drawing::Size(128, 60);
			this->btn_eq->TabIndex = 5;
			this->btn_eq->Text = L"=";
			this->btn_eq->UseVisualStyleBackColor = false;
			this->btn_eq->Click += gcnew System::EventHandler(this, &calculator::btn_eq_click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add.Image")));
			this->btn_add->Location = System::Drawing::Point(221, 178);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(60, 60);
			this->btn_add->TabIndex = 9;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &calculator::btn_add_click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(153, 178);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 8;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(87, 178);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(21, 178);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseMnemonic = false;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// btn_min
			// 
			this->btn_min->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_min->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_min->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_min->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_min->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_min.Image")));
			this->btn_min->Location = System::Drawing::Point(221, 244);
			this->btn_min->Name = L"btn_min";
			this->btn_min->Size = System::Drawing::Size(60, 60);
			this->btn_min->TabIndex = 13;
			this->btn_min->Text = L"-";
			this->btn_min->UseVisualStyleBackColor = false;
			this->btn_min->Click += gcnew System::EventHandler(this, &calculator::btn_min_click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(153, 244);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 60);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(87, 244);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(21, 244);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 60);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_mult->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_mult->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_mult.Image")));
			this->btn_mult->Location = System::Drawing::Point(221, 310);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(60, 60);
			this->btn_mult->TabIndex = 17;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &calculator::btn_mult_click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Gray;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(153, 310);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 16;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(87, 310);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 60);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gray;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(21, 310);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 60);
			this->button16->TabIndex = 14;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_div->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_div->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_div->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_div->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_div.Image")));
			this->btn_div->Location = System::Drawing::Point(221, 376);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(60, 60);
			this->btn_div->TabIndex = 21;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &calculator::btn_div_click);
			// 
			// btn_plmin
			// 
			this->btn_plmin->BackColor = System::Drawing::Color::Silver;
			this->btn_plmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_plmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_plmin->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plmin->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_plmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_plmin.Image")));
			this->btn_plmin->Location = System::Drawing::Point(153, 376);
			this->btn_plmin->Name = L"btn_plmin";
			this->btn_plmin->Size = System::Drawing::Size(60, 60);
			this->btn_plmin->TabIndex = 20;
			this->btn_plmin->Text = L"+/-";
			this->btn_plmin->UseVisualStyleBackColor = false;
			this->btn_plmin->Click += gcnew System::EventHandler(this, &calculator::btn_plmin_click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Gray;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(87, 376);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 60);
			this->button19->TabIndex = 19;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &calculator::btn_number_click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::Color::Silver;
			this->btn_point->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_point->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_point->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_point.Image")));
			this->btn_point->Location = System::Drawing::Point(21, 376);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(60, 60);
			this->btn_point->TabIndex = 18;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &calculator::btn_point_click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::PaleGreen;
			this->label2->Location = System::Drawing::Point(213, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 15);
			this->label2->TabIndex = 22;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOrange;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(287, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 23;
			this->button2->Text = L"%";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &calculator::btn_per_click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOrange;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(287, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 24;
			this->button3->Text = L"^2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &calculator::btn_stp_click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkOrange;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(287, 244);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 25;
			this->button4->Text = L"sqrt";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &calculator::btn_sqrt_click);
			// 
			// calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(350, 450);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_plmin);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->btn_min);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btn_eq);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"calculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: double num1;
	private: char op;

	private: System::Void btn_eq_click(System::Object^ sender, System::EventArgs^ e) {
		double num2 = System::Convert::ToDouble(this->label1->Text);
		double res = 0;
		if (!this->label2->Text->Contains("=")) this->label2->Text = this->label2->Text + num2 + " =";
		switch (this->op) {
		case ('+'): res = this->num1 + num2; break;
		case ('%'): 
			res = num2 / 100 * this->num1; break;
		case ('-'): res = this->num1 - num2; break;
		case ('*'): res = this->num1 * num2; break;
		case ('/'): 
			if (num2 != 0) res = this->num1 / num2;
			else MessageBox::Show("ƒеление на ноль!", "", MessageBoxButtons::OK, MessageBoxIcon::Error); 
			break;
		}
		this->label1->Text = System::Convert::ToString(res);
	}
    
	private: System::Void btn_Fac_click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "0";
		this->op = ' ';
		this->label2->Text = " ";
	}

	private: System::Void btn_plmin_click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = System::Convert::ToString(System::Convert::ToDouble(this->label1->Text) * -1);
	}

	private: System::Void btn_point_click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->label1->Text->Contains(","))this->label1->Text = this->label1->Text + ",";
	}

	private: System::Void btn_per_click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '%';
		this->label2->Text = System::Convert::ToDouble(this->label1->Text) + " % ";
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
	private: System::Void btn_stp_click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '^2';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = System::Convert::ToString(this->num1 * this->num1);
		this->label2->Text = System::Convert::ToDouble(this->label1->Text) + " ";
	}

	private: System::Void btn_add_click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '+';
		this->label2->Text = System::Convert::ToDouble(this->label1->Text) + " + ";
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}

	private: System::Void btn_sqrt_click(System::Object^ sender, System::EventArgs^ e) {
		this->op = 'sqrt';
		this->label2->Text = " sqrt(" + System::Convert::ToDouble(this->label1->Text) + ") ";
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = System::Convert::ToString(sqrt(this->num1));
	}

	private: System::Void btn_min_click(System::Object^ sender, System::EventArgs^ e) {
		this->label2->Text = System::Convert::ToDouble(this->label1->Text) + " - ";
		this->op = '-';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
		
	}

	private: System::Void btn_mult_click(System::Object^ sender, System::EventArgs^ e) {
		this->label2->Text = System::Convert::ToDouble(this->label1->Text) + " * ";
		this->op = '*';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
		
	}

	private: System::Void btn_div_click(System::Object^ sender, System::EventArgs^ e) {
		this->label2->Text = System::Convert::ToDouble(this->label1->Text) + " / ";
		this->op = '/';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_number_click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = safe_cast<Button^>(sender);
		if (this->label1->Text != "0") this->label1->Text = this->label1->Text + btn->Text;
		else this->label1->Text = btn->Text;
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
