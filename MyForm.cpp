#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    lb2334::MyForm form;// ��'� ������ �������, ���������, myproekt ��� ��.
    Application::Run(% form);
}
