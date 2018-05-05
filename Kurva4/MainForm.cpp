#include "MainForm.h"
#include "Table.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Kurva4::MainForm form;  //нужно указать имя своего проекта (а не test_project)
	Application::Run(%form);
}