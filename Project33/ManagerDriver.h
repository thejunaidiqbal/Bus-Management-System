#pragma once
#include<fstream>
#include<string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Project33 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManagerDriver
	/// </summary>
	public ref class ManagerDriver : public System::Windows::Forms::Form
	{
	public:
		ManagerDriver(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel2->Show();
			///////////////////////////////////////////////////////////////////////
			ifstream in;

			/*String^ msg = textBox1->Text;
			std::string m = msclr::interop::marshal_as<string>(msg);*/
			string x;
			string y;
			//string z;
			string a;
			String ^str1;
			String ^str2;
			int temp = 0;
			try{
				in.open("DriverLogin.txt");
			}
			catch (exception& e){
				label1->Show();
				label1->Text = gcnew String(e.what());
			}
			while (!in.eof())
			{
				in >> x;
				in >> y;
				//in >> a;
				getline(in, a, '\n');
				str1 = gcnew String(x.c_str());
				str2 = gcnew String(y.c_str());
				//str3 = gcnew String(a.c_str());
				textBox13->AppendText(str1);             // display the the name of the sender in the from textbox
				textBox13->AppendText(":  ");
				textBox13->AppendText(str2);         // display the message of the sender in the message textbox
				textBox13->AppendText("\n");
				if (temp == 0)
				{
					in >> x;
					in >> y;
					//in >> a;
					getline(in, a, '\n');
					str1 = gcnew String(x.c_str());
					str2 = gcnew String(y.c_str());
					//str3 = gcnew String(a.c_str());
					textBox13->AppendText(str1);             // display the the name of the sender in the from textbox
					textBox13->AppendText(":  ");
					textBox13->AppendText(str2);         // display the message of the sender in the message textbox
					textBox13->AppendText("\n");
					//textBox13->AppendText(str3);
					//textBox13->AppendText("\n");
					//in.close();
					temp = 1;
				}
				in >> x;
				in >> y;
				//in >> a;
				if (getline(in, a, '\n')){
					temp = 0;
				}

			}

			in.close();

			////////////////////////////////////////////////////////////////////////
			{
				ifstream input;

				/*String^ msg = textBox1->Text;
				std::string m = msclr::interop::marshal_as<string>(msg);*/
				string xx;
				string yy;
				string aa;
				string zz;
				String ^str1;
				String ^str2;
				String^ str3;
				int temp1 = 0;
				try{
					input.open("AssignVehicle.txt");
				}
				catch (exception& e){
					label1->Show();
					label1->Text = gcnew String(e.what());
				}
				while (!input.eof())
				{
					input >> xx;
					input >> yy;
					input >> aa;
					getline(input, zz, '.');
					str1 = gcnew String(xx.c_str());
					str2 = gcnew String(yy.c_str());
					str3 = gcnew String(aa.c_str());
					textBox16->AppendText(str1);             // display the the name of the sender in the from textbox
					textBox16->AppendText(":  ");
					textBox16->AppendText(str2);         // display the message of the sender in the message textbox
					textBox16->AppendText(" ");
					textBox16->AppendText(str3);
					textBox16->AppendText("\n");
					if (temp1 == 0)
					{
						input >> xx;
						input >> yy;
						input >> aa;
						getline(input, zz, '.');
						str1 = gcnew String(xx.c_str());
						str2 = gcnew String(yy.c_str());
						str3 = gcnew String(aa.c_str());
						textBox16->AppendText(str1);             // display the the name of the sender in the from textbox
						textBox16->AppendText(":  ");
						textBox16->AppendText(str2);         // display the message of the sender in the message textbox
						textBox16->AppendText(" ");
						textBox16->AppendText(str3);
						textBox16->AppendText("\n");
						//in.close();
						temp1 = 1;
					}
					input >> xx;
					input >> yy;
					input >> aa;
					/*if (aa == "\n"){
						temp1 = 0;
					}*/
					if (getline(input, zz, '.')){
						temp1 = 0;
					}

				}

				input.close();
			}
			//////////////////////////////////////////////////////////////////////
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManagerDriver()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Panel^  panel2;
	protected:
	public: System::Windows::Forms::Button^  button9;
	public:
	private: System::Windows::Forms::TextBox^  textBox16;
	public: System::Windows::Forms::TextBox^  textBox15;
	public: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBox13;
	public: System::Windows::Forms::Button^  backFromManager;
	private:
	private: System::Windows::Forms::Label^  label27;
	public: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManagerDriver::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->backFromManager = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->textBox16);
			this->panel2->Controls->Add(this->textBox15);
			this->panel2->Controls->Add(this->textBox14);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->textBox13);
			this->panel2->Controls->Add(this->backFromManager);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1007, 527);
			this->panel2->TabIndex = 11;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ManagerDriver::panel2_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(160, 415);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"File Load Failed !!!";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &ManagerDriver::label1_Click);
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(889, 159);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Confirm";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ManagerDriver::button9_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(367, 107);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(200, 305);
			this->textBox16->TabIndex = 8;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &ManagerDriver::textBox16_TextChanged);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(792, 133);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(172, 20);
			this->textBox15->TabIndex = 7;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &ManagerDriver::textBox15_TextChanged);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(792, 105);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(172, 20);
			this->textBox14->TabIndex = 6;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &ManagerDriver::textBox14_TextChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label30->Location = System::Drawing::Point(705, 138);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(55, 13);
			this->label30->TabIndex = 5;
			this->label30->Text = L"Bus Reg#";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label29->Location = System::Drawing::Point(703, 108);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(43, 13);
			this->label29->TabIndex = 4;
			this->label29->Text = L"User ID";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label31->Location = System::Drawing::Point(364, 86);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(110, 18);
			this->label31->TabIndex = 3;
			this->label31->Text = L"Assign Buses";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label28->Location = System::Drawing::Point(96, 86);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(148, 18);
			this->label28->TabIndex = 3;
			this->label28->Text = L"Registered Drivers";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(95, 107);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(243, 305);
			this->textBox13->TabIndex = 2;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &ManagerDriver::textBox13_TextChanged);
			// 
			// backFromManager
			// 
			this->backFromManager->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->backFromManager->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backFromManager->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backFromManager->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->backFromManager->Location = System::Drawing::Point(917, 482);
			this->backFromManager->Name = L"backFromManager";
			this->backFromManager->Size = System::Drawing::Size(75, 24);
			this->backFromManager->TabIndex = 1;
			this->backFromManager->Text = L"Back";
			this->backFromManager->UseVisualStyleBackColor = true;
			this->backFromManager->Click += gcnew System::EventHandler(this, &ManagerDriver::backFromManager_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label27->Location = System::Drawing::Point(10, 12);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(164, 13);
			this->label27->TabIndex = 0;
			this->label27->Text = L"> Manager >> Driver Assign";
			// 
			// ManagerDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1007, 527);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ManagerDriver";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Assign Driver";
			this->Load += gcnew System::EventHandler(this, &ManagerDriver::ManagerDriver_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 //driver from manager click
	}
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //registered driver show
}
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //assign bus show
}
public: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //user id for register bus
}
public: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //bus reg#
}
public: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e);
			 //confirm button
private: System::Void backFromManager_Click(System::Object^  sender, System::EventArgs^  e) {
			 //back button
			 this->Hide();
}
public: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //file load failed
}
private: System::Void ManagerDriver_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

using namespace Project33;
class assign{
public:
	assign(){}
	int driverAss(ManagerDriver^ ptr);
	~assign(){}
};