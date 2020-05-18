#pragma once
#include<fstream>
#include<string>
#include<sstream>
#include <msclr\marshal_cppstd.h>
using namespace std;

namespace Project33 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ifstream in;

			/*String^ msg = textBox1->Text;
			std::string m = msclr::interop::marshal_as<string>(msg);*/
			string x;
			string y;
			string z;
			string a;
			String ^str1;
			String ^str2;
			String^ str3;
			int temp = 0;
			try{
				in.open("VehicleData.txt");
			}
			catch (exception& e){
				label19->Show();
				label19->Text = gcnew String(e.what());
			}
			while (!in.eof())
			{
				if (temp == 0)
				{
					in >> x;
					in >> y;
					in >> a;
					getline(in, z, ' ');
					str1 = gcnew String(x.c_str());
					str2 = gcnew String(y.c_str());
					str3 = gcnew String(a.c_str());
					textBox1->AppendText(str1);             // display the the name of the sender in the from textbox
					textBox1->AppendText(":  ");
					textBox1->AppendText(str2);         // display the message of the sender in the message textbox
					textBox1->AppendText(" ");
					textBox1->AppendText(str3);
					textBox1->AppendText("\n");
					//in.close();
					temp = 1;
				}
				in >> x;
				in >> y;
				in >> a;
				if (getline(in, z, '\n')){
					temp = 0;
				}

			}

			in.close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel4;
	protected:
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;

	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->panel1);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->button21);
			this->panel4->Controls->Add(this->button20);
			this->panel4->Controls->Add(this->button19);
			this->panel4->Controls->Add(this->textBox14);
			this->panel4->Controls->Add(this->textBox13);
			this->panel4->Controls->Add(this->label25);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Controls->Add(this->textBox12);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1011, 528);
			this->panel4->TabIndex = 25;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel4_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(899, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"File can\'t be exist";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::Color::Red;
			this->panel1->Location = System::Drawing::Point(464, 287);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(301, 103);
			this->panel1->TabIndex = 18;
			this->panel1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(167, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Deleted Successfully";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(76, 53);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(170, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Confirm";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(76, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L">> Delete Vehicle Data";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(8, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bus Reg#: ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(90, 142);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(172, 13);
			this->label19->TabIndex = 3;
			this->label19->Text = L"Error! File Couldn\'t be loaded";
			this->label19->Visible = false;
			this->label19->Click += gcnew System::EventHandler(this, &MyForm1::label19_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(82, 130);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(302, 265);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(290, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Delete Vehicle";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(888, 492);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 25);
			this->button21->TabIndex = 14;
			this->button21->Text = L"Back";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm1::button21_Click);
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(831, 182);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 24);
			this->button20->TabIndex = 13;
			this->button20->Text = L"Cancel";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm1::button20_Click);
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(912, 183);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 12;
			this->button19->Text = L"Assign";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm1::button19_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(570, 127);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(164, 20);
			this->textBox14->TabIndex = 10;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox14_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(794, 153);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(193, 20);
			this->textBox13->TabIndex = 9;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox13_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(756, 157);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(20, 13);
			this->label25->TabIndex = 8;
			this->label25->Text = L"To";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(537, 156);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(30, 13);
			this->label24->TabIndex = 7;
			this->label24->Text = L"From";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(570, 153);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(164, 20);
			this->textBox12->TabIndex = 6;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox12_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(461, 156);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(67, 13);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Enter Route:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(461, 130);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(58, 13);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Bus Reg.#";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(78, 100);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(209, 21);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Registered Buses are";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(12, 12);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(184, 15);
			this->label17->TabIndex = 0;
			this->label17->Text = L"> Manager >> Assign Route";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(571, 181);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 20);
			this->textBox3->TabIndex = 20;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(461, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Departure Timing";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1011, 528);
			this->Controls->Add(this->panel4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Assign Route";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 
	}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
			 //show error msg for unload file
}
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //reg. number in assign route module
}
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //enter route from wala part
}
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //enter route TO wala part
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 //cancel button in assign route
			 textBox12->Text = "";
			 textBox13->Text = ""; 
			 textBox14->Text = "";
}

private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 //assign button in assign route portion to done
			 String^n = textBox14->Text;
			 String^i = textBox12->Text;
			 String^d = textBox13->Text;
			 String^ tt = textBox3->Text;
			 string time = msclr::interop::marshal_as<string>(tt);
			 string reg = msclr::interop::marshal_as<string>(n);
			 string from = msclr::interop::marshal_as<string>(i);
			 string to = msclr::interop::marshal_as<string>(d);
			 
				 ofstream output;
				 try{
					 output.open("AssignVehicle.txt", ios::app | ios::out);
				 }
				 catch (exception& e){
					 label4->Show();
					 label4->Text = gcnew String(e.what());
				 }
				 if (reg != "" && from != "" && to != ""){
					 output << reg << " " << from << " " <<
						 " " << to << ".\n";
					 output.close();
					 MessageBox::Show("Assign Route Successful :)");
					 textBox14->Text = "";
					 textBox12->Text = "";
					 textBox13->Text = "";
					 textBox3->Text = "";
				 }
				 else
				 {
					 MessageBox::Show("Invalid Entry, No assign route");
					 textBox14->Text = "";
					 textBox12->Text = "";
					 textBox13->Text = "";
					 textBox3->Text = "";
				 }

				 //assign time
				 ofstream ot;
				 ot.open("timing.txt", ios::app | ios::out);
				 ot << from << " " << to << " " << time << ".\n";
				 ot.close();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 //back button in assign route
			 this->Hide();
}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Delete  data
				 panel1->Show();
	}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //text box for print busus data
			
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //delete bus reg#
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //cancel button to delete bus
			 textBox2->Text = "";
			 panel1->Hide();
			 panel4->Show();
}
		 /////////////////////////////////////////////////////////////////////////////////////
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //confirm data delete in bus assign data delte
			 label3->Show();
			 String^ a = textBox2->Text;
			 string name = msclr::interop::marshal_as<string>(a);
			 ifstream input;
			 ofstream temp;
			 string abc;
			 input.open("VehicleData.txt");
			 temp.open("temp.txt");
			 input >> name;
			 getline(input, abc, '\n');
			 while (getline(input, abc))
			 {
				 if (abc != name)
					 temp << abc << endl;
			 }
			 input.close();
			 temp.close();
			 remove("VehicleData.txt");
			 rename("temp.txt", "VehicleData.txt");
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //label delete show when confirm delete

}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //file cant be exist in assign done vehicle destination
}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //departture time assign 
}
};
}
