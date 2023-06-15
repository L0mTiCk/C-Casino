#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include "SignIn.h"
#include "LogOut.h"

using namespace std;
using namespace msclr::interop;
using namespace System::Drawing;
using namespace msclr::interop;

namespace CCasino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		bool isExist = false;
	private: System::Windows::Forms::Label^ errorLabel;
	private: System::Windows::Forms::Label^ successLabel;

	public:

	public:
		int userId = 0;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::TextBox^ loginTextbox;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ balanceLable;
	private: System::Windows::Forms::PictureBox^ balancePicture;


	private: System::Windows::Forms::TextBox^ balanceTextbox;

	private: System::Windows::Forms::Button^ button1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->loginTextbox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->balanceLable = (gcnew System::Windows::Forms::Label());
			this->balancePicture = (gcnew System::Windows::Forms::PictureBox());
			this->balanceTextbox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->errorLabel = (gcnew System::Windows::Forms::Label());
			this->successLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->balancePicture))->BeginInit();
			this->SuspendLayout();
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
			this->label1->TabIndex = 0;
			this->label1->Text = L"C-Casino";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(551, 339);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(420, 44);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Добро пожаловать!";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(425, 409);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(581, 50);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Вы вошли как Администратор. Для редактирования баланса\r\nвведите Login аккаунта и "
				L" введите новое значение баланса.\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
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
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(40, 40);
			this->exitButton->TabIndex = 51;
			this->exitButton->Text = L"X";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &Admin::exitButton_Click);
			// 
			// loginTextbox
			// 
			this->loginTextbox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) { L"admin", L"popo", L"Login" });
			this->loginTextbox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->loginTextbox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->loginTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginTextbox->Location = System::Drawing::Point(559, 538);
			this->loginTextbox->Name = L"loginTextbox";
			this->loginTextbox->Size = System::Drawing::Size(390, 41);
			this->loginTextbox->TabIndex = 52;
			this->loginTextbox->TextChanged += gcnew System::EventHandler(this, &Admin::loginTextbox_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(493, 537);
			this->pictureBox1->MaximumSize = System::Drawing::Size(47, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(46, 50);
			this->pictureBox1->TabIndex = 53;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(488, 495);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 24);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Login";
			// 
			// balanceLable
			// 
			this->balanceLable->AutoSize = true;
			this->balanceLable->BackColor = System::Drawing::Color::Transparent;
			this->balanceLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->balanceLable->ForeColor = System::Drawing::Color::White;
			this->balanceLable->Location = System::Drawing::Point(487, 608);
			this->balanceLable->Name = L"balanceLable";
			this->balanceLable->Size = System::Drawing::Size(78, 24);
			this->balanceLable->TabIndex = 57;
			this->balanceLable->Text = L"Balance";
			this->balanceLable->Visible = false;
			// 
			// balancePicture
			// 
			this->balancePicture->BackColor = System::Drawing::Color::Transparent;
			this->balancePicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"balancePicture.Image")));
			this->balancePicture->Location = System::Drawing::Point(493, 646);
			this->balancePicture->MaximumSize = System::Drawing::Size(47, 50);
			this->balancePicture->Name = L"balancePicture";
			this->balancePicture->Size = System::Drawing::Size(47, 50);
			this->balancePicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->balancePicture->TabIndex = 56;
			this->balancePicture->TabStop = false;
			this->balancePicture->Visible = false;
			// 
			// balanceTextbox
			// 
			this->balanceTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->balanceTextbox->Location = System::Drawing::Point(558, 651);
			this->balanceTextbox->MaximumSize = System::Drawing::Size(464, 49);
			this->balanceTextbox->Name = L"balanceTextbox";
			this->balanceTextbox->Size = System::Drawing::Size(391, 41);
			this->balanceTextbox->TabIndex = 55;
			this->balanceTextbox->Visible = false;
			this->balanceTextbox->TextChanged += gcnew System::EventHandler(this, &Admin::balanceTextbox_TextChanged);
			this->balanceTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Admin::balanceTextbox_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(493, 741);
			this->button1->MaximumSize = System::Drawing::Size(529, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(456, 60);
			this->button1->TabIndex = 58;
			this->button1->Text = L"Продолжить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// errorLabel
			// 
			this->errorLabel->AutoSize = true;
			this->errorLabel->BackColor = System::Drawing::Color::Transparent;
			this->errorLabel->ForeColor = System::Drawing::Color::Red;
			this->errorLabel->Location = System::Drawing::Point(966, 518);
			this->errorLabel->Name = L"errorLabel";
			this->errorLabel->Size = System::Drawing::Size(371, 72);
			this->errorLabel->TabIndex = 59;
			this->errorLabel->Text = L"Ошибка, такой Логин не \r\nсуществует";
			this->errorLabel->Visible = false;
			// 
			// successLabel
			// 
			this->successLabel->AutoSize = true;
			this->successLabel->BackColor = System::Drawing::Color::Transparent;
			this->successLabel->ForeColor = System::Drawing::Color::LimeGreen;
			this->successLabel->Location = System::Drawing::Point(966, 750);
			this->successLabel->Name = L"successLabel";
			this->successLabel->Size = System::Drawing::Size(262, 36);
			this->successLabel->TabIndex = 60;
			this->successLabel->Text = L"Баланс изменен.";
			this->successLabel->Visible = false;
			// 
			// Admin
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1422, 977);
			this->Controls->Add(this->successLabel);
			this->Controls->Add(this->errorLabel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->balanceLable);
			this->Controls->Add(this->balancePicture);
			this->Controls->Add(this->balanceTextbox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->loginTextbox);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1422, 977);
			this->MinimumSize = System::Drawing::Size(1422, 977);
			this->Name = L"Admin";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->balancePicture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void checkAdminLogin() {
		std::vector<string> logins;
		std::vector<string> passwords;
		ifstream file("auth.txt");
		while (!file.eof()) {
			string str = "";
			getline(file, str);
			fillVector(str, &logins, &passwords);
		}
		file.close();
		if (!isExist) {
			if (checkLogin(marshal_as<string>(loginTextbox->Text), &logins)) {
				balanceLable->Visible = true;
				balancePicture->Visible = true;
				balanceTextbox->Visible = true;
				errorLabel->Visible = false;
				successLabel->Visible = false;
				isExist = true;
				userId = returnId();
				//cout << userId << endl;
			}
			else {
				errorLabel->Visible = true;
				successLabel->Visible = false;
				balancePicture->Visible = false;
				balanceTextbox->Visible = false;
				isExist = false;
			}
		}
		else {
			if (balanceTextbox->Text != "") {
				saveBalance(std::stoi(marshal_as<string>(balanceTextbox->Text)), userId);
				successLabel->Visible = true;
			}
		}
	}

	private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {	
	}
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		checkAdminLogin();
	}
	private: System::Void balanceTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		successLabel->Visible = false;
		if (balanceTextbox->Text == "") {

		}
		else {
			char b[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
			bool isCorrect = false;
			for (int i = 0; i < 10; i++) {
				if (balanceTextbox->Text[balanceTextbox->TextLength - 1] == b[i]) {
					isCorrect = true;
				}
			}
			if (!isCorrect) {
				balanceTextbox->Text = this->balanceTextbox->Text->Remove(balanceTextbox->TextLength - 1);
				balanceTextbox->Select(balanceTextbox->TextLength, 0);
			}
		}
	}
	private: System::Void balanceTextbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled;
		balanceTextbox->Select(balanceTextbox->TextLength, 0);
	}
	private: System::Void loginTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		isExist = false;
		errorLabel->Visible = false;
		successLabel->Visible = false;
		balanceLable->Visible = false;
		balancePicture->Visible = false;
		balanceTextbox->Visible = false;
	}
};
}
