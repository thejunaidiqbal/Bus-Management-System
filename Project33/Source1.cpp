#include"MyForm.h"
notification::notification(){

}
notification::~notification(){

}
System::Void MyForm::pictureBox7_Click(System::Object^  sender, System::EventArgs^  e){
	notification n;
	Refresh();
	panel5->Location = Point(-378, 0);
	while (panel5->Location.X != 0){
		panel5->Location = Point(panel5->Location.X + 1, 0);
		System::Threading::Thread::Sleep(1);
	}
	n.seen(this);
}
void notification::seen(MyForm^ ptr){
	managerTicketIssuer^ mt = gcnew managerTicketIssuer();
	mt->textBox10->Text;
	ifstream in;
	in.open("notificationManagerFromTicketIssuer.txt");
	//try
	//{
	//	
	//}
	//catch (exception&e)
	//{
	//	//ptr->label5->Text = gcnew String(e.what());
	//}
	/*String^ msg = mt->textBox10->Text;
	string m = msclr::interop::marshal_as<string>(msg);*/
	string w;
	string x;
	string y;
	string z;
	String ^str1;
	String ^str2;
	String ^ str3;
	String ^ str4;
	int temp = 0;
	in >> w;
	in >> x;                         
	in >> y;
	getline(in, z, ';');
	while (!in.eof())
	{
		if (w == w)
		{
			temp++;
		}
		in >> w;
		in >> x;
		in >> y;
		getline(in, z, ';');
	}
	if (temp == 1)                 
		MessageBox::Show("One New Notification");
	else if (temp > 1)
		MessageBox::Show("New Notifications");
	in.close();

	in.open("notificationManagerFromTicketIssuer.txt");
	in >> w;
	in >> x;
	in >> y;
	getline(in, z, ';');
	while (!in.eof())
	{
		if (w == w)
		{
			str3= gcnew String(w.c_str());
			str1 = gcnew String(x.c_str());
			str2 = gcnew String(y.c_str());
			str4 = gcnew String(z.c_str());
			ptr->textBox19->AppendText(str3);             // display the the name of the sender in the from textbox
			ptr->textBox19->AppendText(":  ");
			ptr->textBox19->AppendText(str1);  
			ptr->textBox19->AppendText("  ");
			ptr->textBox19->AppendText(str2); 
			ptr->textBox19->AppendText("  ");
			ptr->textBox19->AppendText(str4);           // display the message of the sender in the message textbox
			ptr->textBox19->AppendText("\n");
			//in.close();

		}
		in >> w;
		in >> x;
		in >> y;
		getline(in, z, ';');
	}
	in.close();
}