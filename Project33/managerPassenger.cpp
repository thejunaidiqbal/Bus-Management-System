#include "managerPassenger.h"
#include<sstream>

template <class input>
inline string convert(input data){
	ostringstream oStream;
	oStream << data;
	return oStream.str();
}

template<typename Seat, typename size>
inline void sortSeats(Seat s[], size sz){
	int temp;
	for (int i = 0; i < sz - 1; i++){
		for (int j = 0; j < sz - (i + 1); j++){
			if (s[j] > s[j + 1]){
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}
passengerManar::passengerManar()
{
}

passengerManar::~passengerManar()
{
}
passengerManar *pm;
registerPass::registerPass(){

}
registerPass::~registerPass(){

}
seatShow::seatShow(){

}
seatShow::~seatShow(){

}
deletePassenger::deletePassenger(){

}
deletePassenger::~deletePassenger(){

}
seatShow objShow;
deletePassenger dp;
System::Void managerPassenger::button2_Click(System::Object^  sender, System::EventArgs^  e){
	//show register passenger and bus seat
	registerPass rp;
	pm = &rp;
	pm->registerPassener(this);
	objShow.showUp(this);
}
System::Void managerPassenger::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e){
	//register passenger show
	//pm = &rp;
}
System::Void managerPassenger::textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e){
	//register reserved seats show
}
System::Void managerPassenger::button1_Click(System::Object^  sender, System::EventArgs^  e){
	//confirm to delete the passenger
	dp.recordDelete(this);
}

void registerPass::registerPassener(managerPassenger^ ptr){
	ifstream in;
	ifstream read;
	read.open("CreatePassenger.txt");
	in.open("CreatePassenger.txt");
	string ex, ex1;
	in >> name;
	in >> idCard;
	in >> departure;
	in >> arrival;
	in >> phone;
	in >> gender;
	in >> address;
	getline(read, ex, '.');
	getline(read, ex1);
	String^ str1;
	String^ str2;
	String^ str3;
	String^ str4;
	String^ str5;
	String^ str6;
	String^ str7;
	string idd, phon;
	/////////////////////////////////////////////////////////////////
	int temp = 0;
	while (!in.eof())
	{
		if (temp == 0)
		{
			str1 = gcnew String(name.c_str());
			idd += convert(idCard);
			str2 = gcnew String(idd.c_str());
			str3 = gcnew String(departure.c_str());
			str4 = gcnew String(arrival.c_str());
			phon += convert(phone);
			str5 = gcnew String(phon.c_str());
			str6 = gcnew String(gender.c_str());
			str7 = gcnew String(address.c_str());
			ptr->textBox1->AppendText(str1);
			ptr->textBox1->AppendText("->    ");
			ptr->textBox1->AppendText(str2);
			ptr->textBox1->AppendText("  >>  ");
			ptr->textBox1->AppendText(str3);
			ptr->textBox1->AppendText("  >>  ");
			ptr->textBox1->AppendText(str4);
			ptr->textBox1->AppendText("  >>  ");
			ptr->textBox1->AppendText(str5);
			ptr->textBox1->AppendText("  >>  ");
			ptr->textBox1->AppendText(str6);
			ptr->textBox1->AppendText("  >>  ");
			ptr->textBox1->AppendText(str7);
			ptr->textBox1->AppendText("\n");
			//in.close();
			temp = 1;
		}
		in >> name;
		in >> idCard;
		in >> departure;
		in >> arrival;
		in >> phone;
		in >> gender;
		in >> address;
		getline(read, ex, '.');
		getline(read, ex1);
		if (getline(in, ex1, '\n')){
			temp = 0;
		}
	}
	in.close();
	read.close();
	////////////////////////////////////////////////////////////////////
}

void seatShow::showUp(managerPassenger^ ptr){
	ifstream input;
	input.open("ReservedSeats.txt");
	input >> seats[arraySize];
	while (input){
		arraySize++;
		input >> seats[arraySize];
	}
	seats[arraySize] = '\0';
	sortSeats(seats, arraySize);
	for (int i = 0; i < arraySize; i++){
		String^ str;
		string a;
		a += convert(seats[i]);
		str = gcnew String(a.c_str());
		ptr->textBox4->AppendText("*");
		ptr->textBox4->AppendText(str);
		ptr->textBox4->AppendText(",    ");
	}
	input.close();
}

void deletePassenger::recordDelete(managerPassenger^ ptr){
	String^ a = ptr->textBox2->Text;
	name = msclr::interop::marshal_as<string>(a);
	String^ b = ptr->textBox3->Text;
	cnic = msclr::interop::marshal_as<string>(b);
	ifstream input;
	ofstream temp;
	string abc;
	input.open("CreatePassenger.txt");
	temp.open("temp.txt");
	input >> name;
	input >> cnic;
	getline(input, abc, '\n');
	while (getline(input, abc))
	{
		if (abc != name)
			temp << abc << endl;
	}
	input.close();
	temp.close();
	remove("CreatePassenger.txt");
	rename("temp.txt", "CreatePassenger.txt");
}