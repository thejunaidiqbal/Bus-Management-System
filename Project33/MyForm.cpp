#include "MyForm.h"
#include"ticketIssuer.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project33::MyForm form;
	Application::Run(%form);
}