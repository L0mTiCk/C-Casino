#pragma once
#include "SignIn.h"
#include "SignUp.h"
#include "MainScreen.h"
#include "Admin.h"
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
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ balancePicture;
	private: System::Windows::Forms::PictureBox^ lockIcon2;







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
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->balancePicture = (gcnew System::Windows::Forms::PictureBox());
			this->lockIcon2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->showPass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->balancePicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lockIcon2))->BeginInit();
			this->SuspendLayout();
			// 
			// signInButton
			// 
			this->signInButton->BackColor = System::Drawing::Color::Transparent;
			this->signInButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signInButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->signInButton->ForeColor = System::Drawing::Color::White;
			this->signInButton->Location = System::Drawing::Point(494, 878);
			this->signInButton->Name = L"signInButton";
			this->signInButton->Size = System::Drawing::Size(456, 60);
			this->signInButton->TabIndex = 0;
			this->signInButton->Text = L"Sign in";
			this->signInButton->UseVisualStyleBackColor = false;
			this->signInButton->Click += gcnew System::EventHandler(this, &Login::signInButton_Click);
			// 
			// enteringLable
			// 
			this->enteringLable->AutoSize = true;
			this->enteringLable->BackColor = System::Drawing::Color::Transparent;
			this->enteringLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enteringLable->ForeColor = System::Drawing::Color::White;
			this->enteringLable->Location = System::Drawing::Point(492, 412);
			this->enteringLable->Name = L"enteringLable";
			this->enteringLable->Size = System::Drawing::Size(451, 24);
			this->enteringLable->TabIndex = 1;
			this->enteringLable->Text = L"Ввойдите/зарегистрируйтесь для продолжения.";
			this->enteringLable->Click += gcnew System::EventHandler(this, &Login::label1_Click_1);
			// 
			// loginLable
			// 
			this->loginLable->AutoSize = true;
			this->loginLable->BackColor = System::Drawing::Color::Transparent;
			this->loginLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginLable->ForeColor = System::Drawing::Color::White;
			this->loginLable->Location = System::Drawing::Point(488, 485);
			this->loginLable->Name = L"loginLable";
			this->loginLable->Size = System::Drawing::Size(57, 24);
			this->loginLable->TabIndex = 2;
			this->loginLable->Text = L"Login";
			// 
			// passLable
			// 
			this->passLable->AutoSize = true;
			this->passLable->BackColor = System::Drawing::Color::Transparent;
			this->passLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->passLable->ForeColor = System::Drawing::Color::White;
			this->passLable->Location = System::Drawing::Point(487, 598);
			this->passLable->Name = L"passLable";
			this->passLable->Size = System::Drawing::Size(92, 24);
			this->passLable->TabIndex = 3;
			this->passLable->Text = L"Password";
			// 
			// loginTextField
			// 
			this->loginTextField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginTextField->ForeColor = System::Drawing::SystemColors::WindowText;
			this->loginTextField->Location = System::Drawing::Point(559, 528);
			this->loginTextField->Name = L"loginTextField";
			this->loginTextField->Size = System::Drawing::Size(391, 41);
			this->loginTextField->TabIndex = 4;
			this->loginTextField->Text = L"Login";
			this->loginTextField->TextChanged += gcnew System::EventHandler(this, &Login::loginTextField_TextChanged);
			// 
			// passwordTextField
			// 
			this->passwordTextField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->passwordTextField->ForeColor = System::Drawing::SystemColors::WindowText;
			this->passwordTextField->Location = System::Drawing::Point(558, 641);
			this->passwordTextField->Name = L"passwordTextField";
			this->passwordTextField->PasswordChar = '*';
			this->passwordTextField->Size = System::Drawing::Size(391, 41);
			this->passwordTextField->TabIndex = 5;
			this->passwordTextField->Text = L"Password";
			this->passwordTextField->TextChanged += gcnew System::EventHandler(this, &Login::passwordTextField_TextChanged);
			// 
			// registLable
			// 
			this->registLable->AutoSize = true;
			this->registLable->BackColor = System::Drawing::Color::Transparent;
			this->registLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->registLable->LinkColor = System::Drawing::Color::White;
			this->registLable->Location = System::Drawing::Point(490, 700);
			this->registLable->Name = L"registLable";
			this->registLable->Size = System::Drawing::Size(229, 17);
			this->registLable->TabIndex = 6;
			this->registLable->TabStop = true;
			this->registLable->Text = L"Нет аккаунта\? Зарегистируйтесь";
			this->registLable->Click += gcnew System::EventHandler(this, &Login::registLable_Click);
			// 
			// confirmPassLable
			// 
			this->confirmPassLable->AutoSize = true;
			this->confirmPassLable->BackColor = System::Drawing::Color::Transparent;
			this->confirmPassLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->confirmPassLable->ForeColor = System::Drawing::Color::White;
			this->confirmPassLable->Location = System::Drawing::Point(487, 730);
			this->confirmPassLable->Name = L"confirmPassLable";
			this->confirmPassLable->Size = System::Drawing::Size(161, 24);
			this->confirmPassLable->TabIndex = 7;
			this->confirmPassLable->Text = L"Confirm password";
			this->confirmPassLable->Visible = false;
			this->confirmPassLable->Click += gcnew System::EventHandler(this, &Login::label1_Click_2);
			// 
			// confirmPassTextField
			// 
			this->confirmPassTextField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->confirmPassTextField->Location = System::Drawing::Point(558, 773);
			this->confirmPassTextField->Name = L"confirmPassTextField";
			this->confirmPassTextField->PasswordChar = '*';
			this->confirmPassTextField->Size = System::Drawing::Size(391, 41);
			this->confirmPassTextField->TabIndex = 8;
			this->confirmPassTextField->Text = L"Password";
			this->confirmPassTextField->Visible = false;
			this->confirmPassTextField->TextChanged += gcnew System::EventHandler(this, &Login::confirmPassTextField_TextChanged);
			// 
			// showPass
			// 
			this->showPass->BackColor = System::Drawing::Color::Transparent;
			this->showPass->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showPass.ErrorImage")));
			this->showPass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showPass.Image")));
			this->showPass->Location = System::Drawing::Point(969, 636);
			this->showPass->MaximumSize = System::Drawing::Size(46, 50);
			this->showPass->Name = L"showPass";
			this->showPass->Size = System::Drawing::Size(46, 50);
			this->showPass->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->showPass->TabIndex = 9;
			this->showPass->TabStop = false;
			this->showPass->Click += gcnew System::EventHandler(this, &Login::showPass_Click);
			// 
			// errorPassLable
			// 
			this->errorPassLable->AutoSize = true;
			this->errorPassLable->BackColor = System::Drawing::Color::Transparent;
			this->errorPassLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->errorPassLable->ForeColor = System::Drawing::Color::Red;
			this->errorPassLable->Location = System::Drawing::Point(486, 836);
			this->errorPassLable->Name = L"errorPassLable";
			this->errorPassLable->Size = System::Drawing::Size(459, 29);
			this->errorPassLable->TabIndex = 10;
			this->errorPassLable->Text = L"Ошибка, пароли должны совпадать";
			this->errorPassLable->Visible = false;
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exitButton->FlatAppearance->BorderSize = 0;
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitButton->ForeColor = System::Drawing::Color::White;
			this->exitButton->Location = System::Drawing::Point(1352, 21);
			this->exitButton->Margin = System::Windows::Forms::Padding(2);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(40, 40);
			this->exitButton->TabIndex = 52;
			this->exitButton->Text = L"X";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &Login::exitButton_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 54, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(541, 203);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 117);
			this->label1->TabIndex = 53;
			this->label1->Text = L"C-Casino";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(551, 339);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(420, 44);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Добро пожаловать!";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(493, 527);
			this->pictureBox1->MaximumSize = System::Drawing::Size(47, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(46, 50);
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// balancePicture
			// 
			this->balancePicture->BackColor = System::Drawing::Color::Transparent;
			this->balancePicture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->balancePicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"balancePicture.Image")));
			this->balancePicture->Location = System::Drawing::Point(493, 636);
			this->balancePicture->MaximumSize = System::Drawing::Size(47, 50);
			this->balancePicture->Name = L"balancePicture";
			this->balancePicture->Size = System::Drawing::Size(47, 50);
			this->balancePicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->balancePicture->TabIndex = 57;
			this->balancePicture->TabStop = false;
			// 
			// lockIcon2
			// 
			this->lockIcon2->BackColor = System::Drawing::Color::Transparent;
			this->lockIcon2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lockIcon2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lockIcon2.Image")));
			this->lockIcon2->Location = System::Drawing::Point(493, 770);
			this->lockIcon2->MaximumSize = System::Drawing::Size(47, 50);
			this->lockIcon2->Name = L"lockIcon2";
			this->lockIcon2->Size = System::Drawing::Size(47, 50);
			this->lockIcon2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->lockIcon2->TabIndex = 58;
			this->lockIcon2->TabStop = false;
			this->lockIcon2->Visible = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1422, 977);
			this->Controls->Add(this->lockIcon2);
			this->Controls->Add(this->balancePicture);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exitButton);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1422, 977);
			this->MinimumSize = System::Drawing::Size(1422, 977);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->showPass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->balancePicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lockIcon2))->EndInit();
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
		if (loginTextField->Text[loginTextField->TextLength - 1] == ' ') {
			loginTextField->Text = loginTextField->Text->Remove(loginTextField->TextLength - 1);
			loginTextField->Select(loginTextField->TextLength, 0);
		}
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
		this->lockIcon2->Visible = !lockIcon2->Visible;
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
				vector<int> balances{};
				
				errorPassLable->Visible = true;
				errorPassLable->Text = "Signed In succesful";
				Admin^ adminScreen = gcnew Admin();
				MainScreen^ mainScreen = gcnew MainScreen();
				mainScreen->userIndex = returnId();				//номер пользователя в файле
				fillBalanceVector(&balances);
				if (login == "admin") {
					mainScreen->isAdmin = true;
				}
				else {
					mainScreen->isAdmin = false;
				}
				mainScreen->userBalance = balances.at(mainScreen->userIndex); //баланс пользователся по номеру из файла
				//cout << mainScreen->userBalance << " баланс текущего пользователя!\n";
				mainScreen->Show();
				//adminScreen->Show();
				Login::Hide();
			}
			else
			{
				errorPassLable->Visible = true;
				errorPassLable->Text = "Failed, no user with such Login or Password";
			}
		}
	}
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
