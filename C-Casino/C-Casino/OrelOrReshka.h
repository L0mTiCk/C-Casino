#pragma once
#include "Admin.h"
#include "SignIn.h"
#include "LogOut.h"
#include <vector>


namespace CCasino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для OrelOrReshka
	/// </summary>
	public ref class OrelOrReshka : public System::Windows::Forms::Form
	{
	public:
		OrelOrReshka(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		int userBalance;
		bool isPlaying;
		bool menuExpand;
		int numberToPass;
	private: System::Windows::Forms::Timer^ menuTimer;
	public:
		int userId;
		System::Windows::Forms::Form^ otherform;
		property int NumberToPass {
			int get() {
				return numberToPass;
			}
		}
		


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~OrelOrReshka()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Label^ currentBetLabel;
	private: System::Windows::Forms::Label^ betTextLabel;
	private: System::Windows::Forms::Label^ greenChipBetText;
	private: System::Windows::Forms::Label^ yellowChipBetText;
	private: System::Windows::Forms::Label^ blueChipBetText;
	private: System::Windows::Forms::Label^ redChipBetText;
	private: System::Windows::Forms::PictureBox^ greenChipPictureBox;
	private: System::Windows::Forms::PictureBox^ yellowChipPictureBox;
	private: System::Windows::Forms::PictureBox^ blueChipPictureBox;
	private: System::Windows::Forms::PictureBox^ redChipPictureBox;
	private: System::Windows::Forms::Label^ userBalanceText;
	private: System::Windows::Forms::Label^ balanceTextLabel;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ menuIcon;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ rouletteButton;
	private: System::Windows::Forms::PictureBox^ rouletteIcon;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ coinIcon;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ volumeButton;
	private: System::Windows::Forms::PictureBox^ volumePicture;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrelOrReshka::typeid));
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->currentBetLabel = (gcnew System::Windows::Forms::Label());
			this->betTextLabel = (gcnew System::Windows::Forms::Label());
			this->greenChipBetText = (gcnew System::Windows::Forms::Label());
			this->yellowChipBetText = (gcnew System::Windows::Forms::Label());
			this->blueChipBetText = (gcnew System::Windows::Forms::Label());
			this->redChipBetText = (gcnew System::Windows::Forms::Label());
			this->greenChipPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->yellowChipPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->blueChipPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->redChipPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->userBalanceText = (gcnew System::Windows::Forms::Label());
			this->balanceTextLabel = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->rouletteButton = (gcnew System::Windows::Forms::Button());
			this->rouletteIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->coinIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->volumeButton = (gcnew System::Windows::Forms::Button());
			this->volumePicture = (gcnew System::Windows::Forms::PictureBox());
			this->menuTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenChipPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yellowChipPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blueChipPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redChipPictureBox))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuIcon))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rouletteIcon))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coinIcon))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumePicture))->BeginInit();
			this->SuspendLayout();
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
			this->exitButton->Location = System::Drawing::Point(977, 11);
			this->exitButton->Margin = System::Windows::Forms::Padding(2);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(30, 32);
			this->exitButton->TabIndex = 51;
			this->exitButton->Text = L"X";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &OrelOrReshka::exitButton_Click);
			// 
			// currentBetLabel
			// 
			this->currentBetLabel->AutoSize = true;
			this->currentBetLabel->BackColor = System::Drawing::Color::Transparent;
			this->currentBetLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->currentBetLabel->ForeColor = System::Drawing::Color::White;
			this->currentBetLabel->Location = System::Drawing::Point(853, 571);
			this->currentBetLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->currentBetLabel->Name = L"currentBetLabel";
			this->currentBetLabel->Size = System::Drawing::Size(87, 36);
			this->currentBetLabel->TabIndex = 76;
			this->currentBetLabel->Text = L"2500";
			// 
			// betTextLabel
			// 
			this->betTextLabel->AutoSize = true;
			this->betTextLabel->BackColor = System::Drawing::Color::Transparent;
			this->betTextLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betTextLabel->ForeColor = System::Drawing::Color::White;
			this->betTextLabel->Location = System::Drawing::Point(728, 571);
			this->betTextLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->betTextLabel->Name = L"betTextLabel";
			this->betTextLabel->Size = System::Drawing::Size(131, 36);
			this->betTextLabel->TabIndex = 75;
			this->betTextLabel->Text = L"Ставка:";
			// 
			// greenChipBetText
			// 
			this->greenChipBetText->AutoSize = true;
			this->greenChipBetText->BackColor = System::Drawing::Color::Transparent;
			this->greenChipBetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->greenChipBetText->ForeColor = System::Drawing::Color::White;
			this->greenChipBetText->Location = System::Drawing::Point(653, 516);
			this->greenChipBetText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->greenChipBetText->Name = L"greenChipBetText";
			this->greenChipBetText->Size = System::Drawing::Size(69, 36);
			this->greenChipBetText->TabIndex = 74;
			this->greenChipBetText->Text = L"500";
			// 
			// yellowChipBetText
			// 
			this->yellowChipBetText->AutoSize = true;
			this->yellowChipBetText->BackColor = System::Drawing::Color::Transparent;
			this->yellowChipBetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yellowChipBetText->ForeColor = System::Drawing::Color::White;
			this->yellowChipBetText->Location = System::Drawing::Point(563, 517);
			this->yellowChipBetText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->yellowChipBetText->Name = L"yellowChipBetText";
			this->yellowChipBetText->Size = System::Drawing::Size(69, 36);
			this->yellowChipBetText->TabIndex = 73;
			this->yellowChipBetText->Text = L"100";
			// 
			// blueChipBetText
			// 
			this->blueChipBetText->AutoSize = true;
			this->blueChipBetText->BackColor = System::Drawing::Color::Transparent;
			this->blueChipBetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->blueChipBetText->ForeColor = System::Drawing::Color::White;
			this->blueChipBetText->Location = System::Drawing::Point(478, 516);
			this->blueChipBetText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueChipBetText->Name = L"blueChipBetText";
			this->blueChipBetText->Size = System::Drawing::Size(51, 36);
			this->blueChipBetText->TabIndex = 72;
			this->blueChipBetText->Text = L"50";
			// 
			// redChipBetText
			// 
			this->redChipBetText->AutoSize = true;
			this->redChipBetText->BackColor = System::Drawing::Color::Transparent;
			this->redChipBetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->redChipBetText->ForeColor = System::Drawing::Color::White;
			this->redChipBetText->Location = System::Drawing::Point(384, 516);
			this->redChipBetText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redChipBetText->Name = L"redChipBetText";
			this->redChipBetText->Size = System::Drawing::Size(51, 36);
			this->redChipBetText->TabIndex = 71;
			this->redChipBetText->Text = L"10";
			// 
			// greenChipPictureBox
			// 
			this->greenChipPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->greenChipPictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"greenChipPictureBox.BackgroundImage")));
			this->greenChipPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->greenChipPictureBox->Location = System::Drawing::Point(664, 564);
			this->greenChipPictureBox->Margin = System::Windows::Forms::Padding(2);
			this->greenChipPictureBox->Name = L"greenChipPictureBox";
			this->greenChipPictureBox->Size = System::Drawing::Size(41, 45);
			this->greenChipPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->greenChipPictureBox->TabIndex = 70;
			this->greenChipPictureBox->TabStop = false;
			// 
			// yellowChipPictureBox
			// 
			this->yellowChipPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->yellowChipPictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"yellowChipPictureBox.BackgroundImage")));
			this->yellowChipPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->yellowChipPictureBox->Location = System::Drawing::Point(574, 564);
			this->yellowChipPictureBox->Margin = System::Windows::Forms::Padding(2);
			this->yellowChipPictureBox->Name = L"yellowChipPictureBox";
			this->yellowChipPictureBox->Size = System::Drawing::Size(41, 45);
			this->yellowChipPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->yellowChipPictureBox->TabIndex = 69;
			this->yellowChipPictureBox->TabStop = false;
			// 
			// blueChipPictureBox
			// 
			this->blueChipPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->blueChipPictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blueChipPictureBox.BackgroundImage")));
			this->blueChipPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->blueChipPictureBox->Location = System::Drawing::Point(481, 564);
			this->blueChipPictureBox->Margin = System::Windows::Forms::Padding(2);
			this->blueChipPictureBox->Name = L"blueChipPictureBox";
			this->blueChipPictureBox->Size = System::Drawing::Size(41, 45);
			this->blueChipPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->blueChipPictureBox->TabIndex = 68;
			this->blueChipPictureBox->TabStop = false;
			// 
			// redChipPictureBox
			// 
			this->redChipPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->redChipPictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redChipPictureBox.BackgroundImage")));
			this->redChipPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->redChipPictureBox->Location = System::Drawing::Point(386, 564);
			this->redChipPictureBox->Margin = System::Windows::Forms::Padding(2);
			this->redChipPictureBox->Name = L"redChipPictureBox";
			this->redChipPictureBox->Size = System::Drawing::Size(41, 45);
			this->redChipPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->redChipPictureBox->TabIndex = 67;
			this->redChipPictureBox->TabStop = false;
			// 
			// userBalanceText
			// 
			this->userBalanceText->AutoSize = true;
			this->userBalanceText->BackColor = System::Drawing::Color::Transparent;
			this->userBalanceText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->userBalanceText->ForeColor = System::Drawing::Color::White;
			this->userBalanceText->Location = System::Drawing::Point(222, 571);
			this->userBalanceText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->userBalanceText->Name = L"userBalanceText";
			this->userBalanceText->Size = System::Drawing::Size(87, 36);
			this->userBalanceText->TabIndex = 78;
			this->userBalanceText->Text = L"2500";
			// 
			// balanceTextLabel
			// 
			this->balanceTextLabel->AutoSize = true;
			this->balanceTextLabel->BackColor = System::Drawing::Color::Transparent;
			this->balanceTextLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->balanceTextLabel->ForeColor = System::Drawing::Color::White;
			this->balanceTextLabel->Location = System::Drawing::Point(96, 571);
			this->balanceTextLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->balanceTextLabel->Name = L"balanceTextLabel";
			this->balanceTextLabel->Size = System::Drawing::Size(136, 36);
			this->balanceTextLabel->TabIndex = 77;
			this->balanceTextLabel->Text = L"Баланс:";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel5);
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->MaximumSize = System::Drawing::Size(232, 0);
			this->flowLayoutPanel1->MinimumSize = System::Drawing::Size(63, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(63, 613);
			this->flowLayoutPanel1->TabIndex = 79;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->menuIcon);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(229, 100);
			this->panel1->TabIndex = 0;
			// 
			// menuIcon
			// 
			this->menuIcon->BackColor = System::Drawing::Color::Transparent;
			this->menuIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuIcon.BackgroundImage")));
			this->menuIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->menuIcon->Location = System::Drawing::Point(3, 25);
			this->menuIcon->Name = L"menuIcon";
			this->menuIcon->Size = System::Drawing::Size(54, 54);
			this->menuIcon->TabIndex = 69;
			this->menuIcon->TabStop = false;
			this->menuIcon->Click += gcnew System::EventHandler(this, &OrelOrReshka::menuIcon_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->rouletteButton);
			this->panel2->Controls->Add(this->rouletteIcon);
			this->panel2->Location = System::Drawing::Point(3, 109);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(229, 54);
			this->panel2->TabIndex = 1;
			// 
			// rouletteButton
			// 
			this->rouletteButton->BackColor = System::Drawing::Color::Transparent;
			this->rouletteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rouletteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rouletteButton->ForeColor = System::Drawing::Color::White;
			this->rouletteButton->Location = System::Drawing::Point(60, 0);
			this->rouletteButton->Name = L"rouletteButton";
			this->rouletteButton->Size = System::Drawing::Size(166, 54);
			this->rouletteButton->TabIndex = 68;
			this->rouletteButton->Text = L"Рулетка";
			this->rouletteButton->UseVisualStyleBackColor = false;
			this->rouletteButton->Click += gcnew System::EventHandler(this, &OrelOrReshka::rouletteButton_Click);
			// 
			// rouletteIcon
			// 
			this->rouletteIcon->BackColor = System::Drawing::Color::Transparent;
			this->rouletteIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rouletteIcon.BackgroundImage")));
			this->rouletteIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rouletteIcon->Location = System::Drawing::Point(3, 0);
			this->rouletteIcon->Name = L"rouletteIcon";
			this->rouletteIcon->Size = System::Drawing::Size(54, 54);
			this->rouletteIcon->TabIndex = 68;
			this->rouletteIcon->TabStop = false;
			this->rouletteIcon->Click += gcnew System::EventHandler(this, &OrelOrReshka::rouletteIcon_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->coinIcon);
			this->panel3->Location = System::Drawing::Point(3, 169);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(229, 54);
			this->panel3->TabIndex = 68;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::ForestGreen;
			this->button1->Location = System::Drawing::Point(60, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 54);
			this->button1->TabIndex = 68;
			this->button1->Text = L"Монетка";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// coinIcon
			// 
			this->coinIcon->BackColor = System::Drawing::Color::Transparent;
			this->coinIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"coinIcon.BackgroundImage")));
			this->coinIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->coinIcon->Location = System::Drawing::Point(3, 0);
			this->coinIcon->Name = L"coinIcon";
			this->coinIcon->Size = System::Drawing::Size(54, 54);
			this->coinIcon->TabIndex = 68;
			this->coinIcon->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Location = System::Drawing::Point(3, 229);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(226, 267);
			this->panel5->TabIndex = 69;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->volumeButton);
			this->panel4->Controls->Add(this->volumePicture);
			this->panel4->Location = System::Drawing::Point(3, 502);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(229, 54);
			this->panel4->TabIndex = 69;
			// 
			// volumeButton
			// 
			this->volumeButton->BackColor = System::Drawing::Color::Transparent;
			this->volumeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->volumeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->volumeButton->ForeColor = System::Drawing::Color::White;
			this->volumeButton->Location = System::Drawing::Point(63, 0);
			this->volumeButton->Name = L"volumeButton";
			this->volumeButton->Size = System::Drawing::Size(166, 54);
			this->volumeButton->TabIndex = 68;
			this->volumeButton->Text = L"Звук";
			this->volumeButton->UseVisualStyleBackColor = false;
			// 
			// volumePicture
			// 
			this->volumePicture->BackColor = System::Drawing::Color::Transparent;
			this->volumePicture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volumePicture.BackgroundImage")));
			this->volumePicture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->volumePicture->Location = System::Drawing::Point(3, 0);
			this->volumePicture->Name = L"volumePicture";
			this->volumePicture->Size = System::Drawing::Size(54, 54);
			this->volumePicture->TabIndex = 68;
			this->volumePicture->TabStop = false;
			// 
			// menuTimer
			// 
			this->menuTimer->Interval = 10;
			this->menuTimer->Tick += gcnew System::EventHandler(this, &OrelOrReshka::menuTimer_Tick);
			// 
			// OrelOrReshka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1025, 613);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->userBalanceText);
			this->Controls->Add(this->balanceTextLabel);
			this->Controls->Add(this->currentBetLabel);
			this->Controls->Add(this->betTextLabel);
			this->Controls->Add(this->greenChipBetText);
			this->Controls->Add(this->yellowChipBetText);
			this->Controls->Add(this->blueChipBetText);
			this->Controls->Add(this->redChipBetText);
			this->Controls->Add(this->greenChipPictureBox);
			this->Controls->Add(this->yellowChipPictureBox);
			this->Controls->Add(this->blueChipPictureBox);
			this->Controls->Add(this->redChipPictureBox);
			this->Controls->Add(this->exitButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1025, 613);
			this->MinimumSize = System::Drawing::Size(1025, 613);
			this->Name = L"OrelOrReshka";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OrelOrReshka";
			this->Load += gcnew System::EventHandler(this, &OrelOrReshka::OrelOrReshka_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenChipPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yellowChipPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blueChipPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redChipPictureBox))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuIcon))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rouletteIcon))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coinIcon))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumePicture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OrelOrReshka_Load(System::Object^ sender, System::EventArgs^ e) {
		this->BackgroundImage = Image::FromFile("img/greenBackground.jpg");
		coinIcon->BackgroundImage = Image::FromFile("img/coinIcon.png");
		rouletteIcon->BackgroundImage = Image::FromFile("img/rouletteIcon.png");
		menuIcon->BackgroundImage = Image::FromFile("img/menuIcon.png");
		volumeButton->BackgroundImage = Image::FromFile("img/volumeIcon.png");
		redChipPictureBox->BackgroundImage = Image::FromFile("img/redChip.png");
		yellowChipPictureBox->BackgroundImage = Image::FromFile("img/yellowChip.png");
		greenChipPictureBox->BackgroundImage = Image::FromFile("img/greenChip.png");
		blueChipPictureBox->BackgroundImage = Image::FromFile("img/blueChip.png");
		userBalanceText->Text = "" + userBalance;
		currentBetLabel->Text = "" + 0;
		isPlaying = true;
	}
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		saveBalance(userBalance, userId);
		Application::Exit();
	}
	void rouletteNav() {
		numberToPass = 70000;
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void rouletteIcon_Click(System::Object^ sender, System::EventArgs^ e) {
		rouletteNav();
	}
	private: System::Void rouletteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		rouletteNav();
	}
	private: System::Void menuTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (menuExpand) {
			flowLayoutPanel1->Width -= 10;
			if (flowLayoutPanel1->Width == flowLayoutPanel1->MinimumSize.Width) {
				menuExpand = false;
				menuTimer->Stop();
			}
		}
		else {
			flowLayoutPanel1->Width += 10;
			if (flowLayoutPanel1->Width == flowLayoutPanel1->MaximumSize.Width) {
				menuExpand = true;
				menuTimer->Stop();
			}
		}
	}
	private: System::Void menuIcon_Click(System::Object^ sender, System::EventArgs^ e) {
		menuTimer->Start();
	}
};
}
