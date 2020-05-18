#include "ticketIssuer.h"
TicketIssuer RegisterOBJ;
System::Void ticketIssuer:: textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			//first name
	//RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			//last name
	//RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			//date of birth
	//RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			//mobile code 
	//RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			//mobile no.
	//RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			//driving licence
	//RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			//identity card#
	//RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			//address
	//RegisterOBJ.getRegistration(this);
}
		//////////////////////////////////////////////////////////////////////////////////////////////////
System::Void ticketIssuer::button1_Click(System::Object^  sender, System::EventArgs^  e) {
			//done registration 
	RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			//male
	//RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			//female
	//RegisterOBJ.getRegistration(this);
}
System::Void ticketIssuer::radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			//neutral
	//RegisterOBJ.getRegistration(this);
}

int TicketIssuer::getRegistration(ticketIssuer^ ptr1){
	String^ f = ptr1->textBox12->Text;
	String^ l = ptr1->textBox13->Text;
	String^ m = ptr1->textBox14->Text;
	String^ d = ptr1->textBox15->Text;
	String^ dr = ptr1->textBox16->Text;
	String^ id = ptr1->textBox17->Text;
	String^ ad = ptr1->textBox18->Text;
	String^ ass = ptr1->textBox2->Text;

	string firstName = msclr::interop::marshal_as<string>(f);
	string lastname = msclr::interop::marshal_as<string>(l);
	string mobileNo = msclr::interop::marshal_as<string>(m);
	string date = msclr::interop::marshal_as<string>(d);
	string drivingLicence = msclr::interop::marshal_as<string>(dr);
	string idCard = msclr::interop::marshal_as<string>(id);
	string address = msclr::interop::marshal_as<string>(ad);
	string asign = msclr::interop::marshal_as<string>(ass);

	if (ptr1->button1->Text == "Register"){
		ofstream output;
		try{                                                               //exception handling
			output.open("CreateTicketIssuer.txt", ios::app | ios::out);
		}
		catch (exception& e){
			ptr1->label1->Show();
			ptr1->label1->Text = gcnew String(e.what());
		}
		if (ptr1->radioButton5->Checked){
			String^ male = "Male";
			string ma = msclr::interop::marshal_as<string>(male);
			ptr1->radioButton5->PerformClick();
			output << firstName << " " << lastname << " " <<
				ma << " " << mobileNo << " " << date << " "
				<< drivingLicence << " " << asign << " " << idCard << " " << address
				<< "\n";
			output << "--\n";
		}
		else if (ptr1->radioButton6->Checked){
			String^ female = "Female";
			string fe = msclr::interop::marshal_as<string>(female);
			ptr1->radioButton6->PerformClick();
			output << firstName << " " << lastname << " " <<
				fe << " " << mobileNo << " " << date << " "
				<< drivingLicence << " "<<asign<<" " << idCard << " " << address
				<< "\n";
			output << "--\n";
		}
		else if (ptr1->radioButton7->Checked){
			String^ neutral = "Neutral";
			string neu = msclr::interop::marshal_as<string>(neutral);
			ptr1->radioButton7->PerformClick();
			output  << firstName << " " << lastname << " " <<
				neu << " " << mobileNo << " " << date << " "
				<< drivingLicence << " "<<asign<<" " << idCard << " " << address
				<< "\n";
			output << "--\n";
		}
		output.close();
	}
	MessageBox::Show("Register successful");
	ptr1->Hide();
	return 0;
}
TicketIssuerImages TII;
System::Void ticketIssuer::button19_Click(System::Object^  sender, System::EventArgs^  e){
	//done button of image upload
	openFileDialog1->ShowDialog();
	pBox = gcnew PictureBox();
	pBox->Parent = this;
	pBox->Location = Point(10, 50);
	pBox->Size = System::Drawing::Size(100, 100);
	pBox->Visible = true;
	textBox1->Controls->Add(pBox);
	pBox->ImageLocation = openFileDialog1->FileName;
	pBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

	///////////////////////////////////////////////

	openFileDialog1->ShowDialog();
	//pictureBox1->Image = "C:\users\john\Desktop\birds.png";           // if change profile picture is clicked
	pictureBox1->ImageLocation = openFileDialog1->FileName;
	TII.imagesTicketIssuer(this);
}
int TicketIssuerImages::imagesTicketIssuer(ticketIssuer^ ptr1){
	 // the location is saved in the fie "image.txt"following the username
	String^ f = ptr1->textBox12->Text;
	string firstName = msclr::interop::marshal_as<string>(f);

	ofstream out;
	try{
		out.open("TicketIssuerImages.txt", ios::app);
	}
	catch (exception&e)
	{
		//cout << "exception thorow";
		ptr1->label1->Text = gcnew String(e.what());
	}
	String^ a = ptr1->textBox1->Text;
	string b = msclr::interop::marshal_as<string>(a);
	out << firstName<<" "<<b;
	a = ptr1->openFileDialog1->FileName;
	b = msclr::interop::marshal_as<string>(a);
	out << b;
	out << "\n";
	out.close();
	return 0;
}