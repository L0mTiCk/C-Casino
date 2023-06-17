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
		int flipCount;
		int userBalance;
		int userBet;
		bool isPlaying;
		bool menuExpand;
		int numberToPass;
		int winNumber;
		int coinBet;
		bool isAdmin;
	private: System::Windows::Forms::Timer^ menuTimer;
	public:
		int userId;
	public: System::Windows::Forms::PictureBox^ coinPictureBox;


	private: System::Windows::Forms::Timer^ flipTimer;
	private: System::Windows::Forms::Button^ flipButton;

	private: System::Windows::Forms::Label^ winLabel;
	private: System::Windows::Forms::Button^ orelButton;
	private: System::Windows::Forms::Button^ reshkaButton;


	private: System::Windows::Forms::Label^ enteringLable;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ coinButton;

	private: System::Windows::Forms::PictureBox^ coinIcon;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ helpButton;
	private: System::Windows::Forms::PictureBox^ helpIcon;


	public:
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
	private: System::Windows::Forms::Panel^ adminPanel;

	private: System::Windows::Forms::Button^ adminButton;

	private: System::Windows::Forms::PictureBox^ adminIcon;
	private: System::Windows::Forms::Panel^ spacerPanel;



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
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->coinButton = (gcnew System::Windows::Forms::Button());
			this->coinIcon = (gcnew System::Windows::Forms::PictureBox());
			this->adminPanel = (gcnew System::Windows::Forms::Panel());
			this->adminButton = (gcnew System::Windows::Forms::Button());
			this->adminIcon = (gcnew System::Windows::Forms::PictureBox());
			this->spacerPanel = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->volumeButton = (gcnew System::Windows::Forms::Button());
			this->volumePicture = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->helpIcon = (gcnew System::Windows::Forms::PictureBox());
			this->menuTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->coinPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->flipTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->flipButton = (gcnew System::Windows::Forms::Button());
			this->winLabel = (gcnew System::Windows::Forms::Label());
			this->orelButton = (gcnew System::Windows::Forms::Button());
			this->reshkaButton = (gcnew System::Windows::Forms::Button());
			this->enteringLable = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenChipPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yellowChipPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blueChipPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redChipPictureBox))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuIcon))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rouletteIcon))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coinIcon))->BeginInit();
			this->adminPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminIcon))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumePicture))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->helpIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coinPictureBox))->BeginInit();
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
			this->blueChipPictureBox->Click += gcnew System::EventHandler(this, &OrelOrReshka::blueChipPictureBox_Click);
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
			this->redChipPictureBox->Click += gcnew System::EventHandler(this, &OrelOrReshka::redChipPictureBox_Click);
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
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel6);
			this->flowLayoutPanel1->Controls->Add(this->adminPanel);
			this->flowLayoutPanel1->Controls->Add(this->spacerPanel);
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
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
			this->rouletteButton->FlatAppearance->BorderSize = 0;
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
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->Controls->Add(this->coinButton);
			this->panel6->Controls->Add(this->coinIcon);
			this->panel6->Location = System::Drawing::Point(3, 169);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(229, 54);
			this->panel6->TabIndex = 86;
			// 
			// coinButton
			// 
			this->coinButton->BackColor = System::Drawing::Color::Transparent;
			this->coinButton->FlatAppearance->BorderSize = 0;
			this->coinButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->coinButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->coinButton->ForeColor = System::Drawing::Color::ForestGreen;
			this->coinButton->Location = System::Drawing::Point(60, 0);
			this->coinButton->Name = L"coinButton";
			this->coinButton->Size = System::Drawing::Size(166, 54);
			this->coinButton->TabIndex = 68;
			this->coinButton->Text = L"Монетка";
			this->coinButton->UseVisualStyleBackColor = false;
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
			// adminPanel
			// 
			this->adminPanel->BackColor = System::Drawing::Color::Transparent;
			this->adminPanel->Controls->Add(this->adminButton);
			this->adminPanel->Controls->Add(this->adminIcon);
			this->adminPanel->Location = System::Drawing::Point(3, 229);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(229, 54);
			this->adminPanel->TabIndex = 68;
			// 
			// adminButton
			// 
			this->adminButton->BackColor = System::Drawing::Color::Transparent;
			this->adminButton->FlatAppearance->BorderSize = 0;
			this->adminButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adminButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->adminButton->ForeColor = System::Drawing::Color::White;
			this->adminButton->Location = System::Drawing::Point(60, 0);
			this->adminButton->Name = L"adminButton";
			this->adminButton->Size = System::Drawing::Size(166, 54);
			this->adminButton->TabIndex = 68;
			this->adminButton->Text = L"Администратор";
			this->adminButton->UseVisualStyleBackColor = false;
			this->adminButton->Click += gcnew System::EventHandler(this, &OrelOrReshka::adminButton_Click);
			// 
			// adminIcon
			// 
			this->adminIcon->BackColor = System::Drawing::Color::Transparent;
			this->adminIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminIcon.BackgroundImage")));
			this->adminIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->adminIcon->Location = System::Drawing::Point(3, 0);
			this->adminIcon->Name = L"adminIcon";
			this->adminIcon->Size = System::Drawing::Size(54, 54);
			this->adminIcon->TabIndex = 68;
			this->adminIcon->TabStop = false;
			this->adminIcon->Click += gcnew System::EventHandler(this, &OrelOrReshka::adminIcon_Click);
			// 
			// spacerPanel
			// 
			this->spacerPanel->BackColor = System::Drawing::Color::Transparent;
			this->spacerPanel->Location = System::Drawing::Point(3, 289);
			this->spacerPanel->Name = L"spacerPanel";
			this->spacerPanel->Size = System::Drawing::Size(226, 193);
			this->spacerPanel->TabIndex = 69;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->volumeButton);
			this->panel4->Controls->Add(this->volumePicture);
			this->panel4->Location = System::Drawing::Point(3, 488);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(229, 54);
			this->panel4->TabIndex = 69;
			// 
			// volumeButton
			// 
			this->volumeButton->BackColor = System::Drawing::Color::Transparent;
			this->volumeButton->FlatAppearance->BorderSize = 0;
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
			this->volumeButton->Click += gcnew System::EventHandler(this, &OrelOrReshka::volumeButton_Click);
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
			this->volumePicture->Click += gcnew System::EventHandler(this, &OrelOrReshka::volumePicture_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->helpButton);
			this->panel3->Controls->Add(this->helpIcon);
			this->panel3->Location = System::Drawing::Point(3, 548);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(229, 54);
			this->panel3->TabIndex = 70;
			// 
			// helpButton
			// 
			this->helpButton->BackColor = System::Drawing::Color::Transparent;
			this->helpButton->FlatAppearance->BorderSize = 0;
			this->helpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->helpButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpButton->ForeColor = System::Drawing::Color::White;
			this->helpButton->Location = System::Drawing::Point(63, 0);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(166, 54);
			this->helpButton->TabIndex = 68;
			this->helpButton->Text = L"Справка";
			this->helpButton->UseVisualStyleBackColor = false;
			this->helpButton->Click += gcnew System::EventHandler(this, &OrelOrReshka::helpButton_Click);
			// 
			// helpIcon
			// 
			this->helpIcon->BackColor = System::Drawing::Color::Transparent;
			this->helpIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpIcon.BackgroundImage")));
			this->helpIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->helpIcon->Location = System::Drawing::Point(3, 0);
			this->helpIcon->Name = L"helpIcon";
			this->helpIcon->Size = System::Drawing::Size(54, 54);
			this->helpIcon->TabIndex = 68;
			this->helpIcon->TabStop = false;
			this->helpIcon->Click += gcnew System::EventHandler(this, &OrelOrReshka::helpIcon_Click);
			// 
			// menuTimer
			// 
			this->menuTimer->Interval = 10;
			this->menuTimer->Tick += gcnew System::EventHandler(this, &OrelOrReshka::menuTimer_Tick);
			// 
			// coinPictureBox
			// 
			this->coinPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->coinPictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"coinPictureBox.BackgroundImage")));
			this->coinPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->coinPictureBox->Location = System::Drawing::Point(366, 111);
			this->coinPictureBox->Margin = System::Windows::Forms::Padding(2);
			this->coinPictureBox->MaximumSize = System::Drawing::Size(283, 306);
			this->coinPictureBox->Name = L"coinPictureBox";
			this->coinPictureBox->Size = System::Drawing::Size(280, 280);
			this->coinPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->coinPictureBox->TabIndex = 80;
			this->coinPictureBox->TabStop = false;
			// 
			// flipTimer
			// 
			this->flipTimer->Interval = 30;
			this->flipTimer->Tick += gcnew System::EventHandler(this, &OrelOrReshka::flipTimer_Tick);
			// 
			// flipButton
			// 
			this->flipButton->BackColor = System::Drawing::Color::Transparent;
			this->flipButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->flipButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->flipButton->ForeColor = System::Drawing::Color::White;
			this->flipButton->Location = System::Drawing::Point(734, 349);
			this->flipButton->Name = L"flipButton";
			this->flipButton->Size = System::Drawing::Size(227, 42);
			this->flipButton->TabIndex = 81;
			this->flipButton->Text = L"Подбросить";
			this->flipButton->UseVisualStyleBackColor = false;
			this->flipButton->Click += gcnew System::EventHandler(this, &OrelOrReshka::button2_Click);
			// 
			// winLabel
			// 
			this->winLabel->BackColor = System::Drawing::Color::Transparent;
			this->winLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->winLabel->ForeColor = System::Drawing::Color::White;
			this->winLabel->Location = System::Drawing::Point(234, 426);
			this->winLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->winLabel->Name = L"winLabel";
			this->winLabel->Size = System::Drawing::Size(556, 44);
			this->winLabel->TabIndex = 82;
			this->winLabel->Text = L"Вы проиграли";
			this->winLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->winLabel->Visible = false;
			// 
			// orelButton
			// 
			this->orelButton->BackColor = System::Drawing::Color::Transparent;
			this->orelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->orelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->orelButton->ForeColor = System::Drawing::Color::White;
			this->orelButton->Location = System::Drawing::Point(734, 247);
			this->orelButton->Name = L"orelButton";
			this->orelButton->Size = System::Drawing::Size(115, 41);
			this->orelButton->TabIndex = 83;
			this->orelButton->Text = L"Орел";
			this->orelButton->UseVisualStyleBackColor = false;
			this->orelButton->Click += gcnew System::EventHandler(this, &OrelOrReshka::orelButton_Click);
			// 
			// reshkaButton
			// 
			this->reshkaButton->BackColor = System::Drawing::Color::Transparent;
			this->reshkaButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reshkaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reshkaButton->ForeColor = System::Drawing::Color::White;
			this->reshkaButton->Location = System::Drawing::Point(846, 247);
			this->reshkaButton->Name = L"reshkaButton";
			this->reshkaButton->Size = System::Drawing::Size(115, 41);
			this->reshkaButton->TabIndex = 84;
			this->reshkaButton->Text = L"Решка";
			this->reshkaButton->UseVisualStyleBackColor = false;
			this->reshkaButton->Click += gcnew System::EventHandler(this, &OrelOrReshka::reshkaButton_Click);
			// 
			// enteringLable
			// 
			this->enteringLable->AutoSize = true;
			this->enteringLable->BackColor = System::Drawing::Color::Transparent;
			this->enteringLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enteringLable->ForeColor = System::Drawing::Color::White;
			this->enteringLable->Location = System::Drawing::Point(696, 187);
			this->enteringLable->Name = L"enteringLable";
			this->enteringLable->Size = System::Drawing::Size(291, 26);
			this->enteringLable->TabIndex = 85;
			this->enteringLable->Text = L"Выберите сторону монетки";
			// 
			// OrelOrReshka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1025, 613);
			this->Controls->Add(this->enteringLable);
			this->Controls->Add(this->reshkaButton);
			this->Controls->Add(this->orelButton);
			this->Controls->Add(this->winLabel);
			this->Controls->Add(this->flipButton);
			this->Controls->Add(this->coinPictureBox);
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
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coinIcon))->EndInit();
			this->adminPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminIcon))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumePicture))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->helpIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coinPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ filePath = "audio/TheWay.wav";
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer(filePath);
private: System::Void OrelOrReshka_Load(System::Object^ sender, System::EventArgs^ e) {
		adminPanel->Visible = isAdmin;
		if (!isAdmin) {
			spacerPanel->Size = System::Drawing::Size(spacerPanel->Size.Width, 260);
		}
		this->BackgroundImage = Image::FromFile("img/greenBackground.jpg");
		coinIcon->BackgroundImage = Image::FromFile("img/coinIcon.png");
		rouletteIcon->BackgroundImage = Image::FromFile("img/rouletteIcon.png");
		menuIcon->BackgroundImage = Image::FromFile("img/menuIcon.png");
		volumeButton->BackgroundImage = Image::FromFile("img/volumeIcon.png");
		redChipPictureBox->BackgroundImage = Image::FromFile("img/redChip.png");
		yellowChipPictureBox->BackgroundImage = Image::FromFile("img/yellowChip.png");
		greenChipPictureBox->BackgroundImage = Image::FromFile("img/greenChip.png");
		blueChipPictureBox->BackgroundImage = Image::FromFile("img/blueChip.png");
		helpIcon->BackgroundImage = Image::FromFile("img/helpIcon.png");
		userBalanceText->Text = "" + userBalance;
		currentBetLabel->Text = "" + 0;
		player->PlayLooping();
		isPlaying = true;
		coinBet = 2;
		userBet = 0;

	}

	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		saveBalance(userBalance, userId);
		Application::Exit();
	}
	void rouletteNav() {
		numberToPass = userBalance;
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
	private: void coinFlip() {
		//generate random num from 0 to 1
		if (coinBet != 2 && userBet > 0 && userBet <= userBalance) {
			winLabel->Visible = false;
			winNumber = rand() % 2;
			flipTimer->Start();
		}
		else
			MessageBox::Show("Выберите ставку");
	}
	private: System::Void menuIcon_Click(System::Object^ sender, System::EventArgs^ e) {
		menuTimer->Start();
	}
	private: System::Void flipTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (flipCount < 13) {
			if(flipCount % 2 == 1)
				coinPictureBox->BackgroundImage = Image::FromFile("img/orelDefault.png");
			else
				coinPictureBox->BackgroundImage = Image::FromFile("img/reshkaDefault.png");
			flipCount++;
			flipTimer->Interval = flipCount * 30;
			GC::Collect();
		}
		else
		{
			if (winNumber) {
				coinPictureBox->BackgroundImage = Image::FromFile("img/orelWin.png");
			}
			else {
				coinPictureBox->BackgroundImage = Image::FromFile("img/reshkaWin.png");
			}

			if (winNumber == coinBet) {
				winLabel->Visible = true;
				winLabel->Text = "Вы выиграли";
				userBalance += userBet;
			}
			else {
				winLabel->Visible = true;
				winLabel->Text = "Вы проиграли";
				userBalance -= userBet;
			}
			updateBalance();
			userBet = 0;
			updateCurrentBet();
			flipTimer->Stop();
			flipCount = 0;
			GC::Collect();
			coinBet = 2;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		coinFlip();
		orelButton->ForeColor = Color::White;
		reshkaButton->ForeColor = Color::White;
	}
	private: System::Void orelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		coinBet = 1;
		reshkaButton->ForeColor = Color::White;
		orelButton->ForeColor = Color::Silver;
	}
	private: System::Void reshkaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		coinBet = 0;
		orelButton->ForeColor = Color::White;
		reshkaButton->ForeColor = Color::Silver;
	}
	private: System::Void redChipPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		userBet += 10;
		updateCurrentBet();
		redChipPictureBox->BackgroundImage = Image::FromFile("img/redChipPressed.png");
		Sleep(200);
		redChipPictureBox->BackgroundImage = Image::FromFile("img/redChip.png");
	}
	private: System::Void blueChipPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		userBet += 50;
		updateCurrentBet();
		blueChipPictureBox->BackgroundImage = Image::FromFile("img/blueChipPressed.png");
		Sleep(200);
		blueChipPictureBox->BackgroundImage = Image::FromFile("img/blueChip.png");
	}
	private: System::Void yellowChipPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		userBet += 100;
		updateCurrentBet();
		yellowChipPictureBox->BackgroundImage = Image::FromFile("img/yellowChipPressed.png");
		Sleep(200);
		yellowChipPictureBox->BackgroundImage = Image::FromFile("img/yellowChip.png");
	}
	private: System::Void greenChipPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		userBet += 500;
		updateCurrentBet();
		greenChipPictureBox->BackgroundImage = Image::FromFile("img/greenChipPressed.png");
		Sleep(200);
		greenChipPictureBox->BackgroundImage = Image::FromFile("img/greenChip.png");
	}

	void updateCurrentBet() {
		currentBetLabel->Text = "" + userBet;
	}
	void updateBalance() {
		userBalanceText->Text = "" + userBalance;
	}
	void playerControl() {
		if (isPlaying) {
			player->Stop();
			isPlaying = false;
		}
		else {
			player->PlayLooping();
			isPlaying = true;
		}
	}
	private: System::Void volumePicture_Click(System::Object^ sender, System::EventArgs^ e) {
		playerControl();
	}
	private: System::Void volumeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		playerControl();
	}

	void adminNav() {
		Admin^ adminScreen = gcnew Admin();
		adminScreen->ShowDialog();
	}
	private: System::Void adminIcon_Click(System::Object^ sender, System::EventArgs^ e) {
		adminNav();
	}
	private: System::Void adminButton_Click(System::Object^ sender, System::EventArgs^ e) {
		adminNav();
	}
	void showHelp() {
		System::Windows::Forms::MessageBox::Show(
			"Игровой режим - Орел/Решка\n\n"
			"Добро пожаловать в игровой режим Орел/Решка! Здесь вы можете проверить свою удачу, угадывая выпадение орла или решки.\n\n"
			"Правила игры:\n\n"
			"1. Вам будет предложено сделать выбор между орлом и решкой.\n\n"
			"2. Выберите ставку, нажав на фишки снизу.\n\n"
			"3. Выберите свой вариант, нажав на кнопку 'Орел' или 'Решка'.\n\n"
			"4. После того, как вы сделали свой выбор, нажмите кнопку 'Подбросить' или 'Старт', чтобы бросить монетку.\n\n"
			"5. Монетка будет подброшена, и вы увидите результат - орел или решка.\n\n"
			"6. Если ваш выбор совпал с результатом, вы победите!\n\n"
			"7. Вы можете продолжать игру, делая новые выборы после каждого подбрасывания монетки.\n\n"
			"Удачи и хорошей игры в Орел/Решка!",
			"Справка - Игровой режим Орел/Решка",
			System::Windows::Forms::MessageBoxButtons::OK,
			System::Windows::Forms::MessageBoxIcon::Information);
	}
	private: System::Void helpIcon_Click(System::Object^ sender, System::EventArgs^ e) {
		showHelp();
	}
	private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		showHelp();
	}
};
}
