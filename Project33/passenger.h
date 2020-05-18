#pragma once
using namespace std;
#include<fstream>
#include<iostream>
#include<string>
#include <msclr\marshal_cppstd.h>
#include"busTiming.h"
namespace Project33 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for passenger
	/// </summary>
	public ref class passenger : public System::Windows::Forms::Form
	{
	
	public:
		passenger(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel7->Hide();
			panel1->Show();

			label63->Visible = true;
		}
	private: System::Windows::Forms::Label^  label59;
	public: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::PictureBox^  pictureBox61;
	public: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox63;
	public: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Panel^  panel6;
	public:
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label61;
	public: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	public: System::Windows::Forms::PictureBox^  pictureBox65;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::PictureBox^  pictureBox66;
	private: System::Windows::Forms::PictureBox^  pictureBox69;
	private: System::Windows::Forms::PictureBox^  pictureBox68;
	private: System::Windows::Forms::PictureBox^  pictureBox67;

	public:
	public:

	public:

	public:
	private: System::Windows::Forms::Label^  label58;
			 
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~passenger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	public: System::Windows::Forms::CheckBox^  checkBox2;
	public: System::Windows::Forms::CheckBox^  checkBox1;
	public: System::Windows::Forms::TextBox^  textBox6;
	public: System::Windows::Forms::TextBox^  textBox5;
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	public: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	public: System::Windows::Forms::PictureBox^  pictureBox53;
	public: System::Windows::Forms::PictureBox^  pictureBox54;
	public: System::Windows::Forms::PictureBox^  pictureBox52;
	public: System::Windows::Forms::PictureBox^  pictureBox49;
	public: System::Windows::Forms::PictureBox^  pictureBox48;
	public: System::Windows::Forms::PictureBox^  pictureBox45;
	public: System::Windows::Forms::PictureBox^  pictureBox44;
	public: System::Windows::Forms::PictureBox^  pictureBox41;
	public: System::Windows::Forms::PictureBox^  pictureBox40;
	public: System::Windows::Forms::PictureBox^  pictureBox37;
	public: System::Windows::Forms::PictureBox^  pictureBox36;
	public: System::Windows::Forms::PictureBox^  pictureBox33;
	public: System::Windows::Forms::PictureBox^  pictureBox51;
	public: System::Windows::Forms::PictureBox^  pictureBox32;
	public: System::Windows::Forms::PictureBox^  pictureBox47;
	public: System::Windows::Forms::PictureBox^  pictureBox29;
	public: System::Windows::Forms::PictureBox^  pictureBox43;
	public: System::Windows::Forms::PictureBox^  pictureBox28;
	public: System::Windows::Forms::PictureBox^  pictureBox39;
	public: System::Windows::Forms::PictureBox^  pictureBox25;
	public: System::Windows::Forms::PictureBox^  pictureBox35;
	public: System::Windows::Forms::PictureBox^  pictureBox24;
	public: System::Windows::Forms::PictureBox^  pictureBox50;
	public: System::Windows::Forms::PictureBox^  pictureBox31;
	public: System::Windows::Forms::PictureBox^  pictureBox46;
	public: System::Windows::Forms::PictureBox^  pictureBox21;
	public: System::Windows::Forms::PictureBox^  pictureBox42;
	public: System::Windows::Forms::PictureBox^  pictureBox27;
	public: System::Windows::Forms::PictureBox^  pictureBox38;
	public: System::Windows::Forms::PictureBox^  pictureBox20;
	public: System::Windows::Forms::PictureBox^  pictureBox34;
	public: System::Windows::Forms::PictureBox^  pictureBox23;
	public: System::Windows::Forms::PictureBox^  pictureBox30;
	public: System::Windows::Forms::PictureBox^  pictureBox17;
	public: System::Windows::Forms::PictureBox^  pictureBox26;
	public: System::Windows::Forms::PictureBox^  pictureBox19;
	public: System::Windows::Forms::PictureBox^  pictureBox22;
	public: System::Windows::Forms::PictureBox^  pictureBox16;
	public: System::Windows::Forms::PictureBox^  pictureBox18;
	public: System::Windows::Forms::PictureBox^  pictureBox15;
	public: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
private: System::Windows::Forms::PictureBox^  pictureBox56;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::PictureBox^  pictureBox55;
private: System::Windows::Forms::PictureBox^  pictureBox57;
private: System::Windows::Forms::PictureBox^  pictureBox60;
private: System::Windows::Forms::PictureBox^  pictureBox59;
private: System::Windows::Forms::PictureBox^  pictureBox58;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label55;
private: System::ComponentModel::IContainer^  components;
	public:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(passenger::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label63);
			this->panel1->Controls->Add(this->pictureBox65);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox64);
			this->panel1->Location = System::Drawing::Point(-374, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1327, 518);
			this->panel1->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel7->Controls->Add(this->pictureBox69);
			this->panel7->Controls->Add(this->pictureBox68);
			this->panel7->Controls->Add(this->pictureBox67);
			this->panel7->Controls->Add(this->textBox11);
			this->panel7->Controls->Add(this->label64);
			this->panel7->Controls->Add(this->pictureBox66);
			this->panel7->Location = System::Drawing::Point(374, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(953, 518);
			this->panel7->TabIndex = 3;
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(11, 18);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(45, 43);
			this->pictureBox69->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox69->TabIndex = 5;
			this->pictureBox69->TabStop = false;
			this->pictureBox69->Click += gcnew System::EventHandler(this, &passenger::pictureBox69_Click);
			// 
			// pictureBox68
			// 
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(321, 102);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(59, 74);
			this->pictureBox68->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox68->TabIndex = 4;
			this->pictureBox68->TabStop = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(55, 8);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(150, 61);
			this->pictureBox67->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox67->TabIndex = 3;
			this->pictureBox67->TabStop = false;
			this->pictureBox67->Click += gcnew System::EventHandler(this, &passenger::pictureBox67_Click);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox11->Location = System::Drawing::Point(380, 175);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(356, 327);
			this->textBox11->TabIndex = 2;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &passenger::textBox11_TextChanged);
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Neuropol", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label64->Location = System::Drawing::Point(376, 149);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(235, 23);
			this->label64->TabIndex = 1;
			this->label64->Text = L"Available Routes";
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(617, 24);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(335, 125);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox66->TabIndex = 0;
			this->pictureBox66->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->textBox8);
			this->panel5->Location = System::Drawing::Point(374, 73);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(951, 198);
			this->panel5->TabIndex = 28;
			this->panel5->Visible = false;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panel5_Paint_1);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->button3);
			this->panel6->Controls->Add(this->textBox10);
			this->panel6->Controls->Add(this->textBox9);
			this->panel6->Controls->Add(this->label62);
			this->panel6->Controls->Add(this->label61);
			this->panel6->Location = System::Drawing::Point(545, 34);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(324, 133);
			this->panel6->TabIndex = 2;
			this->panel6->Visible = false;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panel6_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Location = System::Drawing::Point(131, 89);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Cancel";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &passenger::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Location = System::Drawing::Point(210, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Confirm";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &passenger::button3_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox10->Location = System::Drawing::Point(131, 64);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(154, 20);
			this->textBox10->TabIndex = 2;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &passenger::textBox10_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox9->Location = System::Drawing::Point(131, 34);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(154, 20);
			this->textBox9->TabIndex = 1;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &passenger::textBox9_TextChanged);
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label62->Location = System::Drawing::Point(59, 65);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(50, 13);
			this->label62->TabIndex = 0;
			this->label62->Text = L"ID Card";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label61->Location = System::Drawing::Point(59, 34);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(39, 13);
			this->label61->TabIndex = 0;
			this->label61->Text = L"Name";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(362, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cancel Reservation";
			this->toolTip1->SetToolTip(this->button2, L"Cancel Booking");
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &passenger::button2_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(34, 34);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(310, 133);
			this->textBox8->TabIndex = 0;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &passenger::textBox8_TextChanged_1);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel3->Controls->Add(this->label59);
			this->panel3->Controls->Add(this->label58);
			this->panel3->Controls->Add(this->label57);
			this->panel3->Controls->Add(this->label56);
			this->panel3->Controls->Add(this->label55);
			this->panel3->Controls->Add(this->pictureBox60);
			this->panel3->Controls->Add(this->pictureBox57);
			this->panel3->Controls->Add(this->pictureBox59);
			this->panel3->Controls->Add(this->pictureBox58);
			this->panel3->Controls->Add(this->pictureBox56);
			this->panel3->Controls->Add(this->label51);
			this->panel3->Controls->Add(this->label52);
			this->panel3->Controls->Add(this->label50);
			this->panel3->Controls->Add(this->label49);
			this->panel3->Controls->Add(this->label48);
			this->panel3->Controls->Add(this->label47);
			this->panel3->Controls->Add(this->label46);
			this->panel3->Controls->Add(this->label45);
			this->panel3->Controls->Add(this->label44);
			this->panel3->Controls->Add(this->label43);
			this->panel3->Controls->Add(this->label42);
			this->panel3->Controls->Add(this->label41);
			this->panel3->Controls->Add(this->label40);
			this->panel3->Controls->Add(this->label39);
			this->panel3->Controls->Add(this->label38);
			this->panel3->Controls->Add(this->label37);
			this->panel3->Controls->Add(this->label36);
			this->panel3->Controls->Add(this->label35);
			this->panel3->Controls->Add(this->label34);
			this->panel3->Controls->Add(this->label33);
			this->panel3->Controls->Add(this->label32);
			this->panel3->Controls->Add(this->label31);
			this->panel3->Controls->Add(this->label30);
			this->panel3->Controls->Add(this->label29);
			this->panel3->Controls->Add(this->label28);
			this->panel3->Controls->Add(this->label27);
			this->panel3->Controls->Add(this->label26);
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->label53);
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label54);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->pictureBox53);
			this->panel3->Controls->Add(this->pictureBox54);
			this->panel3->Controls->Add(this->pictureBox52);
			this->panel3->Controls->Add(this->pictureBox49);
			this->panel3->Controls->Add(this->pictureBox48);
			this->panel3->Controls->Add(this->pictureBox45);
			this->panel3->Controls->Add(this->pictureBox44);
			this->panel3->Controls->Add(this->pictureBox41);
			this->panel3->Controls->Add(this->pictureBox40);
			this->panel3->Controls->Add(this->pictureBox37);
			this->panel3->Controls->Add(this->pictureBox36);
			this->panel3->Controls->Add(this->pictureBox33);
			this->panel3->Controls->Add(this->pictureBox51);
			this->panel3->Controls->Add(this->pictureBox32);
			this->panel3->Controls->Add(this->pictureBox47);
			this->panel3->Controls->Add(this->pictureBox29);
			this->panel3->Controls->Add(this->pictureBox43);
			this->panel3->Controls->Add(this->pictureBox28);
			this->panel3->Controls->Add(this->pictureBox39);
			this->panel3->Controls->Add(this->pictureBox25);
			this->panel3->Controls->Add(this->pictureBox35);
			this->panel3->Controls->Add(this->pictureBox24);
			this->panel3->Controls->Add(this->pictureBox50);
			this->panel3->Controls->Add(this->pictureBox31);
			this->panel3->Controls->Add(this->pictureBox46);
			this->panel3->Controls->Add(this->pictureBox21);
			this->panel3->Controls->Add(this->pictureBox42);
			this->panel3->Controls->Add(this->pictureBox27);
			this->panel3->Controls->Add(this->pictureBox38);
			this->panel3->Controls->Add(this->pictureBox20);
			this->panel3->Controls->Add(this->pictureBox34);
			this->panel3->Controls->Add(this->pictureBox23);
			this->panel3->Controls->Add(this->pictureBox30);
			this->panel3->Controls->Add(this->pictureBox55);
			this->panel3->Controls->Add(this->pictureBox17);
			this->panel3->Controls->Add(this->pictureBox26);
			this->panel3->Controls->Add(this->pictureBox19);
			this->panel3->Controls->Add(this->pictureBox22);
			this->panel3->Controls->Add(this->pictureBox16);
			this->panel3->Controls->Add(this->pictureBox18);
			this->panel3->Controls->Add(this->pictureBox15);
			this->panel3->Controls->Add(this->pictureBox14);
			this->panel3->Controls->Add(this->pictureBox13);
			this->panel3->Controls->Add(this->pictureBox11);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Location = System::Drawing::Point(386, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(575, 518);
			this->panel3->TabIndex = 25;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panel3_Paint);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::Color::Red;
			this->label59->Location = System::Drawing::Point(460, 408);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(0, 15);
			this->label59->TabIndex = 10;
			this->label59->Click += gcnew System::EventHandler(this, &passenger::label59_Click);
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::Color::Red;
			this->label58->Location = System::Drawing::Point(286, 408);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(168, 15);
			this->label58->TabIndex = 9;
			this->label58->Text = L"Total Reserved Seats are";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::Red;
			this->label57->Location = System::Drawing::Point(193, 408);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(0, 15);
			this->label57->TabIndex = 8;
			this->label57->Click += gcnew System::EventHandler(this, &passenger::label57_Click);
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->ForeColor = System::Drawing::Color::Red;
			this->label56->Location = System::Drawing::Point(22, 408);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(172, 15);
			this->label56->TabIndex = 7;
			this->label56->Text = L"Your Seat Reservation# is";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::Color::Red;
			this->label55->Location = System::Drawing::Point(22, 423);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(340, 15);
			this->label55->TabIndex = 6;
			this->label55->Text = L"It can\'t be reserved !!! It is reserved for management";
			this->label55->Visible = false;
			this->label55->Click += gcnew System::EventHandler(this, &passenger::label55_Click);
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(69, 326);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(3, 59);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox60->TabIndex = 5;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(69, 223);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(3, 59);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox57->TabIndex = 5;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(23, 358);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(42, 26);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox59->TabIndex = 5;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(23, 326);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(42, 26);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox58->TabIndex = 5;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(22, 256);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(42, 26);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox56->TabIndex = 5;
			this->pictureBox56->TabStop = false;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::SystemColors::Highlight;
			this->label51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label51->Location = System::Drawing::Point(529, 365);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(21, 13);
			this->label51->TabIndex = 4;
			this->label51->Text = L"36";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::SystemColors::Highlight;
			this->label52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label52->Location = System::Drawing::Point(530, 295);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(21, 13);
			this->label52->TabIndex = 4;
			this->label52->Text = L"38";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::SystemColors::Highlight;
			this->label50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label50->Location = System::Drawing::Point(529, 331);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(21, 13);
			this->label50->TabIndex = 4;
			this->label50->Text = L"37";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::SystemColors::Highlight;
			this->label49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label49->Location = System::Drawing::Point(481, 331);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(21, 13);
			this->label49->TabIndex = 4;
			this->label49->Text = L"33";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::SystemColors::Highlight;
			this->label48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label48->Location = System::Drawing::Point(482, 365);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(21, 13);
			this->label48->TabIndex = 4;
			this->label48->Text = L"32";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::SystemColors::Highlight;
			this->label47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label47->Location = System::Drawing::Point(432, 365);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(21, 13);
			this->label47->TabIndex = 4;
			this->label47->Text = L"28";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::SystemColors::Highlight;
			this->label46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label46->Location = System::Drawing::Point(432, 331);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(21, 13);
			this->label46->TabIndex = 4;
			this->label46->Text = L"29";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::SystemColors::Highlight;
			this->label45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label45->Location = System::Drawing::Point(383, 331);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(21, 13);
			this->label45->TabIndex = 4;
			this->label45->Text = L"25";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::SystemColors::Highlight;
			this->label44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label44->Location = System::Drawing::Point(384, 365);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(21, 13);
			this->label44->TabIndex = 4;
			this->label44->Text = L"24";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::SystemColors::Highlight;
			this->label43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label43->Location = System::Drawing::Point(335, 365);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(21, 13);
			this->label43->TabIndex = 4;
			this->label43->Text = L"20";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::SystemColors::Highlight;
			this->label42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label42->Location = System::Drawing::Point(335, 332);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(21, 13);
			this->label42->TabIndex = 4;
			this->label42->Text = L"21";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::SystemColors::Highlight;
			this->label41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label41->Location = System::Drawing::Point(286, 331);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(21, 13);
			this->label41->TabIndex = 4;
			this->label41->Text = L"17";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::SystemColors::Highlight;
			this->label40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label40->Location = System::Drawing::Point(286, 365);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(21, 13);
			this->label40->TabIndex = 4;
			this->label40->Text = L"16";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::SystemColors::Highlight;
			this->label39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label39->Location = System::Drawing::Point(237, 365);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(21, 13);
			this->label39->TabIndex = 4;
			this->label39->Text = L"12";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::SystemColors::Highlight;
			this->label38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label38->Location = System::Drawing::Point(237, 331);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(21, 13);
			this->label38->TabIndex = 4;
			this->label38->Text = L"13";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::SystemColors::Highlight;
			this->label37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label37->Location = System::Drawing::Point(191, 330);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(14, 13);
			this->label37->TabIndex = 4;
			this->label37->Text = L"9";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::SystemColors::Highlight;
			this->label36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label36->Location = System::Drawing::Point(191, 364);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(14, 13);
			this->label36->TabIndex = 4;
			this->label36->Text = L"8";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::SystemColors::Highlight;
			this->label35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label35->Location = System::Drawing::Point(142, 365);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(14, 13);
			this->label35->TabIndex = 4;
			this->label35->Text = L"4";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::SystemColors::Highlight;
			this->label34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label34->Location = System::Drawing::Point(142, 331);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(14, 13);
			this->label34->TabIndex = 4;
			this->label34->Text = L"5";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::SystemColors::Highlight;
			this->label33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label33->Location = System::Drawing::Point(142, 261);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(14, 13);
			this->label33->TabIndex = 4;
			this->label33->Text = L"6";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::Highlight;
			this->label32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label32->Location = System::Drawing::Point(187, 260);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(21, 13);
			this->label32->TabIndex = 4;
			this->label32->Text = L"10";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::SystemColors::Highlight;
			this->label31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label31->Location = System::Drawing::Point(237, 261);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(21, 13);
			this->label31->TabIndex = 4;
			this->label31->Text = L"14";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::Highlight;
			this->label30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label30->Location = System::Drawing::Point(286, 261);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(21, 13);
			this->label30->TabIndex = 4;
			this->label30->Text = L"18";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::Highlight;
			this->label29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label29->Location = System::Drawing::Point(335, 261);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(21, 13);
			this->label29->TabIndex = 4;
			this->label29->Text = L"22";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::Highlight;
			this->label28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label28->Location = System::Drawing::Point(383, 261);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(21, 13);
			this->label28->TabIndex = 4;
			this->label28->Text = L"26";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::Highlight;
			this->label27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label27->Location = System::Drawing::Point(432, 261);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(21, 13);
			this->label27->TabIndex = 4;
			this->label27->Text = L"30";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::Highlight;
			this->label26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label26->Location = System::Drawing::Point(481, 261);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(21, 13);
			this->label26->TabIndex = 4;
			this->label26->Text = L"34";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::Highlight;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label25->Location = System::Drawing::Point(529, 261);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(21, 13);
			this->label25->TabIndex = 4;
			this->label25->Text = L"39";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::Highlight;
			this->label24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label24->Location = System::Drawing::Point(529, 228);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(21, 13);
			this->label24->TabIndex = 4;
			this->label24->Text = L"40";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::SystemColors::Highlight;
			this->label53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label53->Location = System::Drawing::Point(480, 229);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(21, 13);
			this->label53->TabIndex = 4;
			this->label53->Text = L"35";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::Highlight;
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label23->Location = System::Drawing::Point(432, 228);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(21, 13);
			this->label23->TabIndex = 4;
			this->label23->Text = L"31";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::Highlight;
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label22->Location = System::Drawing::Point(383, 228);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(21, 13);
			this->label22->TabIndex = 4;
			this->label22->Text = L"27";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::Highlight;
			this->label21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label21->Location = System::Drawing::Point(334, 229);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 13);
			this->label21->TabIndex = 4;
			this->label21->Text = L"23";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Highlight;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label20->Location = System::Drawing::Point(286, 229);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(21, 13);
			this->label20->TabIndex = 4;
			this->label20->Text = L"19";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::Highlight;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label19->Location = System::Drawing::Point(236, 228);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(21, 13);
			this->label19->TabIndex = 4;
			this->label19->Text = L"15";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Highlight;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label18->Location = System::Drawing::Point(187, 228);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(21, 13);
			this->label18->TabIndex = 4;
			this->label18->Text = L"11";
			this->label18->Click += gcnew System::EventHandler(this, &passenger::label18_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::Highlight;
			this->label17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label17->Location = System::Drawing::Point(142, 228);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 13);
			this->label17->TabIndex = 4;
			this->label17->Text = L"7";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::SystemColors::Highlight;
			this->label54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label54->Location = System::Drawing::Point(22, 229);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(41, 13);
			this->label54->TabIndex = 4;
			this->label54->Text = L"Driver";
			this->toolTip1->SetToolTip(this->label54, L"Faculty Reserved");
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Highlight;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label16->Location = System::Drawing::Point(94, 229);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(14, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Highlight;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label15->Location = System::Drawing::Point(94, 261);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"2";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Highlight;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label14->Location = System::Drawing::Point(82, 331);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(39, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Hosts";
			this->toolTip1->SetToolTip(this->label14, L"Faculty Reserved");
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Highlight;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label13->Location = System::Drawing::Point(94, 365);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"1";
			this->label13->Click += gcnew System::EventHandler(this, &passenger::label13_Click);
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(521, 222);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(43, 28);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox53->TabIndex = 3;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &passenger::pictureBox53_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(521, 289);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(43, 28);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox54->TabIndex = 3;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Click += gcnew System::EventHandler(this, &passenger::pictureBox54_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(521, 255);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(43, 28);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox52->TabIndex = 3;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &passenger::pictureBox52_Click);
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(472, 222);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(43, 28);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox49->TabIndex = 3;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Click += gcnew System::EventHandler(this, &passenger::pictureBox49_Click);
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(472, 255);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(43, 28);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox48->TabIndex = 3;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Click += gcnew System::EventHandler(this, &passenger::pictureBox48_Click);
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(423, 222);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(43, 28);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox45->TabIndex = 3;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Click += gcnew System::EventHandler(this, &passenger::pictureBox45_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(423, 255);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(43, 28);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 3;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Click += gcnew System::EventHandler(this, &passenger::pictureBox44_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(374, 222);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(43, 28);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox41->TabIndex = 3;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &passenger::pictureBox41_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(374, 255);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(43, 28);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 3;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &passenger::pictureBox40_Click);
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(325, 222);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(43, 28);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 3;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &passenger::pictureBox37_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(325, 255);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(43, 28);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 3;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &passenger::pictureBox36_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(276, 222);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(43, 28);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 3;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &passenger::pictureBox33_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(521, 325);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(43, 28);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox51->TabIndex = 3;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &passenger::pictureBox51_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(276, 255);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(43, 28);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 3;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &passenger::pictureBox32_Click);
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(472, 325);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(43, 28);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox47->TabIndex = 3;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Click += gcnew System::EventHandler(this, &passenger::pictureBox47_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(227, 222);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(43, 28);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 3;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &passenger::pictureBox29_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(423, 325);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(43, 28);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox43->TabIndex = 3;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Click += gcnew System::EventHandler(this, &passenger::pictureBox43_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(227, 255);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(43, 28);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 3;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &passenger::pictureBox28_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(374, 325);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(43, 28);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 3;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Click += gcnew System::EventHandler(this, &passenger::pictureBox39_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(178, 221);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(43, 28);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 3;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &passenger::pictureBox25_Click);
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(325, 325);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(43, 28);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 3;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &passenger::pictureBox35_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(178, 254);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(43, 28);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 3;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &passenger::pictureBox24_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(521, 359);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(43, 28);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox50->TabIndex = 3;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Click += gcnew System::EventHandler(this, &passenger::pictureBox50_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(276, 325);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(43, 28);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 3;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &passenger::pictureBox31_Click);
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(472, 359);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(43, 28);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox46->TabIndex = 3;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &passenger::pictureBox46_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(129, 222);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(43, 28);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 3;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &passenger::pictureBox21_Click);
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(423, 359);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(43, 28);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox42->TabIndex = 3;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Click += gcnew System::EventHandler(this, &passenger::pictureBox42_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(227, 325);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(43, 28);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 3;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &passenger::pictureBox27_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(374, 359);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(43, 28);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 3;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &passenger::pictureBox38_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(129, 255);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(43, 28);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 3;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &passenger::pictureBox20_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(325, 359);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(43, 28);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 3;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &passenger::pictureBox34_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(178, 324);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(43, 28);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 3;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &passenger::pictureBox23_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(276, 359);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(43, 28);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 3;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &passenger::pictureBox30_Click);
			// 
			// pictureBox55
			// 
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(22, 222);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(43, 28);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox55->TabIndex = 3;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Click += gcnew System::EventHandler(this, &passenger::pictureBox55_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(80, 222);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(43, 28);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 3;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &passenger::pictureBox17_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(227, 359);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(43, 28);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 3;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &passenger::pictureBox26_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(129, 325);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(43, 28);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 3;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &passenger::pictureBox19_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(178, 358);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(43, 28);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 3;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &passenger::pictureBox22_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(80, 255);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(43, 28);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 3;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &passenger::pictureBox16_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(129, 359);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(43, 28);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 3;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &passenger::pictureBox18_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(80, 325);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(43, 28);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 3;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &passenger::pictureBox15_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(80, 359);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(43, 28);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 3;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &passenger::pictureBox14_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(74, 50);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(106, 99);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 2;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(12, 10);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(32, 32);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 1;
			this->pictureBox11->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox11, L"Back to Register Form");
			this->pictureBox11->Click += gcnew System::EventHandler(this, &passenger::pictureBox11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Neuropol", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label12->Location = System::Drawing::Point(196, 72);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(300, 23);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Seats Reserved Here";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel4->Controls->Add(this->pictureBox63);
			this->panel4->Controls->Add(this->pictureBox62);
			this->panel4->Controls->Add(this->label60);
			this->panel4->Controls->Add(this->pictureBox61);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Location = System::Drawing::Point(373, -91);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(952, 92);
			this->panel4->TabIndex = 27;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panel4_Paint);
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(790, 17);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(92, 35);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox63->TabIndex = 4;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Click += gcnew System::EventHandler(this, &passenger::pictureBox63_Click);
			// 
			// pictureBox62
			// 
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(897, 15);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(42, 37);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox62->TabIndex = 3;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Click += gcnew System::EventHandler(this, &passenger::pictureBox62_Click);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Neuropol", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label60->Location = System::Drawing::Point(32, 19);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(187, 16);
			this->label60->TabIndex = 2;
			this->label60->Text = L"Search Passenger";
			// 
			// pictureBox61
			// 
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(301, 35);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(43, 37);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox61->TabIndex = 1;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Click += gcnew System::EventHandler(this, &passenger::pictureBox61_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(34, 39);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(262, 29);
			this->textBox7->TabIndex = 0;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &passenger::textBox7_TextChanged);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(328, 11);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(32, 31);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 26;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &passenger::pictureBox12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(102, 92);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(77, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Wrong Input";
			this->label11->Visible = false;
			this->label11->Click += gcnew System::EventHandler(this, &passenger::label11_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::HotTrack;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(1238, 478);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Back";
			this->toolTip1->SetToolTip(this->button1, L"Back to main menu");
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &passenger::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Neuropol", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label10->Location = System::Drawing::Point(550, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(606, 33);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Welcome to Passenger Module";
			this->toolTip1->SetToolTip(this->label10, L"Passenger Module");
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->linkLabel1->Location = System::Drawing::Point(104, 174);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(64, 15);
			this->linkLabel1->TabIndex = 21;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Click here ";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &passenger::linkLabel1_LinkClicked);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(157, 394);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(68, 61);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 20;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &passenger::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(238, 394);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(69, 63);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &passenger::pictureBox9_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox2->Location = System::Drawing::Point(157, 361);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(60, 17);
			this->checkBox2->TabIndex = 18;
			this->checkBox2->Text = L"Female";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &passenger::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox1->Location = System::Drawing::Point(102, 360);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(49, 17);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L"Male";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &passenger::checkBox1_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(102, 294);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(205, 55);
			this->textBox6->TabIndex = 16;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &passenger::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(102, 260);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(205, 20);
			this->textBox5->TabIndex = 15;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &passenger::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(102, 230);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(205, 20);
			this->textBox4->TabIndex = 14;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &passenger::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(102, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 20);
			this->textBox3->TabIndex = 13;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &passenger::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(102, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 20);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &passenger::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &passenger::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(34, 360);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 15);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Gender";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(33, 296);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 15);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Address";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(33, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 15);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Phone#";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(34, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Arrival";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(34, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 15);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Depature";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(33, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 15);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Seat#";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(33, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ID Card";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(33, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Neuropol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(87, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 19);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Seats Reservation";
			// 
			// pictureBox8
			// 
			this->pictureBox8->AccessibleName = L"Booking Seats";
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(12, 11);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(56, 58);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->AccessibleName = L"Facebook";
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1196, 478);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(27, 28);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox7, L"Facebook ");
			this->pictureBox7->Click += gcnew System::EventHandler(this, &passenger::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->AccessibleName = L"Passenger Care Center";
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(909, 324);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(135, 131);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox6, L"Passenger Care Center");
			this->pictureBox6->Click += gcnew System::EventHandler(this, &passenger::pictureBox6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->AccessibleName = L"Call Center";
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(640, 324);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(135, 131);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox5, L"Call Center");
			this->pictureBox5->Click += gcnew System::EventHandler(this, &passenger::pictureBox5_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->AccessibleName = L"Information Desk";
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(775, 220);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(135, 132);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox3, L"Information Desk");
			this->pictureBox3->Click += gcnew System::EventHandler(this, &passenger::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->AccessibleName = L"Booking Seats";
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(643, 121);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(134, 132);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox2, L"Booking Seats");
			this->pictureBox2->Click += gcnew System::EventHandler(this, &passenger::pictureBox2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel2->Location = System::Drawing::Point(363, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(11, 517);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->AccessibleName = L"Back";
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(289, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 31);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &passenger::pictureBox1_Click);
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label63->Location = System::Drawing::Point(1194, 10);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(0, 15);
			this->label63->TabIndex = 29;
			this->toolTip1->SetToolTip(this->label63, L"Current Date/Time");
			this->label63->Visible = false;
			this->label63->Click += gcnew System::EventHandler(this, &passenger::label63_Click);
			// 
			// pictureBox65
			// 
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(506, 222);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(137, 129);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox65->TabIndex = 31;
			this->pictureBox65->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox65, L"Bus Schedule and Route");
			this->pictureBox65->Click += gcnew System::EventHandler(this, &passenger::pictureBox65_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->AccessibleName = L"Search Buses";
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(909, 122);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(135, 131);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox4, L"Search Passenger and cancel Reservation");
			this->pictureBox4->Click += gcnew System::EventHandler(this, &passenger::pictureBox4_Click);
			// 
			// pictureBox64
			// 
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(1044, 220);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(134, 131);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox64->TabIndex = 30;
			this->pictureBox64->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox64, L"Fare");
			this->pictureBox64->Click += gcnew System::EventHandler(this, &passenger::pictureBox64_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &passenger::toolTip1_Popup);
			// 
			// passenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(951, 517);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"passenger";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Passenger";
			this->Load += gcnew System::EventHandler(this, &passenger::passenger_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void passenger_Load(System::Object^  sender, System::EventArgs^  e) {
					 DateTime datetime = DateTime::Now;
					 this->label63->Text = datetime.ToString();
					 ///////////////
					 ///////////////////////////////////////////////////////////////////// print the fares and routes show in passenger module
					 ifstream read;
					 String^ pr = textBox11->Text;
					 string  print = msclr::interop::marshal_as<string>(pr);
					 ifstream in;
					 in.open("faresAssign.txt");
					 string depart, arrivall, price, ex, ex1;
					 in >> depart;
					 in >> arrivall;
					 in >> price;
					 getline(read, ex, '.');
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
							 str1 = gcnew String(depart.c_str());
							 str2 = gcnew String(arrivall.c_str());
							 str3 = gcnew String(price.c_str());
							 textBox11->AppendText("->(Departure)  ");
							 textBox11->AppendText(str1);
							 textBox11->AppendText("  >>(Arrival)  ");
							 textBox11->AppendText(str2);
							 textBox11->AppendText("  >>  ");
							 textBox11->AppendText(str3);
							 textBox11->AppendText("$");
							 textBox11->AppendText("\n");
							 //in.close();
							 temp = 1;
						 }
						 in >> depart;
						 in >> arrivall;
						 in >> price;
						 getline(read, ex, '.');
						 getline(read, ex1);
						 if (getline(in, ex1, '\n')){
							 temp = 0;
						 }
					 }
					 in.close();
					 //////////////////////////////////////////////////////////////////////   wnd fare print module
		}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //back button for slide back
				 panel3->Hide();
				 panel1->Location = Point(0,0);
				 while (panel1->Location.X != -374){
					 panel1->Location = Point(panel1->Location.X - 1, 0);
				 }
	}
	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e);
				 //sign up for add passenger
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
			 //trash the passenger //  cancel reservation
			 panel3->Hide();
			 MessageBox::Show("Reservation Canceled");
			 panel1->Location = Point(0, 0);
			 /*while (panel1->Location.X == -110){
			 panel1->Location = Point(panel1->Location.X - 1, -1);
			 Refresh();
			 }*/
			 while (panel1->Location.X != -374){
				 panel1->Location = Point(panel1->Location.X - 1, 0);

				 // System::Threading::Thread::Sleep(0.2);
			 }
			 textBox1->Text = "";
			 textBox2->Text = "";
			 textBox3->Text = "";
			 textBox4->Text = "";
			 textBox5->Text = "";
			 textBox6->Text = "";

}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
			 //facebook link
			 System::Diagnostics::Process::Start("http://www.facebook.com/imhomee");
}
public: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //name 
}
public: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //id card
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 //seat no click
			 panel3->Show();
}
public: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //departture
}
public: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //arrival
}
public: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //phone#
}
public: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //address
}
public: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //male
}
public: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //female
}
		 /////////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //booking 
			 panel4->Hide();
			 Refresh();
			 panel1->Location = Point(-374, 0);
			 textBox1->Text = "";
			 textBox2->Text = "";
			 textBox3->Text = "";
			 textBox4->Text = "";
			 textBox5->Text = "";
			 textBox6->Text = "";
			 while (panel1->Location.X != -10){
				 panel1->Location = Point(panel1->Location.X + 1, 0);
				 //System::Threading::Thread::Sleep(0.01);
			 }
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //search open
			 panel4->Location = Point(375, -91);
			 while (panel4->Location.Y != -10){
				 panel4->Location = Point(375, panel4->Location.Y + 1);
				 System::Threading::Thread::Sleep(2);
			 }
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //information desk
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			 //call center
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			 //passenger care center
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //back button 
			 this->Hide();
}
		 /////////////////////////////////////////////////////////////////////////////////////////////////////////////
public: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
			 //exception throw
}
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 //bus seat in sign up form
}
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
			 //forward in sign up to go for seat reserved
			 panel3->Show();
}
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
			 //backward button for seat reserved option 
			 panel3 -> Hide();

}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
		
public: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
			//1
			label55->Hide();
			pictureBox14->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			label57->Text = " 1";
			ofstream out;
			out.open("ReservedSeats.txt", ios::app);
			out << "1\n";
			out.close();
}
public: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
			 //2
			 label55->Hide();
			 pictureBox16->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 2";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "2\n";
			 out.close();
}
public: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
			 //3
			 label55->Hide();
			 pictureBox17->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 3";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "3\n";
			 out.close();
}
public: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
			 //4
			 label55->Hide();
			 pictureBox18->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 4";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "4\n";
			 out.close();
}
public: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
			 //5
			 label55->Hide();
			 pictureBox19->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 5";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "5\n";
			 out.close();
}
public: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
			 //6
			 label55->Hide();
			 pictureBox20->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 6";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "6\n";
			 out.close();
}
public: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
			 //7
			 label55->Hide();
			 pictureBox21->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 7";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "7\n";
			 out.close();
}
public: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
			 //8
			 label55->Hide();
			 pictureBox22->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 8";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "8\n";
			 out.close();
}
public: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
			 //9
			 label55->Hide();
			 pictureBox23->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 9";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "9\n";
			 out.close();
}
public: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
			 //10
			 label55->Hide();
			 pictureBox24->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 10";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "10\n";
			 out.close();
}
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
			 
}
public: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
			 //11
			 label55->Hide();
			 pictureBox25->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 11";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "11\n";
			 out.close();
}
public: System::Void pictureBox26_Click(System::Object^  sender, System::EventArgs^  e) {
			 //12
			 label55->Hide();
			 pictureBox26->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 12";
			 ofstream out;
			 out.open("ReservedSeats.txt",ios::app);
			 out << "12\n";
			 out.close();
}
public: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
			 //13
			 label55->Hide();
			 pictureBox27->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 13";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "13\n";
			 out.close();
}
public: System::Void pictureBox28_Click(System::Object^  sender, System::EventArgs^  e) {
			 //14
			 label55->Hide();
			 pictureBox28->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 14";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "14\n";
			 out.close();
}
public: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
			 //15
			 label55->Hide();
			 pictureBox29->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 15";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "15\n";
			 out.close();
}
public: System::Void pictureBox30_Click(System::Object^  sender, System::EventArgs^  e) {
			 //16
			 label55->Hide();
			 pictureBox30->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 16";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "16\n";
			 out.close();
}
public: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {
			 //17
			 label55->Hide();
			 pictureBox31->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 17";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "17\n";
			 out.close();
}
public: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
			 //18
			 label55->Hide();
			 pictureBox32->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 18";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "18\n";
			 out.close();
}
public: System::Void pictureBox33_Click(System::Object^  sender, System::EventArgs^  e) {
			 //19
			 label55->Hide();
			 pictureBox33->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 19";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "19\n";
			 out.close();
}
public: System::Void pictureBox34_Click(System::Object^  sender, System::EventArgs^  e) {
			 //20
			 label55->Hide();
			 pictureBox34->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 20";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "20\n";
			 out.close();
}
public: System::Void pictureBox35_Click(System::Object^  sender, System::EventArgs^  e) {
			 //21
			 label55->Hide();
			 pictureBox35->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 21";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "21\n";
			 out.close();
}
public: System::Void pictureBox36_Click(System::Object^  sender, System::EventArgs^  e) {
			 //22
			 label55->Hide();
			 pictureBox36->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 22";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "22\n";
			 out.close();
}
public: System::Void pictureBox37_Click(System::Object^  sender, System::EventArgs^  e) {
			 //23
			 label55->Hide();
			 pictureBox37->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 23";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "23\n";
			 out.close();
}
public: System::Void pictureBox38_Click(System::Object^  sender, System::EventArgs^  e) {
			 //24
			 label55->Hide();
			 pictureBox38->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 24";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "24\n";
			 out.close();
}
public: System::Void pictureBox39_Click(System::Object^  sender, System::EventArgs^  e) {
			 //25
			 label55->Hide();
			 pictureBox39->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 25";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "25\n";
			 out.close();
}
public: System::Void pictureBox40_Click(System::Object^  sender, System::EventArgs^  e) {
			 //26
			 label55->Hide();
			 pictureBox40->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 26";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "26\n";
			 out.close();
}
public: System::Void pictureBox41_Click(System::Object^  sender, System::EventArgs^  e) {
			 //27
			 label55->Hide();
			 pictureBox41->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 27";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "27\n";
			 out.close();
}
public: System::Void pictureBox42_Click(System::Object^  sender, System::EventArgs^  e) {
			 //28
			 label55->Hide();
			 pictureBox42->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 28";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "28\n";
			 out.close();
}
public: System::Void pictureBox43_Click(System::Object^  sender, System::EventArgs^  e) {
			 //29
			 label55->Hide();
			 pictureBox43->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 29";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "29\n";
			 out.close();
}
public: System::Void pictureBox44_Click(System::Object^  sender, System::EventArgs^  e) {
			 //30
			 label55->Hide();
			 pictureBox44->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 30";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "30\n";
			 out.close();
}
public: System::Void pictureBox45_Click(System::Object^  sender, System::EventArgs^  e) {
			 //31
			 label55->Hide();
			 pictureBox45->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 31";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "31\n";
			 out.close();
}
public: System::Void pictureBox46_Click(System::Object^  sender, System::EventArgs^  e) {
			 //32
			 label55->Hide();
			 pictureBox47->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 32";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "32\n";
			 out.close();
}
public: System::Void pictureBox47_Click(System::Object^  sender, System::EventArgs^  e) {
			 //33
			 label55->Hide();
			 pictureBox47->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 33";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "33\n";
			 out.close();
}
public: System::Void pictureBox48_Click(System::Object^  sender, System::EventArgs^  e) {
			 //34
			 label55->Hide();
			 pictureBox48->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 34";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "34\n";
			 out.close();
}
public: System::Void pictureBox49_Click(System::Object^  sender, System::EventArgs^  e) {
			 //35
			 label55->Hide();
			 pictureBox49->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 35";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "35\n";
			 out.close();
}
public: System::Void pictureBox50_Click(System::Object^  sender, System::EventArgs^  e) {
			 //36
			 label55->Hide();
			 pictureBox50->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 36";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "36\n";
			 out.close();
}
public: System::Void pictureBox51_Click(System::Object^  sender, System::EventArgs^  e) {
			 //37
			 label55->Hide();
			 pictureBox51->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 37";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "37\n";
			 out.close();
}
public: System::Void pictureBox54_Click(System::Object^  sender, System::EventArgs^  e) {
			 //38
			 label55->Hide();
			 pictureBox54->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 38";
			 ofstream out;
			 out.open("ReservedSeats.txt",  ios::app);
			 out << "38\n";
			 out.close();
}
public: System::Void pictureBox52_Click(System::Object^  sender, System::EventArgs^  e) {
			 //39
			 label55->Hide();
			 pictureBox52->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 39";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "39\n";
			 out.close();
}
public: System::Void pictureBox53_Click(System::Object^  sender, System::EventArgs^  e) {
			 //40
			 label55->Hide();
			 pictureBox53->Image = Image::FromFile("C://Users/eizel/Pictures/reserved.png");
			 label57->Text = " 40";
			 ofstream out;
			 out.open("ReservedSeats.txt", ios::app);
			 out << "40\n";
			 out.close();
}

private: System::Void label57_Click(System::Object^  sender, System::EventArgs^  e) {
			 //reserved show seat
}
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
			 //hosts
			 label55->Show();
}
private: System::Void pictureBox55_Click(System::Object^  sender, System::EventArgs^  e) {
			 //driver
			 label55->Show();
}
private: System::Void label55_Click(System::Object^  sender, System::EventArgs^  e) {
			 //it vant be reserved
}
private: System::Void label59_Click(System::Object^  sender, System::EventArgs^  e) {
			 //total reserved seats are
}
		 /////////////////////////////////////////////////////////////////////////////////    search passenger
public: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //search passenger
}
private: System::Void pictureBox61_Click(System::Object^  sender, System::EventArgs^  e);
			 //search button passenger

private: System::Void pictureBox63_Click(System::Object^  sender, System::EventArgs^  e) {
			 //register new passenger
			 DateTime datetime = DateTime::Now;
			 this->label63->Text = datetime.ToString();
			 panel4->Hide();
			 panel5->Hide();
			 Refresh();
			 panel1->Location = Point(-374, 0);
			 textBox1->Text = "";
			 textBox2->Text = "";
			 textBox3->Text = "";
			 textBox4->Text = "";
			 textBox5->Text = "";
			 textBox6->Text = "";
			 while (panel1->Location.X != -10){
				 panel1->Location = Point(panel1->Location.X + 1, 0);
				 //System::Threading::Thread::Sleep(0.01);
			 }
}
private: System::Void pictureBox62_Click(System::Object^  sender, System::EventArgs^  e) {
			 //close search bar
			 Refresh();
			 panel5->Hide();
			 panel4->Location = Point(374, 0);
			 while (panel4->Location.Y != -93){
				 panel4->Location = Point(375, panel4->Location.Y - 1);
				// System::Threading::Thread::Sleep(1);
			 }
			 DateTime datetime = DateTime::Now;
			 this->label63->Text = datetime.ToString();
			 label63->Show();
}
public: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 //search panel passenger
}
		 //////////////////////////////////////////////////////////////////////////////////
public: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 //it show when user found during search
}
public: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //text box for user name found show
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //cancel reservation on search bar
			 panel6->Show();
}
public: System::Void textBox8_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 //sdisplay register member
}
public: System::Void panel5_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 //panel for display search member which is register
}
private: System::Void panel6_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 //cancel reservation panel
			 textBox9->Text = "";
			 textBox10->Text = "";
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //name write to cancel reservation
}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //cnic when it cancel booking
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //cancel reservation 
			 panel6->Hide();
			 MessageBox::Show("Your Booking Can't be Cancel");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //confirm to delete booking
			 String^ a = textBox9->Text;
			 string name = msclr::interop::marshal_as<string>(a);
			 String^ b = textBox10->Text;
			 string cnic = msclr::interop::marshal_as<string>(b);
			 ifstream input;
			 ofstream temp;
			 string abc;
			 input.open("CreatePassenger.txt");
			 temp.open("temp.txt");
			 string nm, id;
			 input >> nm;
			 input >> id;
			 getline(input, abc, '\n');
			 if (name != nm){
				 MessageBox::Show("Passenger not found");
				 textBox9->Text = "";
				 textBox10->Text = "";
			 }
			 else{
				 while (getline(input, abc))
				 {
					 if (abc != nm)
						 temp << abc << endl;
				 }
				 MessageBox::Show("Your Booking Delete Successfully");
				 input.close();
				 temp.close();
				 remove("CreatePassenger.txt");
				 rename("temp.txt", "CreatePassenger.txt");
			 }
}
public: System::Void label63_Click(System::Object^  sender, System::EventArgs^  e) {
			 //date time show on passenger module
			 /*DateTime datetime = DateTime::Now;
			 this->label63->Text = datetime.ToString();*/
}
private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
}
		 ////////////////////////////////////////////////////////////////////////////////////////////////////////
public: System::Void pictureBox65_Click(System::Object^  sender, System::EventArgs^  e){
			//bus schedule in passenger module
			busTiming^ bt = gcnew busTiming();
			bt->ShowDialog();
}
private: System::Void pictureBox64_Click(System::Object^  sender, System::EventArgs^  e) {
			 //fare system in passenger module
         	 panel7->Show();
			 label63->Visible = true;
}
		 /////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //print the available route and its fares from manager assign
}
private: System::Void pictureBox67_Click(System::Object^  sender, System::EventArgs^  e) {
			 //booking now in fare check system in passenger module
			 panel7->Hide();
			 panel4->Hide();
			 Refresh();
			 panel1->Location = Point(-374, 0);
			 textBox1->Text = "";
			 textBox2->Text = "";
			 textBox3->Text = "";
			 textBox4->Text = "";
			 textBox5->Text = "";
			 textBox6->Text = "";
			 while (panel1->Location.X != -10){
				 panel1->Location = Point(panel1->Location.X + 1, 0);
				 //System::Threading::Thread::Sleep(0.01);
			 }
}
private: System::Void pictureBox69_Click(System::Object^  sender, System::EventArgs^  e) {
			 //back button in fare
			 this->Hide();
			 passenger^ p = gcnew passenger();
			 p->ShowDialog();
}
};
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
using namespace Project33;
class pessengerModule{
public:
	pessengerModule();
	~pessengerModule();
	virtual void signUp(passenger^ ptr) = 0;
protected:
	string pName;
	int idcard;
	string departure, arrival;
	int phone;
	string address;
};

class passengerSignUp:public pessengerModule{
public:
	passengerSignUp();
	~passengerSignUp();
	void signUp(passenger^ ptr);
private:

};
class searchPassenger{
public:
	searchPassenger();
	~searchPassenger();
	void search(passenger^ ptr);
private:
	string Pname;
};
