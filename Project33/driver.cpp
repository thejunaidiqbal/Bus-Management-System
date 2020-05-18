#include "driver.h"
DriverModule driverObj;
System::Void driver:: button2_Click(System::Object^  sender, System::EventArgs^  e){
	//login button
	driverObj.loginDriver(this);
	if (textBox1->Text == ""&&textBox2->Text == ""){
		label19->Show();
	}
}
int DriverModule::loginDriver(driver^ ptr){
	String^ a = ptr->textBox1->Text;
	string name = msclr::interop::marshal_as<string>(a);
	String ^x = ptr->textBox2->Text;
	string password = msclr::interop::marshal_as<string>(x);
	ifstream read;
	try{
		read.open("DriverLogin.txt");
	}
	catch (exception&e)
	{
		//cout << "exception thorow";
		ptr->label4->Text = gcnew String(e.what());
	}
	string user;
	string pass;
	bool checker = false;
	read >> user;
	read >> pass;
	/*getline(read, ques, '?');
	getline(read, ans);*/
	while (!checker && !read.eof())
	{
		if (name == user && password == pass)
		{
			MessageBox::Show("LogIn SuccessFull");      // login successfull if the username and password are correct
			ptr->label19->Hide();
			read.close();
			checker = true;
			//////////////////
			//panels show
			ptr->panel1->Show();
			/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			{
				ifstream in;
				try{
					in.open("AssignDriver.txt");
				}
				catch (exception&e)
				{
					//cout << "exception thorow";
					ptr->label27->Text = gcnew String(e.what());
				}
				String^ nm = ptr->textBox1->Text;
				string convrtName = msclr::interop::marshal_as<string>(nm);
				string bss;
				string tp;
				string z;
				
				while (!in.eof())
				{
					in >> bss;
					in >> tp;
					getline(in, z, '.');
					if (convrtName == bss)
					{
						String ^str1 = gcnew String(convrtName.c_str());
						ptr->label23->Text = str1;
						str1 = gcnew String(tp.c_str());
						ptr->label24->Text = str1;

						int total = 0;
						string lines;
						ifstream innn("ReservedSeats.txt");
						while (getline(innn, lines))
						{
							
								++total;
						}
						if (total == 1){
							total = 0;
						}
						String^ str2;
						str2 = System::Convert::ToString(total);
						ptr->label26->Text = str2;
						innn.close();
						//in.close();

					}
					in >> bss;
					in >> tp;
					getline(in, z, '.');

				}
				in.close();
			}
			////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		}
		else if (name == user && password != pass)
		{
			MessageBox::Show("Password is incorrect");   // if password is incorrect display msg
			read.close();
			checker = true;
		}
		read >> user;
		read >> pass;
		/*getline(read, ques, '?');
		getline(read, ans);*/
	}
	if (checker == false)
	{
		MessageBox::Show("ID not exist");
		//cout << "exception thorow" << endl;                          // if pass and username does not exist
		read.close();

	}

	return 0;
}
forgetPassword forPass;
System::Void driver:: button5_Click(System::Object^  sender, System::EventArgs^  e){
	//save update password
	forPass.forget(this);
	groupBox2->Hide();
	if (textBox10->Text == "" && textBox11->Text == "" && textBox12->Text == ""){
		//MessageBeep(0xFFFFFFFF);
		groupBox2->Show();
		MessageBox::Show("Error, Please Enter Current and New Password");
	}
}
int forgetPassword::forget(driver^ ptr){

	String^ a = ptr->textBox10->Text;
	string b = msclr::interop::marshal_as<string>(a);
	ifstream read;
	ofstream var;
	try{
		read.open("DriverLogin.txt");
		var.open("temp.txt");
	}
	catch (exception&e){
		ptr->label18->Text = gcnew String(e.what());

	}
	string x;
	string y;
	//string z;                                          // change password succssfully
	//String ^str1;
	String ^str2;
	read >> x;
	read >> y;
	//getline(read, z, ' ');
	while (!read.eof())
	{
		if (b == x)
		{
			//str1 = gcnew String(u.c_str());
			str2 = gcnew String(y.c_str());
			if (ptr->textBox10->Text == str2)
			{
				if (ptr->textBox11->Text == ptr->textBox12->Text)
				{

					String^ a = ptr->textBox12->Text;
					string b = msclr::interop::marshal_as<string>(a);
					var << x << " "; var << b << " " << "\n";
					read >> x;
					read >> y;
					/*getline(read, z, ' ');
					getline(read, u);*/

					MessageBox::Show("Password Successfully Changed");
				}
				else
				{
					MessageBox::Show("Re-Enter Password");
				}
			}
			else
			{
				MessageBox::Show("Incorrect Current Password");
			}
		}
		var << x << " "; var << y << " " << "\n";
		read >> x;
		read >> y;
	}
	read.close();
	var.close();
	remove("DriverLogin.txt");
	rename("temp.txt", "DriverLogin.txt");
	return 0;
}