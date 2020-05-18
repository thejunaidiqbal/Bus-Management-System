#pragma once
#include<string>
#include<fstream>
#include <msclr\marshal_cppstd.h>
#include<exception>
using namespace std;
namespace Project33 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ticketIssuer
	/// </summary>
	public ref class ticketIssuer : public System::Windows::Forms::Form
	{
	public:
		ticketIssuer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel4->Show();
			ifstream read;
			//////////////////////////////////////// show the registered buses which have assign route
			String^ pr = textBox3->Text;
			string  print = msclr::interop::marshal_as<string>(pr);
			ifstream in;
			in.open("AssignVehicle.txt");
			string bus, dep, arr, z, ex1;
			in >> bus;
			in >> dep;
			in >> arr;
			getline(read, z, '.');
			getline(read, ex1);
			String^ str1;
			String^ str2;
			String^ str3;
			/////////////////////////////////////////////////////////////////
			int temp = 0;
			while (!in.eof())
			{
				if (temp == 0)
				{
					str1 = gcnew String(bus.c_str());
					str2 = gcnew String(dep.c_str());
					str3 = gcnew String(arr.c_str());
					textBox3->AppendText(str1);
					textBox3->AppendText("->    (Departure) ");
					textBox3->AppendText(str2);
					textBox3->AppendText("  >>  (Arrival) ");
					textBox3->AppendText(str3);
					textBox3->AppendText("\n");
					//in.close();
					temp = 1;
				}
				in >> bus;
				in >> dep;
				in >> arr;
				getline(read, z, '.');
				if (getline(in, ex1, '\n')){
					temp = 0;
				}
			}
			in.close();
			////////////////////////////////////////
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ticketIssuer()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^ pBox;
	public:array<PictureBox^> ^pBox1;

	private: System::Windows::Forms::Panel^  panel4;
	protected:
	public: System::Windows::Forms::RadioButton^  radioButton7;
	public: System::Windows::Forms::RadioButton^  radioButton6;
	public: System::Windows::Forms::RadioButton^  radioButton5;
	public: System::Windows::Forms::TextBox^  textBox18;
	public: System::Windows::Forms::TextBox^  textBox17;
	public: System::Windows::Forms::TextBox^  textBox16;
	public: System::Windows::Forms::TextBox^  textBox15;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	public: System::Windows::Forms::TextBox^  textBox14;
	public: System::Windows::Forms::TextBox^  textBox13;
	public: System::Windows::Forms::TextBox^  textBox12;
	public: System::Windows::Forms::Button^  button19;

	public: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	public:
	public: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	public:
	public: System::Windows::Forms::Label^  label3;
	private:
	private:
	public:
	public:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ticketIssuer::typeid));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->radioButton7);
			this->panel4->Controls->Add(this->radioButton6);
			this->panel4->Controls->Add(this->radioButton5);
			this->panel4->Controls->Add(this->textBox18);
			this->panel4->Controls->Add(this->textBox17);
			this->panel4->Controls->Add(this->textBox16);
			this->panel4->Controls->Add(this->textBox15);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->textBox14);
			this->panel4->Controls->Add(this->textBox13);
			this->panel4->Controls->Add(this->textBox12);
			this->panel4->Controls->Add(this->button19);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label26);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->label25);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(993, 532);
			this->panel4->TabIndex = 26;
			this->panel4->Visible = false;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ticketIssuer::panel4_Paint);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(202, 373);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(490, 144);
			this->textBox3->TabIndex = 22;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(175, 335);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(103, 20);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox2_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::AliceBlue;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Location = System::Drawing::Point(765, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(161, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ticketIssuer::pictureBox1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(591, 261);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 19;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(747, 378);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Registration failed due to file missing";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &ticketIssuer::label1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(771, 328);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 30);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ticketIssuer::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(852, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 30);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ticketIssuer::button1_Click);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton7->Location = System::Drawing::Point(304, 172);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(59, 17);
			this->radioButton7->TabIndex = 15;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Neutral";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &ticketIssuer::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton6->Location = System::Drawing::Point(239, 172);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(59, 17);
			this->radioButton6->TabIndex = 14;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Female";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &ticketIssuer::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton5->Location = System::Drawing::Point(175, 173);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(48, 17);
			this->radioButton5->TabIndex = 13;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Male";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &ticketIssuer::radioButton5_CheckedChanged);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(175, 305);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(516, 20);
			this->textBox18->TabIndex = 12;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox18_TextChanged);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(175, 261);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(203, 20);
			this->textBox17->TabIndex = 12;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox17_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(535, 212);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(156, 20);
			this->textBox16->TabIndex = 11;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox16_TextChanged);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(507, 169);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(184, 20);
			this->textBox15->TabIndex = 10;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox15_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"0301", L"0302", L"0303", L"0304", L"0305", L"0306",
					L"0311", L"0312", L"0313", L"0314", L"0315", L"0316", L"0321", L"0322", L"0323", L"0324", L"0325", L"0326", L"0331", L"0332",
					L"0333", L"0334", L"0335", L"0336", L"0337", L"0341", L"0342", L"0343", L"0344", L"0345", L"0346"
			});
			this->comboBox1->Location = System::Drawing::Point(175, 212);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(58, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->Text = L"03 -- --";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ticketIssuer::comboBox1_SelectedIndexChanged);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(239, 213);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(139, 20);
			this->textBox14->TabIndex = 8;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox14_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(507, 132);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(184, 20);
			this->textBox13->TabIndex = 7;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox13_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(175, 132);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(203, 20);
			this->textBox12->TabIndex = 6;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &ticketIssuer::textBox12_TextChanged);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::RoyalBlue;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(808, 227);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 5;
			this->button19->Text = L"Upload";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &ticketIssuer::button19_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(90, 373);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Registered Buses";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(90, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Assign Bus#";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label26->Location = System::Drawing::Point(91, 303);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(55, 16);
			this->label26->TabIndex = 2;
			this->label26->Text = L"Address:";
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(888, 491);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 26);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Back";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &ticketIssuer::button10_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label27->Location = System::Drawing::Point(91, 259);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(90, 16);
			this->label27->TabIndex = 2;
			this->label27->Text = L"Identity Card#: ";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label25->Location = System::Drawing::Point(425, 211);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(103, 16);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Driving Licence#:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label24->Location = System::Drawing::Point(93, 211);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(59, 16);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Contact#:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label23->Location = System::Drawing::Point(425, 167);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(84, 16);
			this->label23->TabIndex = 2;
			this->label23->Text = L"Date of Birth: ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label22->Location = System::Drawing::Point(93, 169);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(52, 16);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Gender:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label21->Location = System::Drawing::Point(425, 130);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(76, 16);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Last Name: ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label20->Location = System::Drawing::Point(93, 130);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(76, 16);
			this->label20->TabIndex = 2;
			this->label20->Text = L"First Name: ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(344, 46);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(242, 20);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Registration for Ticket Issuer";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(3, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(181, 15);
			this->label18->TabIndex = 0;
			this->label18->Text = L"> Manager >> Ticket Issuer";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &ticketIssuer::openFileDialog1_FileOk);
			// 
			// ticketIssuer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(993, 532);
			this->Controls->Add(this->panel4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ticketIssuer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ticket Issuer";
			this->Load += gcnew System::EventHandler(this, &ticketIssuer::ticketIssuer_Load);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 //register panel 
	}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 //back button of ticket issuer registration form
			 textBox12->Text = "";
			 textBox13->Text = "";
			 textBox14->Text = "";
			 textBox15->Text = "";
			 textBox16->Text = "";
			 textBox17->Text = "";
			 textBox18->Text = "";
			 MessageBox::Show("Registration has also been canceled");
			 this->Hide();
}
public: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e);
			 //first name
public: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e);
			 //last name
public: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e);
			 //date of birth
public: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
			 //mobile code 
public: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e);
			 //mobile no.
public: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e);
			 //driving licence
public: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e);
			 //identity card#
public: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e);
			 //address
	public: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e);
				 //upload pic button
		 //////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //cancel registration
			 textBox12->Text = "";
			 textBox13->Text = ""; 
			 textBox14->Text = "";
			 textBox15->Text = "";
			 textBox16->Text = "";
			 textBox17->Text = "";
			 textBox18->Text = "";
			 MessageBox::Show("Registration has also been canceled, please fill again for Registration");
}
public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
			 //done registration 
public: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
			 //male
public: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
			 //female
public: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
			 //neutral
public: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e){}
			 //file missing label
public: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
public: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //assign bus 
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //show all buses registered which have assign route
}
private: System::Void ticketIssuer_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

///////////////////////////////////////////////////////////////////////////

using namespace Project33;

class TicketIssuer{
public:
	TicketIssuer(){}
	int getRegistration(ticketIssuer^ ptr1);
	~TicketIssuer(){}
};

class TicketIssuerImages:public TicketIssuer{
public:
	TicketIssuerImages(){}
	int imagesTicketIssuer(ticketIssuer^ ptr1);
	~TicketIssuerImages(){}
};