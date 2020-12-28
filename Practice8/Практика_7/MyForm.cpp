#include "MyForm.h"
using namespace WindowsForm; // Имя проекта.
[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm()); // Имя формы.
	return 0;
}

//using namespace System;
//using namespace System::Windows::Forms;
//[STAThread]
//void main(array<String^>^ arg) {
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//	WindowsForm::MyForm form;   // Вместо Project - имя проекта
//	Application::Run(%form);
//}

