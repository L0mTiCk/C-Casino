#pragma once
#include "SignIn.h"
#include "SignUp.h"
#include "MainScreen.h"
#include <msclr/marshal_cppstd.h>
#include <string>

using namespace msclr::interop;

namespace CCasino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	bool showPassBool = false;

	/// <summary>
	/// Сводка для Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ signInButton;
	private: System::Windows::Forms::Label^ enteringLable;
	protected:

	protected:

	private: System::Windows::Forms::Label^ loginLable;
	private: System::Windows::Forms::Label^ passLable;


	private: System::Windows::Forms::TextBox^ loginTextField;
	private: System::Windows::Forms::TextBox^ passwordTextField;
	private: System::Windows::Forms::LinkLabel^ registLable;
	private: System::Windows::Forms::Label^ confirmPassLable;


	private: System::Windows::Forms::TextBox^ confirmPassTextField;
	private: System::Windows::Forms::PictureBox^ showPass;
	private: System::Windows::Forms::Label^ errorPassLable;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->signInButton = (gcnew System::Windows::Forms::Button());
			this->enteringLable = (gcnew System::Windows::Forms::Label());
			this->loginLable = (gcnew System::Windows::Forms::Label());
			this->passLable = (gcnew System::Windows::Forms::Label());
			this->loginTextField = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextField = (gcnew System::Windows::Forms::TextBox());
			this->registLable = (gcnew System::Windows::Forms::LinkLabel());
			this->confirmPassLable = (gcnew System::Windows::Forms::Label());
			this->confirmPassTextField = (gcnew System::Windows::Forms::TextBox());
			this->showPass = (gcnew System::Windows::Forms::PictureBox());
			this->errorPassLable = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->showPass))->BeginInit();
			this->SuspendLayout();
			// 
			// signInButton
			// 
			this->signInButton->Location = System::Drawing::Point(500, 394);
			this->signInButton->Margin = System::Windows::Forms::Padding(4);
			this->signInButton->Name = L"signInButton";
			this->signInButton->Size = System::Drawing::Size(141, 37);
			this->signInButton->TabIndex = 0;
			this->signInButton->Text = L"Sign in";
			this->signInButton->UseVisualStyleBackColor = true;
			this->signInButton->Click += gcnew System::EventHandler(this, &Login::signInButton_Click);
			// 
			// enteringLable
			// 
			this->enteringLable->AutoSize = true;
			this->enteringLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enteringLable->Location = System::Drawing::Point(304, 50);
			this->enteringLable->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->enteringLable->Name = L"enteringLable";
			this->enteringLable->Size = System::Drawing::Size(580, 29);
			this->enteringLable->TabIndex = 1;
			this->enteringLable->Text = L"Ввойдите/зарегистрируйтесь для продолжения.";
			this->enteringLable->Click += gcnew System::EventHandler(this, &Login::label1_Click_1);
			// 
			// loginLable
			// 
			this->loginLable->AutoSize = true;
			this->loginLable->Location = System::Drawing::Point(133, 166);
			this->loginLable->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->loginLable->Name = L"loginLable";
			this->loginLable->Size = System::Drawing::Size(40, 16);
			this->loginLable->TabIndex = 2;
			this->loginLable->Text = L"Login";
			// 
			// passLable
			// 
			this->passLable->AutoSize = true;
			this->passLable->Location = System::Drawing::Point(137, 251);
			this->passLable->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->passLable->Name = L"passLable";
			this->passLable->Size = System::Drawing::Size(67, 16);
			this->passLable->TabIndex = 3;
			this->passLable->Text = L"Password";
			// 
			// loginTextField
			// 
			this->loginTextField->ForeColor = System::Drawing::SystemColors::WindowText;
			this->loginTextField->Location = System::Drawing::Point(137, 206);
			this->loginTextField->Margin = System::Windows::Forms::Padding(4);
			this->loginTextField->Name = L"loginTextField";
			this->loginTextField->Size = System::Drawing::Size(232, 22);
			this->loginTextField->TabIndex = 4;
			this->loginTextField->Text = L"Login";
			this->loginTextField->TextChanged += gcnew System::EventHandler(this, &Login::loginTextField_TextChanged);
			// 
			// passwordTextField
			// 
			this->passwordTextField->ForeColor = System::Drawing::SystemColors::WindowText;
			this->passwordTextField->Location = System::Drawing::Point(137, 290);
			this->passwordTextField->Margin = System::Windows::Forms::Padding(4);
			this->passwordTextField->Name = L"passwordTextField";
			this->passwordTextField->PasswordChar = '*';
			this->passwordTextField->Size = System::Drawing::Size(232, 22);
			this->passwordTextField->TabIndex = 5;
			this->passwordTextField->Text = L"Password";
			this->passwordTextField->TextChanged += gcnew System::EventHandler(this, &Login::passwordTextField_TextChanged);
			// 
			// registLable
			// 
			this->registLable->AutoSize = true;
			this->registLable->Location = System::Drawing::Point(137, 335);
			this->registLable->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->registLable->Name = L"registLable";
			this->registLable->Size = System::Drawing::Size(228, 16);
			this->registLable->TabIndex = 6;
			this->registLable->TabStop = true;
			this->registLable->Text = L"Нет аккаунта\? Зарегистируйтесь";
			this->registLable->Click += gcnew System::EventHandler(this, &Login::registLable_Click);
			// 
			// confirmPassLable
			// 
			this->confirmPassLable->AutoSize = true;
			this->confirmPassLable->Location = System::Drawing::Point(496, 251);
			this->confirmPassLable->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->confirmPassLable->Name = L"confirmPassLable";
			this->confirmPassLable->Size = System::Drawing::Size(114, 16);
			this->confirmPassLable->TabIndex = 7;
			this->confirmPassLable->Text = L"Confirm password";
			this->confirmPassLable->Visible = false;
			this->confirmPassLable->Click += gcnew System::EventHandler(this, &Login::label1_Click_2);
			// 
			// confirmPassTextField
			// 
			this->confirmPassTextField->Location = System::Drawing::Point(500, 290);
			this->confirmPassTextField->Margin = System::Windows::Forms::Padding(4);
			this->confirmPassTextField->Name = L"confirmPassTextField";
			this->confirmPassTextField->PasswordChar = '*';
			this->confirmPassTextField->Size = System::Drawing::Size(232, 22);
			this->confirmPassTextField->TabIndex = 8;
			this->confirmPassTextField->Text = L"Password";
			this->confirmPassTextField->Visible = false;
			this->confirmPassTextField->TextChanged += gcnew System::EventHandler(this, &Login::confirmPassTextField_TextChanged);
			// 
			// showPass
			// 
			this->showPass->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showPass.ErrorImage")));
			this->showPass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showPass.Image")));
			this->showPass->Location = System::Drawing::Point(391, 287);
			this->showPass->Margin = System::Windows::Forms::Padding(4);
			this->showPass->MaximumSize = System::Drawing::Size(32, 30);
			this->showPass->Name = L"showPass";
			this->showPass->Size = System::Drawing::Size(32, 30);
			this->showPass->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->showPass->TabIndex = 9;
			this->showPass->TabStop = false;
			this->showPass->Click += gcnew System::EventHandler(this, &Login::showPass_Click);
			// 
			// errorPassLable
			// 
			this->errorPassLable->AutoSize = true;
			this->errorPassLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->errorPassLable->ForeColor = System::Drawing::Color::Red;
			this->errorPassLable->Location = System::Drawing::Point(496, 330);
			this->errorPassLable->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->errorPassLable->Name = L"errorPassLable";
			this->errorPassLable->Size = System::Drawing::Size(343, 22);
			this->errorPassLable->TabIndex = 10;
			this->errorPassLable->Text = L"Ошибка, пароли должны совпадать";
			this->errorPassLable->Visible = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1172, 513);
			this->Controls->Add(this->errorPassLable);
			this->Controls->Add(this->showPass);
			this->Controls->Add(this->confirmPassTextField);
			this->Controls->Add(this->confirmPassLable);
			this->Controls->Add(this->registLable);
			this->Controls->Add(this->passwordTextField);
			this->Controls->Add(this->loginTextField);
			this->Controls->Add(this->passLable);
			this->Controls->Add(this->loginLable);
			this->Controls->Add(this->enteringLable);
			this->Controls->Add(this->signInButton);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->showPass))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void loginTextField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void passwordTextField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//making text red if length < 6

		if (this->passwordTextField->Text->Length < 6)
			this->passwordTextField->ForeColor = Color::Red;
		else
		{
			this->passwordTextField->ForeColor = Color::Black;
		}
	}
	private: System::Void registLable_Click(System::Object^ sender, System::EventArgs^ e) {
		//changing mode from register to login
		//enable / disable confirm password field
		this->confirmPassLable->Visible = !confirmPassLable->Visible;
		this->confirmPassTextField->Visible = !confirmPassTextField->Visible;
		if (confirmPassLable->Visible) {
			this->registLable->Text = "Уже есть аккаунт? Войти";
			this->signInButton->Text = "Sign up";
		}
		else {
			this->registLable->Text = "Нет аккаунта\? Зарегистируйтесь";
			this->signInButton->Text = "Sign in";
		}
	}
	private: System::Void showPass_Click(System::Object^ sender, System::EventArgs^ e) {
		//showing / hiding

		if (!showPassBool) {
			this->showPass->ImageLocation = "./hide.png";
			showPassBool = !showPassBool;
			this->passwordTextField->PasswordChar = 0;
		}
		else {
			this->showPass->ImageLocation = "./show.png";
			showPassBool = !showPassBool;
			this->passwordTextField->PasswordChar = '*';
		}
	}
	private: System::Void confirmPassTextField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->confirmPassTextField->Text->Length < 6)
			this->confirmPassTextField->ForeColor = Color::Red;
		else
		{
			this->confirmPassTextField->ForeColor = Color::Black;
		}
	}
	public: 
	int checkPassIdentity(String^ str1, String^ str2) {
		if (str1 == str2)
			return 1;
		else
			return 0;
	}
	int checkPassLength(String^ str1, String^ str2, String^ login) {
		string loginStr = marshal_as<string>(login);
		if (signIn(loginStr, "", 0))
			return 4;
		if (str1->Length < 6 || str2->Length < 6)
			return 2;
		else {
			if (checkPassIdentity(str1, str2))
				return 1;
			else
				return 3;
		}
	}
	private: System::Void signInButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->confirmPassTextField->Visible) {
			string loginInp = marshal_as<string>(loginTextField->Text);
			string passwordInp = marshal_as<string>(passwordTextField->Text);
			switch (checkPassLength(confirmPassTextField->Text, passwordTextField->Text, loginTextField->Text)) {
			case 2: 
				errorPassLable->Visible = true;
				errorPassLable->Text = "Password length must be > 6 symbols";
				break;
			case 3:
				errorPassLable->Visible = true;
				errorPassLable->Text = "Passwords Don't Match";
				break;
			case 1:
				errorPassLable->Visible = true;
				errorPassLable->Text = "Registred!";
				if (!fileInput(loginInp, passwordInp))
					errorPassLable->Text = "Some errors while file input";
				break;
			case 4:
				errorPassLable->Visible = true;
				errorPassLable->Text = "This login is already registred";
				break;
			}
		}
		else
		{
			string login = marshal_as<string>(loginTextField->Text);
			string password = marshal_as<string>(passwordTextField->Text);
			if (signIn(login, password, 1)) {
				errorPassLable->Visible = true;
				errorPassLable->Text = "Signed In succesful";
				MainScreen^ mainScreen = gcnew MainScreen();
				mainScreen->userIndex = returnId();
				mainScreen->Show();
				Login::Hide();
			}
			else
			{
				errorPassLable->Visible = true;
				errorPassLable->Text = "Failed, no user with such Login or Password";
			}
		}
	}
};
}
