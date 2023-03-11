#include "Login.h"
#include "SignUp.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
int main(cli::array<String^>^) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CCasino::Login form;
	Application::Run(% form);
}



