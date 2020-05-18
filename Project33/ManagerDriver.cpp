#include "ManagerDriver.h"
assign ass;
System::Void ManagerDriver::button9_Click(System::Object^  sender, System::EventArgs^  e){
	ass.driverAss(this);
}
int assign::driverAss(ManagerDriver^ ptr){
	String^ id = ptr->textBox14->Text;
	String^ bus = ptr->textBox15->Text;

	//////////////////////////////////////////////////////////////////////////////////////
	string user = msclr::interop::marshal_as<string>(id);
	string regBus = msclr::interop::marshal_as<string>(bus);
	if (ptr->button9->Text == "Confirm"){
		ofstream output;
		///////////////////////////////////////////////////////////////////////////
		String^ a = ptr->textBox14->Text;
		string b = msclr::interop::marshal_as<string>(a);
		ifstream out;
		out.open("DriverLogin.txt");
		string x;
		string y;
		//string z;
		//string u;
		out >> x;
		// out >> y;
		//getline(out, y, ' ');
		//getline(out, u);
		while (!out.eof())
		{
			if (b != x)
			{
				MessageBox::Show("Driver can't be exist");
				ptr->textBox14->Text = "";
			}
			else{
				try{                                                               //exception handling
					output.open("AssignDriver.txt", ios::app | ios::out);
				}
				catch (exception& e){
					ptr->label1->Show();
					ptr->label1->Text = gcnew String(e.what());
				}
				output << user << " " << regBus << ".\n";
				output.close();
			}
			out >> x;
			//out >> y;
			//getline(out, y, '\n');
			//if (b == x){ continue; }

			// getline(out, u);

		}

		/////////////////////////////////////////////////////////////////////////
		out.close();
	}

	return 0;
}