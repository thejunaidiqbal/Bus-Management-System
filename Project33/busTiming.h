#pragma once
using namespace std;
#include<fstream>
#include<iostream>
#include<string>
#include <msclr\marshal_cppstd.h>
namespace Project33 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for busTiming
	/// </summary>
	public ref class busTiming : public System::Windows::Forms::Form
	{
	public:
		busTiming(void)
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
		~busTiming()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(busTiming::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Neuropol", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(350, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bus Schedules";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(282, 128);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(451, 375);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &busTiming::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(931, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 31);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox1, L"Back");
			this->pictureBox1->Click += gcnew System::EventHandler(this, &busTiming::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(968, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(31, 31);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox2, L"Exit");
			this->pictureBox2->Click += gcnew System::EventHandler(this, &busTiming::pictureBox2_Click);
			// 
			// busTiming
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(1011, 528);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"busTiming";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Passenger";
			this->Load += gcnew System::EventHandler(this, &busTiming::busTiming_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //text show of schedules of bus
	}
	private: System::Void busTiming_Load(System::Object^  sender, System::EventArgs^  e) {
				 //load form
				 ifstream read;
				 String^ pr = textBox1->Text;
				 string  print = msclr::interop::marshal_as<string>(pr);
				 ifstream in;
				 in.open("timing.txt");
				 string depart, arrivall, busTime, ex, ex1;
				 in >> depart;
				 in >> arrivall;
				 in >> busTime;
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
						 str3 = gcnew String(busTime.c_str());
						 textBox1->AppendText("->(Departure)  ");
						 textBox1->AppendText(str1);
						 textBox1->AppendText("  >>(Arrival)  ");
						 textBox1->AppendText(str2);
						 textBox1->AppendText("  >>  ");
						 textBox1->AppendText(str3);
						 textBox1->AppendText("\n");
						 //in.close();
						 temp = 1;
					 }
					 in >> depart;
					 in >> arrivall;
					 in >> busTime;
					 getline(read, ex, '.');
					 getline(read, ex1);
					 if (getline(in, ex1, '\n')){
						 temp = 0;
					 }
				 }
				 in.close();
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //exit
				 Application::Exit();
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //back
			 this->Hide();
}
};
}
