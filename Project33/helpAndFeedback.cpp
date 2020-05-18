#include "helpAndFeedback.h"
feedBack::feedBack(){}
feedBack::~feedBack(){}
feedBack *p;
feedBackSubmit::feedBackSubmit(){}
feedBackSubmit::~feedBackSubmit(){}
System::Void helpAndFeedback::button1_Click(System::Object^  sender, System::EventArgs^  e){
	feedBackSubmit fbs;
	p = &fbs;
	p->submit(this);
}
void feedBackSubmit::submit(helpAndFeedback^ ptr){
	ofstream out;
	out.open("feedBack.txt", ios::app | ios::out);
	String^ a = ptr->textBox1->Text;
	String^ b = ptr->textBox2->Text;
	String^ c = ptr->textBox3->Text;
	name = msclr::interop::marshal_as<string>(a);
	id = msclr::interop::marshal_as<string>(b);
	cmnt = msclr::interop::marshal_as<string>(c);

	if (name != ""&&id != ""&&cmnt != ""){
		out << name << " " << id << " " << cmnt << ".\n";
		MessageBox::Show("Thanks, Your FeedBack Submitted !!!");
		ptr->textBox1->Text = "";
		ptr->textBox2->Text = "";
		ptr->textBox3->Text = "";
	}
	else{
		MessageBox::Show("Complete fill Name, CNIC and Comment Box, otherwise it will failed to submit");
		ptr->textBox1->Text = "";
		ptr->textBox2->Text = "";
		ptr->textBox3->Text = "";
	}
	out.close();
}