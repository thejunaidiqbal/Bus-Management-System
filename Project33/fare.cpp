#include "fare.h"
fareAndDiscount::fareAndDiscount()
{
}

fareAndDiscount::~fareAndDiscount()
{
}
assignFare::assignFare()
{
}

assignFare::~assignFare()
{
}
fareAndDiscount *fad;
System::Void fare::button1_Click(System::Object^  sender, System::EventArgs^  e){
	//confirm button to assign fare for fix point of arrival and deprt bus
	assignFare af;
	fad = &af;
	fad->managerFare(this);
}

void assignFare::managerFare(fare^ ptr){
	String^n = ptr->textBox3->Text;
	String^i = ptr->textBox4->Text;
	String^d = ptr->textBox7->Text;
	departure = msclr::interop::marshal_as<string>(n);
	try{
		farePrice = System::Convert::ToInt16(d);
		if (farePrice <= 0||farePrice== ' '){
			throw true;
		}
		//temp = true;
	}
	catch (double){
		ptr->label13->Show();
	}
	catch (char){
		ptr->label13->Show();
	}
	catch (...){
		ptr->label13->Show();
		farePrice = NULL;
	}

	arrival = msclr::interop::marshal_as<string>(i);
	if (farePrice <= 0 && farePrice != ' '){
		ofstream output;
		try{
			output.open("faresAssign.txt", ios::app | ios::out);
		}
		catch (exception& e){
			ptr->label14->Show();
			ptr->label14->Text = gcnew String(e.what());
		}

		output << departure << " " << arrival << " " <<
			" " << farePrice << ".\n";
		output.close();
		MessageBox::Show("Assign Fare Successful :)");
		ptr->textBox3->Text = "";
		ptr->textBox4->Text = "";
		ptr->textBox7->Text = "";
	}
	else
	{
		MessageBox::Show("Invalid Entry, Sorry no Assign Fare :(");
		ptr->label13->Show();
		ptr->textBox3->Text = "";
		ptr->textBox4->Text = "";
		ptr->textBox7->Text = "";
	}
}