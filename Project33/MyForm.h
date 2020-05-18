#pragma once
#include"managerTicketIssuer.h"
#include<iostream>
#include<string>
#include<fstream>
#include <msclr\marshal_cppstd.h>
//#include<stdexcept>
#include<exception>
#include"MyForm1.h"
#include"ticketIssuer.h"
#include"ManagerDriver.h"
#include"driver.h"
#include"passenger.h"
#include"managerPassenger.h"
#include"fare.h"
#include"helpAndFeedback.h"
using namespace std;
namespace Project33 {
	
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
		//static int count;
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
	private: System::Windows::Forms::Panel^  panel1;
	public: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Panel^  panel3;



	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	public: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;



















private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::RadioButton^  radioButton7;
private: System::Windows::Forms::RadioButton^  radioButton6;
private: System::Windows::Forms::RadioButton^  radioButton5;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::PictureBox^  pictureBox8;
public: System::Windows::Forms::PictureBox^  pictureBox7;
private: System::Windows::Forms::Panel^  panel5;
public: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  fILEToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  managerPortalToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  loginToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ticketIssuerPortalToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  loginToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  driverPortalToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  loginToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^  passengerPortalToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  seatReservationToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  vIEWToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  reviewToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  tOOLSToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  notAvailableToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  hELPToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  viewHelpToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  feedBackToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  registerProductToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  aboutBusNSWToolStripMenuItem;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::PictureBox^  pictureBox10;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::PictureBox^  pictureBox11;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
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
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
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
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fILEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->managerPortalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ticketIssuerPortalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->driverPortalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->passengerPortalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seatReservationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vIEWToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tOOLSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->notAvailableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hELPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewHelpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->feedBackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registerProductToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutBusNSWToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(384, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(227, 193);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1000, 527);
			this->panel1->TabIndex = 9;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1000, 527);
			this->panel2->TabIndex = 7;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->radioButton4);
			this->panel3->Controls->Add(this->radioButton3);
			this->panel3->Controls->Add(this->radioButton2);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->button18);
			this->panel3->Controls->Add(this->button17);
			this->panel3->Controls->Add(this->button16);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->textBox11);
			this->panel3->Controls->Add(this->textBox10);
			this->panel3->Controls->Add(this->textBox9);
			this->panel3->Controls->Add(this->textBox8);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1000, 527);
			this->panel3->TabIndex = 9;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::RoyalBlue;
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
			this->panel4->Controls->Add(this->pictureBox6);
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
			this->panel4->Size = System::Drawing::Size(1000, 527);
			this->panel4->TabIndex = 25;
			this->panel4->Visible = false;
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
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(175, 305);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(516, 20);
			this->textBox18->TabIndex = 12;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(175, 261);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(203, 20);
			this->textBox17->TabIndex = 12;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(535, 212);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(156, 20);
			this->textBox16->TabIndex = 11;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(507, 169);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(184, 20);
			this->textBox15->TabIndex = 10;
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"Code";
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
			this->comboBox1->Text = L"03-- --";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(239, 213);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(139, 20);
			this->textBox14->TabIndex = 8;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(507, 132);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(184, 20);
			this->textBox13->TabIndex = 7;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(175, 132);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(203, 20);
			this->textBox12->TabIndex = 6;
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
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::SteelBlue;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(768, 43);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(158, 177);
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
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
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(614, 434);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(171, 13);
			this->label17->TabIndex = 24;
			this->label17->Text = L"Record saved successfully :)";
			this->label17->Visible = false;
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(711, 158);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(95, 17);
			this->radioButton4->TabIndex = 23;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Royal Daewoo";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(711, 134);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(99, 17);
			this->radioButton3->TabIndex = 22;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Luxury Daewoo";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(711, 110);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(90, 17);
			this->radioButton2->TabIndex = 21;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Luxury Coach";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(614, 434);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(106, 13);
			this->label16->TabIndex = 20;
			this->label16->Text = L"File missing error ";
			this->label16->Visible = false;
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(899, 491);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(74, 24);
			this->button18->TabIndex = 19;
			this->button18->Text = L"< Back";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Green;
			this->button17->Location = System::Drawing::Point(616, 400);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(104, 31);
			this->button17->TabIndex = 18;
			this->button17->Text = L"Register";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Red;
			this->button16->Location = System::Drawing::Point(498, 400);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(104, 31);
			this->button16->TabIndex = 17;
			this->button16->Text = L"Not Register";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(601, 110);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(90, 15);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Vehicle Type";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(239, 335);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(174, 20);
			this->textBox11->TabIndex = 11;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(727, 285);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(168, 20);
			this->textBox10->TabIndex = 10;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(498, 287);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(144, 20);
			this->textBox9->TabIndex = 9;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(239, 288);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(175, 20);
			this->textBox8->TabIndex = 8;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(498, 222);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(144, 20);
			this->textBox7->TabIndex = 7;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(239, 225);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(239, 186);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(228, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(239, 149);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(228, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(239, 110);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(96, 340);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 15);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Date Registered";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(96, 293);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(137, 15);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Current Tag Number";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(671, 290);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 15);
			this->label13->TabIndex = 1;
			this->label13->Text = L"State";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(425, 290);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(36, 15);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Year";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(425, 227);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 15);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Color";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(96, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 15);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Year";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(96, 188);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 15);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Model";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(96, 154);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 15);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Engine Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"HelvLight", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(96, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 15);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Reg. Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(220, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"> Manager >> Register Vehicle";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->pictureBox9);
			this->panel5->Controls->Add(this->textBox19);
			this->panel5->Controls->Add(this->label28);
			this->panel5->Location = System::Drawing::Point(-378, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(378, 526);
			this->panel5->TabIndex = 13;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(12, 475);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(40, 39);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 2;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox19->Location = System::Drawing::Point(65, 80);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(245, 414);
			this->textBox19->TabIndex = 1;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox19_TextChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Neuropol", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label28->Location = System::Drawing::Point(61, 35);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(258, 23);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Notification Center";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(747, 11);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(28, 27);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 12;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(778, 11);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(29, 26);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::Info;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Blue;
			this->button15->Location = System::Drawing::Point(643, 260);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(162, 24);
			this->button15->TabIndex = 8;
			this->button15->Text = L"Fare/Discount";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(899, 12);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(77, 25);
			this->button14->TabIndex = 7;
			this->button14->Text = L"LogOut";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(818, 12);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(77, 25);
			this->button13->TabIndex = 6;
			this->button13->Text = L"Home";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Info;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Blue;
			this->button12->Location = System::Drawing::Point(643, 179);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(162, 25);
			this->button12->TabIndex = 5;
			this->button12->Text = L"Passengers Data";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Info;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Blue;
			this->button11->Location = System::Drawing::Point(384, 260);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(175, 25);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Create Ticket Issuer";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Info;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Blue;
			this->button9->Location = System::Drawing::Point(119, 260);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(165, 25);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Assign Driver";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Info;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Blue;
			this->button8->Location = System::Drawing::Point(119, 180);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(165, 28);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Register Vehicle";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(61, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"> Manager";
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::Info;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::Blue;
			this->button22->Location = System::Drawing::Point(384, 179);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(175, 26);
			this->button22->TabIndex = 10;
			this->button22->Text = L"Assign Route";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(783, 470);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 24);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Exit !";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(866, 470);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 24);
			this->button6->TabIndex = 5;
			this->button6->Text = L"< Back";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(338, 236);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(207, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(338, 200);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(207, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(187, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(187, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"User ID";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(449, 287);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 27);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Login";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(35, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"> Welcome To Manager Module";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(338, 262);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(76, 17);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Remember";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(196, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Manager";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(662, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Driver Module";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(196, 461);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 32);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Ticket Issuer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(662, 461);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 32);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Passenger Module";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(196, 214);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(143, 85);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(662, 214);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(115, 85);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(196, 366);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(143, 89);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(662, 366);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(115, 89);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fILEToolStripMenuItem,
					this->vIEWToolStripMenuItem, this->tOOLSToolStripMenuItem, this->hELPToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1000, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fILEToolStripMenuItem
			// 
			this->fILEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->managerPortalToolStripMenuItem,
					this->ticketIssuerPortalToolStripMenuItem, this->driverPortalToolStripMenuItem, this->passengerPortalToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fILEToolStripMenuItem->Name = L"fILEToolStripMenuItem";
			this->fILEToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->fILEToolStripMenuItem->Text = L"FILE";
			// 
			// managerPortalToolStripMenuItem
			// 
			this->managerPortalToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->loginToolStripMenuItem });
			this->managerPortalToolStripMenuItem->Name = L"managerPortalToolStripMenuItem";
			this->managerPortalToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->managerPortalToolStripMenuItem->Text = L"Manager Portal";
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->loginToolStripMenuItem->Text = L"Login";
			this->loginToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::loginToolStripMenuItem_Click);
			// 
			// ticketIssuerPortalToolStripMenuItem
			// 
			this->ticketIssuerPortalToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->loginToolStripMenuItem1 });
			this->ticketIssuerPortalToolStripMenuItem->Name = L"ticketIssuerPortalToolStripMenuItem";
			this->ticketIssuerPortalToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->ticketIssuerPortalToolStripMenuItem->Text = L"Ticket Issuer Portal";
			// 
			// loginToolStripMenuItem1
			// 
			this->loginToolStripMenuItem1->Name = L"loginToolStripMenuItem1";
			this->loginToolStripMenuItem1->Size = System::Drawing::Size(104, 22);
			this->loginToolStripMenuItem1->Text = L"Login";
			this->loginToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::loginToolStripMenuItem1_Click);
			// 
			// driverPortalToolStripMenuItem
			// 
			this->driverPortalToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->loginToolStripMenuItem2 });
			this->driverPortalToolStripMenuItem->Name = L"driverPortalToolStripMenuItem";
			this->driverPortalToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->driverPortalToolStripMenuItem->Text = L"Driver Portal";
			// 
			// loginToolStripMenuItem2
			// 
			this->loginToolStripMenuItem2->Name = L"loginToolStripMenuItem2";
			this->loginToolStripMenuItem2->Size = System::Drawing::Size(104, 22);
			this->loginToolStripMenuItem2->Text = L"Login";
			this->loginToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::loginToolStripMenuItem2_Click);
			// 
			// passengerPortalToolStripMenuItem
			// 
			this->passengerPortalToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->seatReservationToolStripMenuItem });
			this->passengerPortalToolStripMenuItem->Name = L"passengerPortalToolStripMenuItem";
			this->passengerPortalToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->passengerPortalToolStripMenuItem->Text = L"Passenger Portal";
			// 
			// seatReservationToolStripMenuItem
			// 
			this->seatReservationToolStripMenuItem->Name = L"seatReservationToolStripMenuItem";
			this->seatReservationToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->seatReservationToolStripMenuItem->Text = L"Seat Reservation";
			this->seatReservationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::seatReservationToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// vIEWToolStripMenuItem
			// 
			this->vIEWToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reviewToolStripMenuItem });
			this->vIEWToolStripMenuItem->Name = L"vIEWToolStripMenuItem";
			this->vIEWToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->vIEWToolStripMenuItem->Text = L"VIEW";
			// 
			// reviewToolStripMenuItem
			// 
			this->reviewToolStripMenuItem->Name = L"reviewToolStripMenuItem";
			this->reviewToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->reviewToolStripMenuItem->Text = L"Review ";
			this->reviewToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reviewToolStripMenuItem_Click);
			// 
			// tOOLSToolStripMenuItem
			// 
			this->tOOLSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->notAvailableToolStripMenuItem });
			this->tOOLSToolStripMenuItem->Name = L"tOOLSToolStripMenuItem";
			this->tOOLSToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->tOOLSToolStripMenuItem->Text = L"TOOLS";
			// 
			// notAvailableToolStripMenuItem
			// 
			this->notAvailableToolStripMenuItem->Name = L"notAvailableToolStripMenuItem";
			this->notAvailableToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->notAvailableToolStripMenuItem->Text = L"Not Available";
			// 
			// hELPToolStripMenuItem
			// 
			this->hELPToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->viewHelpToolStripMenuItem,
					this->feedBackToolStripMenuItem, this->registerProductToolStripMenuItem, this->aboutBusNSWToolStripMenuItem
			});
			this->hELPToolStripMenuItem->Name = L"hELPToolStripMenuItem";
			this->hELPToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->hELPToolStripMenuItem->Text = L"HELP";
			// 
			// viewHelpToolStripMenuItem
			// 
			this->viewHelpToolStripMenuItem->Name = L"viewHelpToolStripMenuItem";
			this->viewHelpToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->viewHelpToolStripMenuItem->Text = L"View Help";
			this->viewHelpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::viewHelpToolStripMenuItem_Click);
			// 
			// feedBackToolStripMenuItem
			// 
			this->feedBackToolStripMenuItem->Name = L"feedBackToolStripMenuItem";
			this->feedBackToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->feedBackToolStripMenuItem->Text = L"FeedBack";
			this->feedBackToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::feedBackToolStripMenuItem_Click);
			// 
			// registerProductToolStripMenuItem
			// 
			this->registerProductToolStripMenuItem->Name = L"registerProductToolStripMenuItem";
			this->registerProductToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->registerProductToolStripMenuItem->Text = L"Register Product";
			this->registerProductToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::registerProductToolStripMenuItem_Click);
			// 
			// aboutBusNSWToolStripMenuItem
			// 
			this->aboutBusNSWToolStripMenuItem->Name = L"aboutBusNSWToolStripMenuItem";
			this->aboutBusNSWToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->aboutBusNSWToolStripMenuItem->Text = L"About BusNSW";
			this->aboutBusNSWToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutBusNSWToolStripMenuItem_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(6, 517);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(87, 13);
			this->label29->TabIndex = 11;
			this->label29->Text = L"Only available";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(193, 529);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(51, 13);
			this->label30->TabIndex = 11;
			this->label30->Text = L"Copyright";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(242, 527);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(16, 17);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 12;
			this->pictureBox10->TabStop = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(8, 531);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(70, 13);
			this->label31->TabIndex = 11;
			this->label31->Text = L"in Pakistan";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(259, 529);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(202, 13);
			this->label32->TabIndex = 11;
			this->label32->Text = L"2017 BusNSW System. All right reserved.";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(951, 29);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(29, 28);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 13;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 551);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label30);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 /////////manager
				 panel1->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 /////driver module
				 driver^ d = gcnew driver();
				 d->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 //ticket issuer
				 managerTicketIssuer^ mti = gcnew managerTicketIssuer();
				 mti->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 ///passanger module
				 passenger^ p = gcnew passenger();
				 p->ShowDialog();
	}
			 ////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 //manager login button
				 String^ id = textBox1->Text;
				 String^ password = textBox2->Text;
				 if (id == "homee"){
					 if (password == "homee123"){
						 MessageBox::Show("Login Successful !!!");
						 panel2->Show();
					 }
					 else
					 {
						 MessageBox::Show("Password Incorrect, please try again !!!");
					 }
				 }
				 else
				 {
					 MessageBox::Show("UserID and Password Incorrect, please try again !!!");
				 }
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //manager user ID textBlock

	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //manager Login password block
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 //exit manager button
				 Application::Exit();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 //back button in login manager module
				 panel1->Hide();
				 textBox1->Text = "";
				 textBox2->Text = "";
	}
	public: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 //register vehicle .... manager
				 panel3->Show();
				 label17->Hide();
				 textBox3->Text = "";
				 textBox4->Text = "";
				 textBox5->Text = "";
				 textBox6->Text = "";
				 textBox7->Text = "";
				 textBox8->Text = "";
				 textBox9->Text = "";
				 textBox10->Text = "";
				 textBox11->Text = "";
				 //panel4->Hide();
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
				 //passanger data in manager module
				 managerPassenger^ mp = gcnew managerPassenger();
				 mp->ShowDialog();
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				 //assign driver.... in manager module
				 ManagerDriver^ md = gcnew ManagerDriver();
				 md->ShowDialog();
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				 // create ticket issuer in manager module
				 ticketIssuer^ ti = gcnew ticketIssuer();
				 ti->ShowDialog();
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
				 // fare discount in mnager module
				 fare^ f = gcnew fare();
				 f->ShowDialog();
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
				 //home button in manager
				 textBox1->Text = "";
				 textBox2->Text = "";

				 panel2->Hide();
				 panel1->Hide();
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
				 //logout the manager portal
				 panel2->Hide();
				 if (textBox1->Text == "homee" && radioButton1->Checked && textBox2->Text == "homee123"){
					 radioButton1->PerformClick();
				 }
				 else{
					 textBox1->Text = "";
					 textBox2->Text = "";
				 }
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 //remember button of login in manager portal
				 if (radioButton1->CheckAlign == ContentAlignment::MiddleLeft)
				 {
					 radioButton1->CheckAlign = ContentAlignment::MiddleRight;
				 }
				 else
				 {
					 radioButton1->CheckAlign = ContentAlignment::MiddleLeft;
				 }
	}
			 ////////////////////////////////////////////////////////////////////////////////////////////////////////// registration vehicle
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 ////////register vehicle --- manager module--- panel
				 label17->Hide();
	}
	public: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //registration number textBox
				//String^ a = textBox4->Text;
				//string b = msclr::interop::marshal_as<string>(a);
				//ifstream out;
				//out.open("VehicleData.txt");
				//string x;
				//string y;
				////string z;
				////string u;
				//out >> x;
				//// out >> y;
				//getline(out, y, ' ');
				//// getline(out, u);
				//if (b == x)
				//{
				//	MessageBox::Show("Vehicle already exist");
				//	textBox4->Text = "";

				//}
				//else
				//{
				//	while (!out.eof())
				//	{
				//		out >> x;
				//		// out >> y;
				//		getline(out, y, ' ');
				//		// getline(out, u);
				//	}
				//}
				//out.close();
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //engine Number textBox
	}
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //model textBox
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //year textBox
	}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //color textBox
	}
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //current Tag number textBox
	}
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //tag year textBox
	}
	private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //state textBox
	}
	private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //date registered textBox
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
				 //not register button vehicle register postion
				 label17->Hide();
				 MessageBox::Show("Cancel The Registration !!!");
				 panel2->Show();
				 textBox3->Text = "";
				 textBox4->Text = "";
				 textBox5->Text = "";
				 textBox6->Text = "";
				 textBox7->Text = "";
				 textBox8->Text = "";
				 textBox9->Text = "";
				 textBox10->Text = "";
				 textBox11->Text = "";
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
				 //register button vehicle portion
				 String^ regNum = textBox4->Text;
				 String^ engineNum = textBox5->Text;
				 String^ model = textBox6->Text;
				 String^ year = textBox3->Text;
				 String^ color = textBox7->Text;
				 String^ tagNum = textBox8->Text;
				 String^ tagYear = textBox9->Text;
				 String^ state = textBox10->Text;
				 String^ dateReg = textBox11->Text;
				 string a = msclr::interop::marshal_as<string>(regNum);
				 string b = msclr::interop::marshal_as<string>(engineNum);
				 string c = msclr::interop::marshal_as<string>(model);
				 string d = msclr::interop::marshal_as<string>(year);
				 string x = msclr::interop::marshal_as<string>(color);
				 string f = msclr::interop::marshal_as<string>(tagNum);
				 string g = msclr::interop::marshal_as<string>(tagYear);
				 string h = msclr::interop::marshal_as<string>(state);
				 string i = msclr::interop::marshal_as<string>(dateReg);
			
				 ///////////////////////////////////////////////////////////////
				 if (button17->Text == "Register"){
					 ofstream output;
					 try{                                                               //exception handling
						 output.open("VehicleData.txt", ios::app | ios::out);
					 }
					 catch (exception& e){
						 label16->Show();
						 label16->Text = gcnew String(e.what());
					 }
					 if (radioButton2->Checked){
						 String^ Lcoach = "Luxury Coach";
						 string k = msclr::interop::marshal_as<string>(Lcoach);
						 radioButton2->PerformClick();
						 output << a << " " << k << " " << c << " "
							 << d << " " << x << " " << f << " "
							 << g << " " << h << " " << i << " " << b << "\n";
					 }
					 else if (radioButton3->Checked){
						 String^ LDaewoo = "Luxury Daewoo";
						 string l = msclr::interop::marshal_as<string>(LDaewoo);
						 radioButton3->PerformClick();
						 output << a << " " << l << " " << c << " "
							 << d << " " << x << " " << f << " "
							 << g << " " << h << " " << i << " " << b << "\n";
					 }
					 else if (radioButton4->Checked){
						 String^ RDaewoo = "Royal Daewoo";
						 string m = msclr::interop::marshal_as<string>(RDaewoo);
						 radioButton4->PerformClick();
						 output << a << " " << m << " " << c << " "
							 << d << " " << x << " " << f << " "
							 << g << " " << h << " " << i << " " << b << "\n";
					 }
					 output.close();
				 }
				 label17->Show();
				 MessageBox::Show("Registration Successful !!!");
				 panel3->Hide();
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
				 //back button in regitration of vehicle
				 MessageBox::Show("Registration is also been canceled");
				 panel3->Hide();
				 textBox3->Text = "";
				 textBox4->Text = "";
				 textBox5->Text = "";
				 textBox6->Text = "";
				 textBox7->Text = "";
				 textBox8->Text = "";
				 textBox9->Text = "";
				 textBox10->Text = "";
				 textBox11->Text = "";
				 label17->Hide();
	}
	private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
				 //file regitser missing label
	}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //luxury coach radio button register vehicle
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //luxury daewoo radio button register
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //royal daewoo radio button
}
private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e){
			 //panel assign route
}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
			 //file couldnot be load in assign Route
}
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
			 //count bus in assign route portion
			 /*String^ in;
			 in = System::Convert::ToString(count);
			 label23->Text = in;*/
}
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //assign route in from part
}
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //assign route in TO part
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 //done to assign roue for bus
}
		 ///////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 //assign route button in manager portal
			 MyForm1^ fr1 = gcnew MyForm1();
			 fr1->ShowDialog();
			/* MyForm^ fr = gcnew MyForm();
			 fr->Hide();*/


}
		 ////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
			 //record save to add bus label
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
		 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e);
			 //bell sign for new notification
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
			 //forward msgs 
}
public: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //msgs all seen in manager portal to sent tickets issuer etc 
}
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
			 //back button to back the notification center 
			 panel5->Location = Point(0, 0);
			 while (panel5->Location.X != -378){
				 panel5->Location = Point(panel5->Location.X - 1, 0);
				 System::Threading::Thread::Sleep(2);
			 }
}
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 //panel of notification center seen
}
private: System::Void loginToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //manager login
			 panel1->Show();
}
private: System::Void loginToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //ticket issuer portal
			 managerTicketIssuer^ mti = gcnew managerTicketIssuer();
			 mti->ShowDialog();
}
private: System::Void loginToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //driver login
			 driver^ d = gcnew driver();
			 d->ShowDialog();
}
private: System::Void seatReservationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //passenger
			 passenger^ p = gcnew passenger();
			 p->ShowDialog();
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //exit
			 Application::Exit();
			 MessageBox::Show("Thankyou for using our service");
}
private: System::Void reviewToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //review product
			 MessageBox::Show("Sorry, No Review at this Time");
}
private: System::Void viewHelpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //view help
			 helpAndFeedback^ h = gcnew helpAndFeedback();
			 h->ShowDialog();
}
private: System::Void feedBackToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //feedback
			 helpAndFeedback^ h = gcnew helpAndFeedback();
			 h->ShowDialog();
}
private: System::Void registerProductToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //register product
			 MessageBox::Show("Your Product is in Beta version, Sorry; no register key will found");
}
private: System::Void aboutBusNSWToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //about bus system
			 MessageBox::Show("This is the semester project for Computer Programming Course.Thats include some portals i.e.MANAGER, PASSENGER, DRIVER and TICKET ISSUER");
}

private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
			 //exit app
			 Application::Exit();
			 MessageBox::Show("Thankyou for using our service");
}
};
}

using namespace Project33;
class notification{
public:
	notification();
	~notification();
	void seen(MyForm^ ptr);

private:
};