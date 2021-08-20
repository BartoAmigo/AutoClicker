#include "Form1.h"
#include <Windows.h> 
using namespace System;
using namespace System::Windows::Forms;
using namespace std; 

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Examples::Form1 form;
	Application::Run(% form);
}