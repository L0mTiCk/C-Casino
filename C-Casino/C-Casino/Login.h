#pragma once

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
			this->signInButton->Location = System::Drawing::Point(375, 320);
			this->signInButton->Name = L"signInButton";
			this->signInButton->Size = System::Drawing::Size(106, 30);
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
			this->enteringLable->Location = System::Drawing::Point(228, 41);
			this->enteringLable->Name = L"enteringLable";
			this->enteringLable->Size = System::Drawing::Size(451, 24);
			this->enteringLable->TabIndex = 1;
			this->enteringLable->Text = L"Ввойдите/зарегистрируйтесь для продолжения.";
			this->enteringLable->Click += gcnew System::EventHandler(this, &Login::label1_Click_1);
			// 
			// loginLable
			// 
			this->loginLable->AutoSize = true;
			this->loginLable->Location = System::Drawing::Point(100, 135);
			this->loginLable->Name = L"loginLable";
			this->loginLable->Size = System::Drawing::Size(33, 13);
			this->loginLable->TabIndex = 2;
			this->loginLable->Text = L"Login";
			// 
			// passLable
			// 
			this->passLable->AutoSize = true;
			this->passLable->Location = System::Drawing::Point(103, 204);
			this->passLable->Name = L"passLable";
			this->passLable->Size = System::Drawing::Size(53, 13);
			this->passLable->TabIndex = 3;
			this->passLable->Text = L"Password";
			// 
			// loginTextField
			// 
			this->loginTextField->ForeColor = System::Drawing::SystemColors::WindowText;
			this->loginTextField->Location = System::Drawing::Point(103, 167);
			this->loginTextField->Name = L"loginTextField";
			this->loginTextField->Size = System::Drawing::Size(175, 20);
			this->loginTextField->TabIndex = 4;
			this->loginTextField->Text = L"Login";
			this->loginTextField->TextChanged += gcnew System::EventHandler(this, &Login::loginTextField_TextChanged);
			// 
			// passwordTextField
			// 
			this->passwordTextField->ForeColor = System::Drawing::SystemColors::WindowText;
			this->passwordTextField->Location = System::Drawing::Point(103, 236);
			this->passwordTextField->Name = L"passwordTextField";
			this->passwordTextField->PasswordChar = '*';
			this->passwordTextField->Size = System::Drawing::Size(175, 20);
			this->passwordTextField->TabIndex = 5;
			this->passwordTextField->Text = L"Password";
			this->passwordTextField->TextChanged += gcnew System::EventHandler(this, &Login::passwordTextField_TextChanged);
			// 
			// registLable
			// 
			this->registLable->AutoSize = true;
			this->registLable->Location = System::Drawing::Point(103, 272);
			this->registLable->Name = L"registLable";
			this->registLable->Size = System::Drawing::Size(177, 13);
			this->registLable->TabIndex = 6;
			this->registLable->TabStop = true;
			this->registLable->Text = L"Нет аккаунта\? Зарегистируйтесь";
			this->registLable->Click += gcnew System::EventHandler(this, &Login::registLable_Click);
			// 
			// confirmPassLable
			// 
			this->confirmPassLable->AutoSize = true;
			this->confirmPassLable->Location = System::Drawing::Point(372, 204);
			this->confirmPassLable->Name = L"confirmPassLable";
			this->confirmPassLable->Size = System::Drawing::Size(90, 13);
			this->confirmPassLable->TabIndex = 7;
			this->confirmPassLable->Text = L"Confirm password";
			this->confirmPassLable->Visible = false;
			this->confirmPassLable->Click += gcnew System::EventHandler(this, &Login::label1_Click_2);
			// 
			// confirmPassTextField
			// 
			this->confirmPassTextField->Location = System::Drawing::Point(375, 236);
			this->confirmPassTextField->Name = L"confirmPassTextField";
			this->confirmPassTextField->PasswordChar = '*';
			this->confirmPassTextField->Size = System::Drawing::Size(175, 20);
			this->confirmPassTextField->TabIndex = 8;
			this->confirmPassTextField->Text = L"Password";
			this->confirmPassTextField->Visible = false;
			this->confirmPassTextField->TextChanged += gcnew System::EventHandler(this, &Login::confirmPassTextField_TextChanged);
			// 
			// showPass
			// 
			this->showPass->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showPass.ErrorImage")));
			this->showPass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showPass.Image")));
			this->showPass->Location = System::Drawing::Point(293, 233);
			this->showPass->MaximumSize = System::Drawing::Size(24, 24);
			this->showPass->Name = L"showPass";
			this->showPass->Size = System::Drawing::Size(24, 24);
			this->showPass->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->showPass->TabIndex = 9;
			this->showPass->TabStop = false;
			this->showPass->Click += gcnew System::EventHandler(this, &Login::showPass_Click);
			// 
			// errorPassLable
			// 
			this->errorPassLable->AutoSize = true;
			this->errorPassLable->ForeColor = System::Drawing::Color::Red;
			this->errorPassLable->Location = System::Drawing::Point(592, 239);
			this->errorPassLable->Name = L"errorPassLable";
			this->errorPassLable->Size = System::Drawing::Size(188, 13);
			this->errorPassLable->TabIndex = 10;
			this->errorPassLable->Text = L"Ошибка, пароли должны совпадать";
			this->errorPassLable->Visible = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(879, 417);
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
		if (this->passwordTextField->Text->Length < 6)
			this->passwordTextField->ForeColor = Color::Red;
		else
		{
			this->passwordTextField->ForeColor = Color::Black;
		}
	}
	private: System::Void registLable_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void signInButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->confirmPassTextField->Visible) {
			if (this->passwordTextField->Text != confirmPassTextField->Text)
				errorPassLable->Visible = true;
			else
				errorPassLable->Visible = false;
		}
		else
		{

		}
	}
};
}
