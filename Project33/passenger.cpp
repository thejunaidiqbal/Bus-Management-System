#include "passenger.h"
#include <stdexcept>

pessengerModule *Pm;
//pessengerModule objPM;

pessengerModule::pessengerModule(){
	pName = "\0";
	idcard = 0;
	departure = "\0";
	arrival = "\0";
	phone = 0;
	address = "\0";
}
pessengerModule::~pessengerModule(){
	//free the space 
}
passengerSignUp::passengerSignUp(){
}

passengerSignUp::~passengerSignUp(){
}

searchPassenger::searchPassenger()
{
}

searchPassenger::~searchPassenger()
{
}
System::Void passenger::pictureBox9_Click(System::Object^  sender, System::EventArgs^  e){
	//Pm = &objPM;
	passengerSignUp objSign;
	Pm = &objSign;
	Pm->signUp(this);
	panel1->Location = Point(0, 0);
	while (panel1->Location.X != -374){
		panel1->Location = Point(panel1->Location.X - 1, 0);
		// System::Threading::Thread::Sleep(0.2);
		label11->Hide();
	}
	//panel4->Show();
}

void passengerSignUp::signUp(passenger^ ptr){
	if (ptr->checkBox2->Checked == false && ptr->checkBox1->Checked == false)
	{
		MessageBox::Show("Error, Please Complete Form");
	}
	else
	{
		String^n = ptr->textBox1->Text;
		String^i = ptr->textBox2->Text;
		String^d = ptr->textBox3->Text;
		String^a = ptr->textBox4->Text;
		String^p = ptr->textBox5->Text;
		String^add = ptr->textBox6->Text;
		bool temp = false;
		bool temp1 = false;
		pName = msclr::interop::marshal_as<string>(n);
		try{
			idcard = System::Convert::ToInt16(i);
			if (idcard <= 0){
				throw true;
			}
			//temp = true;
		}
		catch (double){
			ptr->label11->Show();
		}
		catch (char){
			ptr->label11->Show();
		}
		catch (...){
			ptr->label11->Show();
		}
		departure = msclr::interop::marshal_as<string>(d);
		arrival = msclr::interop::marshal_as<string>(a);
		try{
			phone = System::Convert::ToInt16(p);
			if (phone <= 0){
				throw true;
			}
			//temp1 = true;
		}
		catch (double){
			ptr->label11->Show();
		}
		catch (char){
			ptr->label11->Show();
		}
		catch (...){
			ptr->label11->Show();
		}
		address = msclr::interop::marshal_as<string>(add);

		////////////////////////////////////////////////////////
		ofstream output;
		try{                                                        
			output.open("CreatePassenger.txt", ios::app | ios::out);
		}
		catch (exception& e){
			ptr->label11->Show();
			ptr->label11->Text = gcnew String(e.what());
		}
		if (ptr->checkBox1->Checked){
			String^ male = "Male";
			string ma = msclr::interop::marshal_as<string>(male);
			output << pName << " " << idcard << " " <<
				" " << departure << " " << arrival << " "
				<< phone << " " << ma << " " << address << ".\n";
		}
		else if (ptr->checkBox2->Checked){
			String^ female = "Female";
			string fe = msclr::interop::marshal_as<string>(female);
			output << pName << " " << idcard << " " <<
				" " << departure << " " << arrival << " "
				<< phone << " " << fe << " " << address << ".\n";
		}
		output.close();
	}
	MessageBox::Show("Your Seat Reserved Successful");
}
///////////////////////////////////////////////////////////////////////////////
searchPassenger sp;
System::Void passenger::pictureBox61_Click(System::Object^  sender, System::EventArgs^  e){
	//search passenger
	label63->Visible = false;
	sp.search(this);
	
}
void searchPassenger::search(passenger^ ptr){
	String^ a = ptr->textBox7->Text;
	Pname = msclr::interop::marshal_as<string>(a);
	ifstream read;
	read.open("CreatePassenger.txt");
	string x;
	string y;
	string z;
	string u;                                          // search wala kam kara rha ha
	bool checker = false;
	read >> x;
	read >> y;
	getline(read, z, ' ');
	getline(read, u);
	while (!read.eof() && !checker)
	{
		if (Pname == x)
		{
			MessageBox::Show("Username Found");
			checker = true;
			read.close();
			ptr->panel5->Show();
			/////////////////////////////////////////////////////////////////////
			String^ pr = ptr->textBox8->Text;
			string  print = msclr::interop::marshal_as<string>(pr);
			ifstream in;
			in.open("CreatePassenger.txt");
			string nm, id, dep, arr, gndr, add, ex, ex1, ph;
			in >> nm;
			in >> id;
			in >> dep;
			in >> arr;
			in >> ph;
			in >> gndr;
			in >> add;
			getline(read, ex, '.');
			getline(read, ex1);
			String^ str1;
			String^ str2;
			String^ str3;
			String^ str4;
			String^ str5;
			String^ str6;
			String^ str7;
			/////////////////////////////////////////////////////////////////
			int temp = 0;
				while (!in.eof())
				{
					if (temp == 0)
					{
						str1 = gcnew String(nm.c_str());
						str2 = gcnew String(id.c_str());
						str3 = gcnew String(dep.c_str());
						str4 = gcnew String(arr.c_str());
						str5 = gcnew String(ph.c_str());
						str6 = gcnew String(gndr.c_str());
						str7 = gcnew String(add.c_str());
						ptr->textBox8->AppendText(str1);            
						ptr->textBox8->AppendText("->    ");
						ptr->textBox8->AppendText(str2);
						ptr->textBox8->AppendText("  >>  ");
						ptr->textBox8->AppendText(str3);
						ptr->textBox8->AppendText("  >>  ");
						ptr->textBox8->AppendText(str4);
						ptr->textBox8->AppendText("  >>  ");
						ptr->textBox8->AppendText(str5);
						ptr->textBox8->AppendText("  >>  ");
						ptr->textBox8->AppendText(str6);
						ptr->textBox8->AppendText("  >>  ");
						ptr->textBox8->AppendText(str7);
						ptr->textBox8->AppendText("\n");
						//in.close();
						temp = 1;
					}
					in >> nm;
					in >> id;
					in >> dep;
					in >> arr;
					in >> ph;
					in >> gndr;
					in >> add;
					getline(read, ex, '.');
					getline(read, ex1);
					if (getline(in, ex1, '\n')){
						temp = 0;
					}

					//}
				}
			in.close();
			//////////////////////////////////////////////////////////////////

			/////////////////////////////////////////////////////////////////////
		}
		read >> x;
		read >> y;
		getline(read, z, ' ');
		getline(read, u);
	}
	if (checker == false)
	{
		ptr->panel5->Hide();
		MessageBox::Show("Username Not Found");
		ptr->textBox7->Text = "";
		read.close();
	}
}