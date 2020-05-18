#include "managerTicketIssuer.h"
issuer::issuer(){

}
issuer::~issuer(){

}
ticketIss::ticketIss(){

}
ticketIss::~ticketIss(){

}
sentData::sentData(){

}
sentData::~sentData(){

}
issuer *iss;
System::Void managerTicketIssuer::button1_Click(System::Object^  sender, System::EventArgs^  e){
	//sign in for ticket issue portal
	ticketIss ti;
	iss = &ti;
	iss->ticketIssue(this);
}

void ticketIss::ticketIssue(managerTicketIssuer^ ptr){
	String^ a = ptr->textBox1->Text;
	string name = msclr::interop::marshal_as<string>(a);
	String ^x = ptr->textBox2->Text;
	string password = msclr::interop::marshal_as<string>(x);
	ifstream read;
	try{
		read.open("CreateTicketIssuer.txt");
	}
	catch (exception&e)
	{
		//cout << "exception thorow";
		ptr->label4->Text = gcnew String(e.what());
	}
	string user;
	string pass;
	string avin;
	bool checker = false;
	read >> user;
	read >> pass;

	while (!checker && !read.eof())
	{
		if (name == user && password == pass)
		{
			MessageBox::Show("LogIn SuccessFull");      // login successfull if the username and password are correct
			read.close();
			checker = true;
			/////////////////////////////////////////////////////////////

			ptr->panel1->Location = Point(-849, 0);
			while (ptr->panel1->Location.X != -849){
				ptr->panel1->Location = Point(ptr->panel1->Location.X + 1, 0);
				System::Threading::Thread::Sleep(10);
			}



			////////////////////////////////////////////////
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			ifstream in;
			try{
				in.open("CreateTicketIssuer.txt");
			}
			catch (exception&e)
			{
				//cout << "exception thorow";
				ptr->label4->Text = gcnew String(e.what());
			}
			String^ a = ptr->textBox1->Text;
			string b = msclr::interop::marshal_as<string>(a);
			string fname,sname;
			string gender;
			string phone;                          // display all information from about.txt in the about tab
			string date;
			string licence;
			string bus;
			string z;
			in >> fname;
			in >> sname;
			in >> gender;
			in >> phone;
			in >> date;
			in >> licence;
			in >> bus;
			getline(in, z, '\n');
			while (!in.eof())
			{

				if (b == fname)
				{
					String ^str1 = gcnew String(fname.c_str());
					String^ str2 = gcnew String(sname.c_str());
					ptr->textBox3->Text = str1;
					ptr->textBox3->AppendText(" ");
					ptr->textBox3->AppendText(str2);
					//ptr->textBox3->Text = str2;
					str1 = gcnew String(gender.c_str());
					ptr->textBox4->Text = str1;
					str1 = gcnew String(phone.c_str());
					ptr->textBox5->Text = str1;
					str1 = gcnew String(date.c_str());
					ptr->textBox6->Text = str1;
					str1 = gcnew String(licence.c_str());
					ptr->textBox7->Text = str1;
					str1 = gcnew String(bus.c_str());
					ptr->textBox8->Text = str1;
				}
				in >> fname;
				in >> sname;
				in >> gender;
				in >> phone;
				in >> date;
				in >> licence;
				in >> bus;
				getline(in, z, '\n');
			}
			///////////////////////////////////////////////////////////////////////////////////////////
			ifstream innn;                                
			innn.open("TicketIssuerImages.txt");
			string ab;
			string cd;
			String ^str11;
			innn >> ab;
			innn >> cd;

			while (!innn.eof())                         
			{
				if (name == ab)
				{
					str11 = gcnew String(cd.c_str());
					ptr->pictureBox3->ImageLocation = str11;
				}
				innn >> ab;
				innn >> cd;
			}
			innn.close();


			////////////////////////////////////////////////////////////////////////////////////////
			in.close();
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		}
		else if (name == user && password != pass)
		{
			MessageBox::Show("Password is incorrect");   // if password is incorrect display msg
			read.close();
			checker = true;
		}
		read >> user;
		read >> pass;
	}
	if (checker == false)
	{
		MessageBox::Show("ID not exist");
		//cout << "exception thorow" << endl;                          // if pass and username does not exist
		read.close();

	}
}
System::Void managerTicketIssuer::pictureBox8_Click(System::Object^  sender, System::EventArgs^  e){
	//sent forget password cmnts
	sentData sd;
	sd.sentForget(this);
	panel3->Location = Point(0, 0);
	while (panel3->Location.X != -331){
		panel3->Location = Point(panel3->Location.X - 1, 0);
		System::Threading::Thread::Sleep(2);
	}
}
void sentData::sentForget(managerTicketIssuer^ ptr){
	ofstream out;
	try{
		out.open("notificationManagerFromTicketIssuer.txt", ios::app);
	}
	catch (exception&e)
	{
		//cout << "exception thorow";
		ptr->label4->Text = gcnew String(e.what());
	}
	String^ a = ptr->textBox10->Text;
	string name = msclr::interop::marshal_as<string>(a);
	a = ptr->textBox10->Text;                              
	name = msclr::interop::marshal_as<string>(a);
	out << name;
	out << " ";
	a = ptr->textBox9->Text;
	name = msclr::interop::marshal_as<string>(a);
	out << name << ";";                                  
	out << "\n";
	out.close();

	MessageBox::Show("Forget Information Sent to Manager");
	ptr->textBox10->Text = "";
	ptr->textBox9->Text = "";

	out.close();
}