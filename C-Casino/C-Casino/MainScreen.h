#pragma once
#include <iostream>
#include "RandomGenerator.h"
#include <vector>

namespace CCasino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainScreen
	/// </summary>
	public ref class MainScreen : public System::Windows::Forms::Form
	{
	public:
		MainScreen(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		int userIndex;

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ betButton1;
	private: System::Windows::Forms::Button^ betButton2;
	private: System::Windows::Forms::Button^ betButton3;
	private: System::Windows::Forms::Button^ betButton6;
	private: System::Windows::Forms::Button^ betButton5;
	private: System::Windows::Forms::Button^ betButton4;
	private: System::Windows::Forms::Button^ betButton9;
	private: System::Windows::Forms::Button^ betButton8;
	private: System::Windows::Forms::Button^ betButton7;
	private: System::Windows::Forms::Button^ betButton12;
	private: System::Windows::Forms::Button^ betButton11;
	private: System::Windows::Forms::Button^ betButton10;
	private: System::Windows::Forms::Button^ betButton18;
	private: System::Windows::Forms::Button^ betButton17;
	private: System::Windows::Forms::Button^ betButton16;
	private: System::Windows::Forms::Button^ betButton15;
	private: System::Windows::Forms::Button^ betButton14;
	private: System::Windows::Forms::Button^ betButton13;
	private: System::Windows::Forms::Button^ betButton27;
	private: System::Windows::Forms::Button^ betButton26;
	private: System::Windows::Forms::Button^ betButton25;
	private: System::Windows::Forms::Button^ betButton24;
	private: System::Windows::Forms::Button^ betButton23;
	private: System::Windows::Forms::Button^ betButton22;
	private: System::Windows::Forms::Button^ betButton21;
	private: System::Windows::Forms::Button^ betButton20;
	private: System::Windows::Forms::Button^ betButton19;
	private: System::Windows::Forms::Button^ betButton36;
	private: System::Windows::Forms::Button^ betButton35;
	private: System::Windows::Forms::Button^ betButton34;
	private: System::Windows::Forms::Button^ betButton33;
	private: System::Windows::Forms::Button^ betButton32;
	private: System::Windows::Forms::Button^ betButton31;
	private: System::Windows::Forms::Button^ betButton30;
	private: System::Windows::Forms::Button^ betButton29;
	private: System::Windows::Forms::Button^ betButton28;


	private: System::Windows::Forms::Button^ betLine1;
	private: System::Windows::Forms::Button^ betLine2;
	private: System::Windows::Forms::Button^ betLine3;
	private: System::Windows::Forms::Button^ betFirst12;
	private: System::Windows::Forms::Button^ betThird12;
	private: System::Windows::Forms::Button^ betSecond12;
	private: System::Windows::Forms::Button^ betButtonFirstHalf;
	private: System::Windows::Forms::Button^ betButtonEven;


	private: System::Windows::Forms::Button^ betButtonRed;
	private: System::Windows::Forms::Button^ betButtonBlack;
	private: System::Windows::Forms::Button^ betButtonOdd;



	private: System::Windows::Forms::Button^ betButtonSecondHalf;
	private: System::Windows::Forms::Button^ betButtonZero;
	private: System::Windows::Forms::Button^ exitButton;



	private: System::Windows::Forms::Button^ spinButton;
	public: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ wheelTimer;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ winNumLable;
	private: System::Windows::Forms::PictureBox^ redChipPictureBox;
	private: System::Windows::Forms::PictureBox^ blueChipPictureBox;
	private: System::Windows::Forms::PictureBox^ yellowChipPictureBox;
	private: System::Windows::Forms::PictureBox^ greenChipPictureBox;

	private: System::Windows::Forms::Label^ redChipBetText;
	private: System::Windows::Forms::Label^ blueChipBetText;
	private: System::Windows::Forms::Label^ yellowChipBetText;
	private: System::Windows::Forms::Label^ greenChipBetText;
	public:
	private: System::ComponentModel::IContainer^ components;
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainScreen::typeid));
			this->betButton1 = (gcnew System::Windows::Forms::Button());
			this->betButton2 = (gcnew System::Windows::Forms::Button());
			this->betButton3 = (gcnew System::Windows::Forms::Button());
			this->betButton6 = (gcnew System::Windows::Forms::Button());
			this->betButton5 = (gcnew System::Windows::Forms::Button());
			this->betButton4 = (gcnew System::Windows::Forms::Button());
			this->betButton9 = (gcnew System::Windows::Forms::Button());
			this->betButton8 = (gcnew System::Windows::Forms::Button());
			this->betButton7 = (gcnew System::Windows::Forms::Button());
			this->betButton12 = (gcnew System::Windows::Forms::Button());
			this->betButton11 = (gcnew System::Windows::Forms::Button());
			this->betButton10 = (gcnew System::Windows::Forms::Button());
			this->betButton18 = (gcnew System::Windows::Forms::Button());
			this->betButton17 = (gcnew System::Windows::Forms::Button());
			this->betButton16 = (gcnew System::Windows::Forms::Button());
			this->betButton15 = (gcnew System::Windows::Forms::Button());
			this->betButton14 = (gcnew System::Windows::Forms::Button());
			this->betButton13 = (gcnew System::Windows::Forms::Button());
			this->betButton27 = (gcnew System::Windows::Forms::Button());
			this->betButton26 = (gcnew System::Windows::Forms::Button());
			this->betButton25 = (gcnew System::Windows::Forms::Button());
			this->betButton24 = (gcnew System::Windows::Forms::Button());
			this->betButton23 = (gcnew System::Windows::Forms::Button());
			this->betButton22 = (gcnew System::Windows::Forms::Button());
			this->betButton21 = (gcnew System::Windows::Forms::Button());
			this->betButton20 = (gcnew System::Windows::Forms::Button());
			this->betButton19 = (gcnew System::Windows::Forms::Button());
			this->betButton36 = (gcnew System::Windows::Forms::Button());
			this->betButton35 = (gcnew System::Windows::Forms::Button());
			this->betButton34 = (gcnew System::Windows::Forms::Button());
			this->betButton33 = (gcnew System::Windows::Forms::Button());
			this->betButton32 = (gcnew System::Windows::Forms::Button());
			this->betButton31 = (gcnew System::Windows::Forms::Button());
			this->betButton30 = (gcnew System::Windows::Forms::Button());
			this->betButton29 = (gcnew System::Windows::Forms::Button());
			this->betButton28 = (gcnew System::Windows::Forms::Button());
			this->betLine1 = (gcnew System::Windows::Forms::Button());
			this->betLine2 = (gcnew System::Windows::Forms::Button());
			this->betLine3 = (gcnew System::Windows::Forms::Button());
			this->betFirst12 = (gcnew System::Windows::Forms::Button());
			this->betThird12 = (gcnew System::Windows::Forms::Button());
			this->betSecond12 = (gcnew System::Windows::Forms::Button());
			this->betButtonFirstHalf = (gcnew System::Windows::Forms::Button());
			this->betButtonEven = (gcnew System::Windows::Forms::Button());
			this->betButtonRed = (gcnew System::Windows::Forms::Button());
			this->betButtonBlack = (gcnew System::Windows::Forms::Button());
			this->betButtonOdd = (gcnew System::Windows::Forms::Button());
			this->betButtonSecondHalf = (gcnew System::Windows::Forms::Button());
			this->betButtonZero = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->spinButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->wheelTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->winNumLable = (gcnew System::Windows::Forms::Label());
			this->redChipPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->blueChipPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->yellowChipPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->greenChipPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->redChipBetText = (gcnew System::Windows::Forms::Label());
			this->blueChipBetText = (gcnew System::Windows::Forms::Label());
			this->yellowChipBetText = (gcnew System::Windows::Forms::Label());
			this->greenChipBetText = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redChipPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blueChipPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yellowChipPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenChipPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// betButton1
			// 
			this->betButton1->AutoSize = true;
			this->betButton1->BackColor = System::Drawing::Color::Firebrick;
			this->betButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton1->Location = System::Drawing::Point(404, 196);
			this->betButton1->Margin = System::Windows::Forms::Padding(0);
			this->betButton1->Name = L"betButton1";
			this->betButton1->Size = System::Drawing::Size(65, 65);
			this->betButton1->TabIndex = 0;
			this->betButton1->Text = L"1";
			this->betButton1->UseVisualStyleBackColor = false;
			// 
			// betButton2
			// 
			this->betButton2->AutoSize = true;
			this->betButton2->BackColor = System::Drawing::Color::Black;
			this->betButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton2->Location = System::Drawing::Point(404, 134);
			this->betButton2->Margin = System::Windows::Forms::Padding(0);
			this->betButton2->Name = L"betButton2";
			this->betButton2->Size = System::Drawing::Size(65, 65);
			this->betButton2->TabIndex = 1;
			this->betButton2->Text = L"2";
			this->betButton2->UseVisualStyleBackColor = false;
			// 
			// betButton3
			// 
			this->betButton3->AutoSize = true;
			this->betButton3->BackColor = System::Drawing::Color::Firebrick;
			this->betButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton3->Location = System::Drawing::Point(404, 72);
			this->betButton3->Margin = System::Windows::Forms::Padding(0);
			this->betButton3->Name = L"betButton3";
			this->betButton3->Size = System::Drawing::Size(65, 65);
			this->betButton3->TabIndex = 2;
			this->betButton3->Text = L"3";
			this->betButton3->UseVisualStyleBackColor = false;
			// 
			// betButton6
			// 
			this->betButton6->AutoSize = true;
			this->betButton6->BackColor = System::Drawing::Color::Black;
			this->betButton6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton6->Location = System::Drawing::Point(465, 72);
			this->betButton6->Margin = System::Windows::Forms::Padding(0);
			this->betButton6->Name = L"betButton6";
			this->betButton6->Size = System::Drawing::Size(65, 65);
			this->betButton6->TabIndex = 5;
			this->betButton6->Text = L"6";
			this->betButton6->UseVisualStyleBackColor = false;
			// 
			// betButton5
			// 
			this->betButton5->AutoSize = true;
			this->betButton5->BackColor = System::Drawing::Color::Firebrick;
			this->betButton5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton5->Location = System::Drawing::Point(465, 134);
			this->betButton5->Margin = System::Windows::Forms::Padding(0);
			this->betButton5->Name = L"betButton5";
			this->betButton5->Size = System::Drawing::Size(65, 65);
			this->betButton5->TabIndex = 4;
			this->betButton5->Text = L"5";
			this->betButton5->UseVisualStyleBackColor = false;
			// 
			// betButton4
			// 
			this->betButton4->AutoSize = true;
			this->betButton4->BackColor = System::Drawing::Color::Black;
			this->betButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton4->Location = System::Drawing::Point(465, 196);
			this->betButton4->Margin = System::Windows::Forms::Padding(0);
			this->betButton4->Name = L"betButton4";
			this->betButton4->Size = System::Drawing::Size(65, 65);
			this->betButton4->TabIndex = 3;
			this->betButton4->Text = L"4";
			this->betButton4->UseVisualStyleBackColor = false;
			// 
			// betButton9
			// 
			this->betButton9->AutoSize = true;
			this->betButton9->BackColor = System::Drawing::Color::Firebrick;
			this->betButton9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton9->Location = System::Drawing::Point(530, 72);
			this->betButton9->Margin = System::Windows::Forms::Padding(0);
			this->betButton9->Name = L"betButton9";
			this->betButton9->Size = System::Drawing::Size(65, 65);
			this->betButton9->TabIndex = 8;
			this->betButton9->Text = L"9";
			this->betButton9->UseVisualStyleBackColor = false;
			// 
			// betButton8
			// 
			this->betButton8->AutoSize = true;
			this->betButton8->BackColor = System::Drawing::Color::Black;
			this->betButton8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton8->Location = System::Drawing::Point(530, 134);
			this->betButton8->Margin = System::Windows::Forms::Padding(0);
			this->betButton8->Name = L"betButton8";
			this->betButton8->Size = System::Drawing::Size(65, 65);
			this->betButton8->TabIndex = 7;
			this->betButton8->Text = L"8";
			this->betButton8->UseVisualStyleBackColor = false;
			// 
			// betButton7
			// 
			this->betButton7->AutoSize = true;
			this->betButton7->BackColor = System::Drawing::Color::Firebrick;
			this->betButton7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton7->Location = System::Drawing::Point(530, 196);
			this->betButton7->Margin = System::Windows::Forms::Padding(0);
			this->betButton7->Name = L"betButton7";
			this->betButton7->Size = System::Drawing::Size(65, 65);
			this->betButton7->TabIndex = 6;
			this->betButton7->Text = L"7";
			this->betButton7->UseVisualStyleBackColor = false;
			// 
			// betButton12
			// 
			this->betButton12->AutoSize = true;
			this->betButton12->BackColor = System::Drawing::Color::Black;
			this->betButton12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton12->Location = System::Drawing::Point(590, 72);
			this->betButton12->Margin = System::Windows::Forms::Padding(0);
			this->betButton12->Name = L"betButton12";
			this->betButton12->Size = System::Drawing::Size(65, 65);
			this->betButton12->TabIndex = 11;
			this->betButton12->Text = L"12";
			this->betButton12->UseVisualStyleBackColor = false;
			// 
			// betButton11
			// 
			this->betButton11->AutoSize = true;
			this->betButton11->BackColor = System::Drawing::Color::Firebrick;
			this->betButton11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton11->Location = System::Drawing::Point(590, 134);
			this->betButton11->Margin = System::Windows::Forms::Padding(0);
			this->betButton11->Name = L"betButton11";
			this->betButton11->Size = System::Drawing::Size(65, 65);
			this->betButton11->TabIndex = 10;
			this->betButton11->Text = L"11";
			this->betButton11->UseVisualStyleBackColor = false;
			// 
			// betButton10
			// 
			this->betButton10->AutoSize = true;
			this->betButton10->BackColor = System::Drawing::Color::Black;
			this->betButton10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton10->Location = System::Drawing::Point(590, 196);
			this->betButton10->Margin = System::Windows::Forms::Padding(0);
			this->betButton10->Name = L"betButton10";
			this->betButton10->Size = System::Drawing::Size(65, 65);
			this->betButton10->TabIndex = 9;
			this->betButton10->Text = L"10";
			this->betButton10->UseVisualStyleBackColor = false;
			// 
			// betButton18
			// 
			this->betButton18->AutoSize = true;
			this->betButton18->BackColor = System::Drawing::Color::Black;
			this->betButton18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton18->Location = System::Drawing::Point(716, 72);
			this->betButton18->Margin = System::Windows::Forms::Padding(0);
			this->betButton18->Name = L"betButton18";
			this->betButton18->Size = System::Drawing::Size(65, 65);
			this->betButton18->TabIndex = 17;
			this->betButton18->Text = L"18";
			this->betButton18->UseVisualStyleBackColor = false;
			// 
			// betButton17
			// 
			this->betButton17->AutoSize = true;
			this->betButton17->BackColor = System::Drawing::Color::Firebrick;
			this->betButton17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton17->Location = System::Drawing::Point(716, 134);
			this->betButton17->Margin = System::Windows::Forms::Padding(0);
			this->betButton17->Name = L"betButton17";
			this->betButton17->Size = System::Drawing::Size(65, 65);
			this->betButton17->TabIndex = 16;
			this->betButton17->Text = L"17";
			this->betButton17->UseVisualStyleBackColor = false;
			// 
			// betButton16
			// 
			this->betButton16->AutoSize = true;
			this->betButton16->BackColor = System::Drawing::Color::Black;
			this->betButton16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton16->Location = System::Drawing::Point(716, 196);
			this->betButton16->Margin = System::Windows::Forms::Padding(0);
			this->betButton16->Name = L"betButton16";
			this->betButton16->Size = System::Drawing::Size(65, 65);
			this->betButton16->TabIndex = 15;
			this->betButton16->Text = L"16";
			this->betButton16->UseVisualStyleBackColor = false;
			// 
			// betButton15
			// 
			this->betButton15->AutoSize = true;
			this->betButton15->BackColor = System::Drawing::Color::Firebrick;
			this->betButton15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton15->Location = System::Drawing::Point(655, 72);
			this->betButton15->Margin = System::Windows::Forms::Padding(0);
			this->betButton15->Name = L"betButton15";
			this->betButton15->Size = System::Drawing::Size(65, 65);
			this->betButton15->TabIndex = 14;
			this->betButton15->Text = L"15";
			this->betButton15->UseVisualStyleBackColor = false;
			// 
			// betButton14
			// 
			this->betButton14->AutoSize = true;
			this->betButton14->BackColor = System::Drawing::Color::Black;
			this->betButton14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton14->Location = System::Drawing::Point(655, 134);
			this->betButton14->Margin = System::Windows::Forms::Padding(0);
			this->betButton14->Name = L"betButton14";
			this->betButton14->Size = System::Drawing::Size(65, 65);
			this->betButton14->TabIndex = 13;
			this->betButton14->Text = L"14";
			this->betButton14->UseVisualStyleBackColor = false;
			// 
			// betButton13
			// 
			this->betButton13->AutoSize = true;
			this->betButton13->BackColor = System::Drawing::Color::Firebrick;
			this->betButton13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton13->Location = System::Drawing::Point(655, 196);
			this->betButton13->Margin = System::Windows::Forms::Padding(0);
			this->betButton13->Name = L"betButton13";
			this->betButton13->Size = System::Drawing::Size(65, 65);
			this->betButton13->TabIndex = 12;
			this->betButton13->Text = L"13";
			this->betButton13->UseVisualStyleBackColor = false;
			// 
			// betButton27
			// 
			this->betButton27->AutoSize = true;
			this->betButton27->BackColor = System::Drawing::Color::Firebrick;
			this->betButton27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton27->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton27->Location = System::Drawing::Point(906, 72);
			this->betButton27->Margin = System::Windows::Forms::Padding(0);
			this->betButton27->Name = L"betButton27";
			this->betButton27->Size = System::Drawing::Size(65, 65);
			this->betButton27->TabIndex = 26;
			this->betButton27->Text = L"27";
			this->betButton27->UseVisualStyleBackColor = false;
			// 
			// betButton26
			// 
			this->betButton26->AutoSize = true;
			this->betButton26->BackColor = System::Drawing::Color::Black;
			this->betButton26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton26->Location = System::Drawing::Point(906, 134);
			this->betButton26->Margin = System::Windows::Forms::Padding(0);
			this->betButton26->Name = L"betButton26";
			this->betButton26->Size = System::Drawing::Size(65, 65);
			this->betButton26->TabIndex = 25;
			this->betButton26->Text = L"26";
			this->betButton26->UseVisualStyleBackColor = false;
			// 
			// betButton25
			// 
			this->betButton25->AutoSize = true;
			this->betButton25->BackColor = System::Drawing::Color::Firebrick;
			this->betButton25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton25->Location = System::Drawing::Point(906, 196);
			this->betButton25->Margin = System::Windows::Forms::Padding(0);
			this->betButton25->Name = L"betButton25";
			this->betButton25->Size = System::Drawing::Size(65, 65);
			this->betButton25->TabIndex = 24;
			this->betButton25->Text = L"25";
			this->betButton25->UseVisualStyleBackColor = false;
			// 
			// betButton24
			// 
			this->betButton24->AutoSize = true;
			this->betButton24->BackColor = System::Drawing::Color::Black;
			this->betButton24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton24->Location = System::Drawing::Point(845, 72);
			this->betButton24->Margin = System::Windows::Forms::Padding(0);
			this->betButton24->Name = L"betButton24";
			this->betButton24->Size = System::Drawing::Size(65, 65);
			this->betButton24->TabIndex = 23;
			this->betButton24->Text = L"24";
			this->betButton24->UseVisualStyleBackColor = false;
			// 
			// betButton23
			// 
			this->betButton23->AutoSize = true;
			this->betButton23->BackColor = System::Drawing::Color::Firebrick;
			this->betButton23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton23->Location = System::Drawing::Point(845, 134);
			this->betButton23->Margin = System::Windows::Forms::Padding(0);
			this->betButton23->Name = L"betButton23";
			this->betButton23->Size = System::Drawing::Size(65, 65);
			this->betButton23->TabIndex = 22;
			this->betButton23->Text = L"23";
			this->betButton23->UseVisualStyleBackColor = false;
			// 
			// betButton22
			// 
			this->betButton22->AutoSize = true;
			this->betButton22->BackColor = System::Drawing::Color::Black;
			this->betButton22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton22->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton22->Location = System::Drawing::Point(845, 196);
			this->betButton22->Margin = System::Windows::Forms::Padding(0);
			this->betButton22->Name = L"betButton22";
			this->betButton22->Size = System::Drawing::Size(65, 65);
			this->betButton22->TabIndex = 21;
			this->betButton22->Text = L"22";
			this->betButton22->UseVisualStyleBackColor = false;
			// 
			// betButton21
			// 
			this->betButton21->AutoSize = true;
			this->betButton21->BackColor = System::Drawing::Color::Firebrick;
			this->betButton21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton21->Location = System::Drawing::Point(780, 72);
			this->betButton21->Margin = System::Windows::Forms::Padding(0);
			this->betButton21->Name = L"betButton21";
			this->betButton21->Size = System::Drawing::Size(65, 65);
			this->betButton21->TabIndex = 20;
			this->betButton21->Text = L"21";
			this->betButton21->UseVisualStyleBackColor = false;
			// 
			// betButton20
			// 
			this->betButton20->AutoSize = true;
			this->betButton20->BackColor = System::Drawing::Color::Black;
			this->betButton20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton20->Location = System::Drawing::Point(780, 134);
			this->betButton20->Margin = System::Windows::Forms::Padding(0);
			this->betButton20->Name = L"betButton20";
			this->betButton20->Size = System::Drawing::Size(65, 65);
			this->betButton20->TabIndex = 19;
			this->betButton20->Text = L"20";
			this->betButton20->UseVisualStyleBackColor = false;
			// 
			// betButton19
			// 
			this->betButton19->AutoSize = true;
			this->betButton19->BackColor = System::Drawing::Color::Firebrick;
			this->betButton19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton19->Location = System::Drawing::Point(780, 196);
			this->betButton19->Margin = System::Windows::Forms::Padding(0);
			this->betButton19->Name = L"betButton19";
			this->betButton19->Size = System::Drawing::Size(65, 65);
			this->betButton19->TabIndex = 18;
			this->betButton19->Text = L"19";
			this->betButton19->UseVisualStyleBackColor = false;
			// 
			// betButton36
			// 
			this->betButton36->AutoSize = true;
			this->betButton36->BackColor = System::Drawing::Color::Black;
			this->betButton36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton36->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton36->Location = System::Drawing::Point(1097, 72);
			this->betButton36->Margin = System::Windows::Forms::Padding(0);
			this->betButton36->Name = L"betButton36";
			this->betButton36->Size = System::Drawing::Size(65, 65);
			this->betButton36->TabIndex = 35;
			this->betButton36->Text = L"36";
			this->betButton36->UseVisualStyleBackColor = false;
			// 
			// betButton35
			// 
			this->betButton35->AutoSize = true;
			this->betButton35->BackColor = System::Drawing::Color::Firebrick;
			this->betButton35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton35->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton35->Location = System::Drawing::Point(1097, 134);
			this->betButton35->Margin = System::Windows::Forms::Padding(0);
			this->betButton35->Name = L"betButton35";
			this->betButton35->Size = System::Drawing::Size(65, 65);
			this->betButton35->TabIndex = 34;
			this->betButton35->Text = L"35";
			this->betButton35->UseVisualStyleBackColor = false;
			// 
			// betButton34
			// 
			this->betButton34->AutoSize = true;
			this->betButton34->BackColor = System::Drawing::Color::Black;
			this->betButton34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton34->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton34->Location = System::Drawing::Point(1097, 196);
			this->betButton34->Margin = System::Windows::Forms::Padding(0);
			this->betButton34->Name = L"betButton34";
			this->betButton34->Size = System::Drawing::Size(65, 65);
			this->betButton34->TabIndex = 33;
			this->betButton34->Text = L"34";
			this->betButton34->UseVisualStyleBackColor = false;
			// 
			// betButton33
			// 
			this->betButton33->AutoSize = true;
			this->betButton33->BackColor = System::Drawing::Color::Firebrick;
			this->betButton33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton33->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton33->Location = System::Drawing::Point(1036, 72);
			this->betButton33->Margin = System::Windows::Forms::Padding(0);
			this->betButton33->Name = L"betButton33";
			this->betButton33->Size = System::Drawing::Size(65, 65);
			this->betButton33->TabIndex = 32;
			this->betButton33->Text = L"33";
			this->betButton33->UseVisualStyleBackColor = false;
			// 
			// betButton32
			// 
			this->betButton32->AutoSize = true;
			this->betButton32->BackColor = System::Drawing::Color::Black;
			this->betButton32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton32->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton32->Location = System::Drawing::Point(1036, 134);
			this->betButton32->Margin = System::Windows::Forms::Padding(0);
			this->betButton32->Name = L"betButton32";
			this->betButton32->Size = System::Drawing::Size(65, 65);
			this->betButton32->TabIndex = 31;
			this->betButton32->Text = L"32";
			this->betButton32->UseVisualStyleBackColor = false;
			// 
			// betButton31
			// 
			this->betButton31->AutoSize = true;
			this->betButton31->BackColor = System::Drawing::Color::Firebrick;
			this->betButton31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton31->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton31->Location = System::Drawing::Point(1036, 196);
			this->betButton31->Margin = System::Windows::Forms::Padding(0);
			this->betButton31->Name = L"betButton31";
			this->betButton31->Size = System::Drawing::Size(65, 65);
			this->betButton31->TabIndex = 30;
			this->betButton31->Text = L"31";
			this->betButton31->UseVisualStyleBackColor = false;
			// 
			// betButton30
			// 
			this->betButton30->AutoSize = true;
			this->betButton30->BackColor = System::Drawing::Color::Black;
			this->betButton30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton30->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton30->Location = System::Drawing::Point(971, 72);
			this->betButton30->Margin = System::Windows::Forms::Padding(0);
			this->betButton30->Name = L"betButton30";
			this->betButton30->Size = System::Drawing::Size(65, 65);
			this->betButton30->TabIndex = 29;
			this->betButton30->Text = L"30";
			this->betButton30->UseVisualStyleBackColor = false;
			// 
			// betButton29
			// 
			this->betButton29->AutoSize = true;
			this->betButton29->BackColor = System::Drawing::Color::Firebrick;
			this->betButton29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton29->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton29->Location = System::Drawing::Point(971, 134);
			this->betButton29->Margin = System::Windows::Forms::Padding(0);
			this->betButton29->Name = L"betButton29";
			this->betButton29->Size = System::Drawing::Size(65, 65);
			this->betButton29->TabIndex = 28;
			this->betButton29->Text = L"29";
			this->betButton29->UseVisualStyleBackColor = false;
			// 
			// betButton28
			// 
			this->betButton28->AutoSize = true;
			this->betButton28->BackColor = System::Drawing::Color::Black;
			this->betButton28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButton28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButton28->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButton28->Location = System::Drawing::Point(971, 196);
			this->betButton28->Margin = System::Windows::Forms::Padding(0);
			this->betButton28->Name = L"betButton28";
			this->betButton28->Size = System::Drawing::Size(65, 65);
			this->betButton28->TabIndex = 27;
			this->betButton28->Text = L"28";
			this->betButton28->UseVisualStyleBackColor = false;
			// 
			// betLine1
			// 
			this->betLine1->AutoSize = true;
			this->betLine1->BackColor = System::Drawing::Color::Transparent;
			this->betLine1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betLine1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betLine1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betLine1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betLine1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betLine1->Location = System::Drawing::Point(1162, 196);
			this->betLine1->Margin = System::Windows::Forms::Padding(0);
			this->betLine1->Name = L"betLine1";
			this->betLine1->Size = System::Drawing::Size(56, 65);
			this->betLine1->TabIndex = 36;
			this->betLine1->Text = L"2 to 1";
			this->betLine1->UseVisualStyleBackColor = false;
			// 
			// betLine2
			// 
			this->betLine2->AutoSize = true;
			this->betLine2->BackColor = System::Drawing::Color::Transparent;
			this->betLine2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betLine2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betLine2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betLine2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betLine2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betLine2->Location = System::Drawing::Point(1162, 134);
			this->betLine2->Margin = System::Windows::Forms::Padding(0);
			this->betLine2->Name = L"betLine2";
			this->betLine2->Size = System::Drawing::Size(56, 65);
			this->betLine2->TabIndex = 37;
			this->betLine2->Text = L"2 to 1";
			this->betLine2->UseVisualStyleBackColor = false;
			// 
			// betLine3
			// 
			this->betLine3->AutoSize = true;
			this->betLine3->BackColor = System::Drawing::Color::Transparent;
			this->betLine3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betLine3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betLine3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betLine3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betLine3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betLine3->Location = System::Drawing::Point(1162, 72);
			this->betLine3->Margin = System::Windows::Forms::Padding(0);
			this->betLine3->Name = L"betLine3";
			this->betLine3->Size = System::Drawing::Size(56, 65);
			this->betLine3->TabIndex = 38;
			this->betLine3->Text = L"2 to 1";
			this->betLine3->UseVisualStyleBackColor = false;
			// 
			// betFirst12
			// 
			this->betFirst12->AutoSize = true;
			this->betFirst12->BackColor = System::Drawing::Color::Transparent;
			this->betFirst12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betFirst12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betFirst12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betFirst12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betFirst12->Location = System::Drawing::Point(404, 261);
			this->betFirst12->Margin = System::Windows::Forms::Padding(0);
			this->betFirst12->Name = L"betFirst12";
			this->betFirst12->Size = System::Drawing::Size(251, 49);
			this->betFirst12->TabIndex = 39;
			this->betFirst12->Text = L" 1 st 12";
			this->betFirst12->UseVisualStyleBackColor = false;
			// 
			// betThird12
			// 
			this->betThird12->AutoSize = true;
			this->betThird12->BackColor = System::Drawing::Color::Transparent;
			this->betThird12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betThird12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betThird12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betThird12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betThird12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betThird12->Location = System::Drawing::Point(906, 261);
			this->betThird12->Margin = System::Windows::Forms::Padding(0);
			this->betThird12->Name = L"betThird12";
			this->betThird12->Size = System::Drawing::Size(256, 49);
			this->betThird12->TabIndex = 40;
			this->betThird12->Text = L"3 rd 12";
			this->betThird12->UseVisualStyleBackColor = false;
			// 
			// betSecond12
			// 
			this->betSecond12->AutoSize = true;
			this->betSecond12->BackColor = System::Drawing::Color::Transparent;
			this->betSecond12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betSecond12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betSecond12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betSecond12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betSecond12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betSecond12->Location = System::Drawing::Point(655, 261);
			this->betSecond12->Margin = System::Windows::Forms::Padding(0);
			this->betSecond12->Name = L"betSecond12";
			this->betSecond12->Size = System::Drawing::Size(251, 49);
			this->betSecond12->TabIndex = 41;
			this->betSecond12->Text = L"2 nd 12";
			this->betSecond12->UseVisualStyleBackColor = false;
			// 
			// betButtonFirstHalf
			// 
			this->betButtonFirstHalf->AutoSize = true;
			this->betButtonFirstHalf->BackColor = System::Drawing::Color::Transparent;
			this->betButtonFirstHalf->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betButtonFirstHalf->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betButtonFirstHalf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButtonFirstHalf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButtonFirstHalf->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButtonFirstHalf->Location = System::Drawing::Point(404, 310);
			this->betButtonFirstHalf->Margin = System::Windows::Forms::Padding(0);
			this->betButtonFirstHalf->Name = L"betButtonFirstHalf";
			this->betButtonFirstHalf->Size = System::Drawing::Size(126, 49);
			this->betButtonFirstHalf->TabIndex = 42;
			this->betButtonFirstHalf->Text = L"1 to 18";
			this->betButtonFirstHalf->UseVisualStyleBackColor = false;
			// 
			// betButtonEven
			// 
			this->betButtonEven->AutoSize = true;
			this->betButtonEven->BackColor = System::Drawing::Color::Transparent;
			this->betButtonEven->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betButtonEven->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betButtonEven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButtonEven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButtonEven->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButtonEven->Location = System::Drawing::Point(530, 310);
			this->betButtonEven->Margin = System::Windows::Forms::Padding(0);
			this->betButtonEven->Name = L"betButtonEven";
			this->betButtonEven->Size = System::Drawing::Size(125, 49);
			this->betButtonEven->TabIndex = 43;
			this->betButtonEven->Text = L"EVEN";
			this->betButtonEven->UseVisualStyleBackColor = false;
			// 
			// betButtonRed
			// 
			this->betButtonRed->AutoSize = true;
			this->betButtonRed->BackColor = System::Drawing::Color::Transparent;
			this->betButtonRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"betButtonRed.BackgroundImage")));
			this->betButtonRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->betButtonRed->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betButtonRed->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betButtonRed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButtonRed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButtonRed->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButtonRed->Location = System::Drawing::Point(655, 310);
			this->betButtonRed->Margin = System::Windows::Forms::Padding(0);
			this->betButtonRed->Name = L"betButtonRed";
			this->betButtonRed->Size = System::Drawing::Size(126, 49);
			this->betButtonRed->TabIndex = 44;
			this->betButtonRed->UseVisualStyleBackColor = false;
			// 
			// betButtonBlack
			// 
			this->betButtonBlack->AutoSize = true;
			this->betButtonBlack->BackColor = System::Drawing::Color::Transparent;
			this->betButtonBlack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"betButtonBlack.BackgroundImage")));
			this->betButtonBlack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->betButtonBlack->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betButtonBlack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betButtonBlack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButtonBlack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButtonBlack->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButtonBlack->Location = System::Drawing::Point(780, 310);
			this->betButtonBlack->Margin = System::Windows::Forms::Padding(0);
			this->betButtonBlack->Name = L"betButtonBlack";
			this->betButtonBlack->Size = System::Drawing::Size(126, 49);
			this->betButtonBlack->TabIndex = 45;
			this->betButtonBlack->UseVisualStyleBackColor = false;
			// 
			// betButtonOdd
			// 
			this->betButtonOdd->AutoSize = true;
			this->betButtonOdd->BackColor = System::Drawing::Color::Transparent;
			this->betButtonOdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betButtonOdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betButtonOdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButtonOdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButtonOdd->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButtonOdd->Location = System::Drawing::Point(906, 310);
			this->betButtonOdd->Margin = System::Windows::Forms::Padding(0);
			this->betButtonOdd->Name = L"betButtonOdd";
			this->betButtonOdd->Size = System::Drawing::Size(130, 49);
			this->betButtonOdd->TabIndex = 46;
			this->betButtonOdd->Text = L"ODD";
			this->betButtonOdd->UseVisualStyleBackColor = false;
			// 
			// betButtonSecondHalf
			// 
			this->betButtonSecondHalf->AutoSize = true;
			this->betButtonSecondHalf->BackColor = System::Drawing::Color::Transparent;
			this->betButtonSecondHalf->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betButtonSecondHalf->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betButtonSecondHalf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButtonSecondHalf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->betButtonSecondHalf->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->betButtonSecondHalf->Location = System::Drawing::Point(1036, 310);
			this->betButtonSecondHalf->Margin = System::Windows::Forms::Padding(0);
			this->betButtonSecondHalf->Name = L"betButtonSecondHalf";
			this->betButtonSecondHalf->Size = System::Drawing::Size(126, 49);
			this->betButtonSecondHalf->TabIndex = 47;
			this->betButtonSecondHalf->Text = L"19 to 36";
			this->betButtonSecondHalf->UseVisualStyleBackColor = false;
			// 
			// betButtonZero
			// 
			this->betButtonZero->AutoSize = true;
			this->betButtonZero->BackColor = System::Drawing::Color::Transparent;
			this->betButtonZero->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"betButtonZero.BackgroundImage")));
			this->betButtonZero->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->betButtonZero->FlatAppearance->BorderSize = 0;
			this->betButtonZero->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->betButtonZero->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->betButtonZero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->betButtonZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->betButtonZero->ForeColor = System::Drawing::Color::Transparent;
			this->betButtonZero->Location = System::Drawing::Point(340, 72);
			this->betButtonZero->Margin = System::Windows::Forms::Padding(0);
			this->betButtonZero->Name = L"betButtonZero";
			this->betButtonZero->Size = System::Drawing::Size(64, 189);
			this->betButtonZero->TabIndex = 48;
			this->betButtonZero->Text = L"0";
			this->betButtonZero->UseVisualStyleBackColor = false;
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
			this->exitButton->Location = System::Drawing::Point(1192, 12);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(40, 40);
			this->exitButton->TabIndex = 50;
			this->exitButton->Text = L"X";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &MainScreen::button1_Click);
			// 
			// spinButton
			// 
			this->spinButton->Location = System::Drawing::Point(570, 460);
			this->spinButton->Name = L"spinButton";
			this->spinButton->Size = System::Drawing::Size(75, 23);
			this->spinButton->TabIndex = 51;
			this->spinButton->Text = L"Spin";
			this->spinButton->UseVisualStyleBackColor = true;
			this->spinButton->Click += gcnew System::EventHandler(this, &MainScreen::spinButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 310);
			this->pictureBox1->MaximumSize = System::Drawing::Size(377, 377);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(377, 377);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			// 
			// wheelTimer
			// 
			this->wheelTimer->Interval = 20;
			this->wheelTimer->Tick += gcnew System::EventHandler(this, &MainScreen::wheelTimer_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(177, 265);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 53;
			this->pictureBox2->TabStop = false;
			// 
			// winNumLable
			// 
			this->winNumLable->AutoSize = true;
			this->winNumLable->BackColor = System::Drawing::Color::Transparent;
			this->winNumLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->winNumLable->ForeColor = System::Drawing::Color::White;
			this->winNumLable->Location = System::Drawing::Point(166, 207);
			this->winNumLable->Name = L"winNumLable";
			this->winNumLable->Size = System::Drawing::Size(77, 54);
			this->winNumLable->TabIndex = 54;
			this->winNumLable->Text = L"33";
			// 
			// redChipPictureBox
			// 
			this->redChipPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->redChipPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redChipPictureBox.Image")));
			this->redChipPictureBox->Location = System::Drawing::Point(465, 602);
			this->redChipPictureBox->Name = L"redChipPictureBox";
			this->redChipPictureBox->Size = System::Drawing::Size(79, 85);
			this->redChipPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->redChipPictureBox->TabIndex = 55;
			this->redChipPictureBox->TabStop = false;
			this->redChipPictureBox->Click += gcnew System::EventHandler(this, &MainScreen::redChipPictureBox_Click);
			// 
			// blueChipPictureBox
			// 
			this->blueChipPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->blueChipPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blueChipPictureBox.Image")));
			this->blueChipPictureBox->Location = System::Drawing::Point(641, 602);
			this->blueChipPictureBox->Name = L"blueChipPictureBox";
			this->blueChipPictureBox->Size = System::Drawing::Size(79, 85);
			this->blueChipPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->blueChipPictureBox->TabIndex = 56;
			this->blueChipPictureBox->TabStop = false;
			this->blueChipPictureBox->Click += gcnew System::EventHandler(this, &MainScreen::blueChipPictureBox_Click);
			// 
			// yellowChipPictureBox
			// 
			this->yellowChipPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->yellowChipPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"yellowChipPictureBox.Image")));
			this->yellowChipPictureBox->Location = System::Drawing::Point(831, 602);
			this->yellowChipPictureBox->Name = L"yellowChipPictureBox";
			this->yellowChipPictureBox->Size = System::Drawing::Size(79, 85);
			this->yellowChipPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->yellowChipPictureBox->TabIndex = 57;
			this->yellowChipPictureBox->TabStop = false;
			this->yellowChipPictureBox->Click += gcnew System::EventHandler(this, &MainScreen::yellowChipPictureBox_Click);
			// 
			// greenChipPictureBox
			// 
			this->greenChipPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->greenChipPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"greenChipPictureBox.Image")));
			this->greenChipPictureBox->Location = System::Drawing::Point(1022, 602);
			this->greenChipPictureBox->Name = L"greenChipPictureBox";
			this->greenChipPictureBox->Size = System::Drawing::Size(79, 85);
			this->greenChipPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->greenChipPictureBox->TabIndex = 58;
			this->greenChipPictureBox->TabStop = false;
			this->greenChipPictureBox->Click += gcnew System::EventHandler(this, &MainScreen::greenChipPictureBox_Click);
			// 
			// redChipBetText
			// 
			this->redChipBetText->AutoSize = true;
			this->redChipBetText->BackColor = System::Drawing::Color::Transparent;
			this->redChipBetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->redChipBetText->ForeColor = System::Drawing::Color::White;
			this->redChipBetText->Location = System::Drawing::Point(468, 554);
			this->redChipBetText->Name = L"redChipBetText";
			this->redChipBetText->Size = System::Drawing::Size(62, 42);
			this->redChipBetText->TabIndex = 59;
			this->redChipBetText->Text = L"10";
			// 
			// blueChipBetText
			// 
			this->blueChipBetText->AutoSize = true;
			this->blueChipBetText->BackColor = System::Drawing::Color::Transparent;
			this->blueChipBetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->blueChipBetText->ForeColor = System::Drawing::Color::White;
			this->blueChipBetText->Location = System::Drawing::Point(648, 554);
			this->blueChipBetText->Name = L"blueChipBetText";
			this->blueChipBetText->Size = System::Drawing::Size(62, 42);
			this->blueChipBetText->TabIndex = 60;
			this->blueChipBetText->Text = L"50";
			// 
			// yellowChipBetText
			// 
			this->yellowChipBetText->AutoSize = true;
			this->yellowChipBetText->BackColor = System::Drawing::Color::Transparent;
			this->yellowChipBetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yellowChipBetText->ForeColor = System::Drawing::Color::White;
			this->yellowChipBetText->Location = System::Drawing::Point(826, 554);
			this->yellowChipBetText->Name = L"yellowChipBetText";
			this->yellowChipBetText->Size = System::Drawing::Size(84, 42);
			this->yellowChipBetText->TabIndex = 61;
			this->yellowChipBetText->Text = L"100";
			// 
			// greenChipBetText
			// 
			this->greenChipBetText->AutoSize = true;
			this->greenChipBetText->BackColor = System::Drawing::Color::Transparent;
			this->greenChipBetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->greenChipBetText->ForeColor = System::Drawing::Color::White;
			this->greenChipBetText->Location = System::Drawing::Point(1017, 554);
			this->greenChipBetText->Name = L"greenChipBetText";
			this->greenChipBetText->Size = System::Drawing::Size(84, 42);
			this->greenChipBetText->TabIndex = 62;
			this->greenChipBetText->Text = L"500";
			// 
			// MainScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 755);
			this->Controls->Add(this->greenChipBetText);
			this->Controls->Add(this->yellowChipBetText);
			this->Controls->Add(this->blueChipBetText);
			this->Controls->Add(this->redChipBetText);
			this->Controls->Add(this->greenChipPictureBox);
			this->Controls->Add(this->yellowChipPictureBox);
			this->Controls->Add(this->blueChipPictureBox);
			this->Controls->Add(this->redChipPictureBox);
			this->Controls->Add(this->winNumLable);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->spinButton);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->betButtonZero);
			this->Controls->Add(this->betButtonSecondHalf);
			this->Controls->Add(this->betButtonOdd);
			this->Controls->Add(this->betButtonBlack);
			this->Controls->Add(this->betButtonRed);
			this->Controls->Add(this->betButtonEven);
			this->Controls->Add(this->betButtonFirstHalf);
			this->Controls->Add(this->betSecond12);
			this->Controls->Add(this->betThird12);
			this->Controls->Add(this->betFirst12);
			this->Controls->Add(this->betLine3);
			this->Controls->Add(this->betLine2);
			this->Controls->Add(this->betLine1);
			this->Controls->Add(this->betButton36);
			this->Controls->Add(this->betButton35);
			this->Controls->Add(this->betButton34);
			this->Controls->Add(this->betButton33);
			this->Controls->Add(this->betButton32);
			this->Controls->Add(this->betButton31);
			this->Controls->Add(this->betButton30);
			this->Controls->Add(this->betButton29);
			this->Controls->Add(this->betButton28);
			this->Controls->Add(this->betButton27);
			this->Controls->Add(this->betButton26);
			this->Controls->Add(this->betButton25);
			this->Controls->Add(this->betButton24);
			this->Controls->Add(this->betButton23);
			this->Controls->Add(this->betButton22);
			this->Controls->Add(this->betButton21);
			this->Controls->Add(this->betButton20);
			this->Controls->Add(this->betButton19);
			this->Controls->Add(this->betButton18);
			this->Controls->Add(this->betButton17);
			this->Controls->Add(this->betButton16);
			this->Controls->Add(this->betButton15);
			this->Controls->Add(this->betButton14);
			this->Controls->Add(this->betButton13);
			this->Controls->Add(this->betButton12);
			this->Controls->Add(this->betButton11);
			this->Controls->Add(this->betButton10);
			this->Controls->Add(this->betButton9);
			this->Controls->Add(this->betButton8);
			this->Controls->Add(this->betButton7);
			this->Controls->Add(this->betButton6);
			this->Controls->Add(this->betButton5);
			this->Controls->Add(this->betButton4);
			this->Controls->Add(this->betButton3);
			this->Controls->Add(this->betButton2);
			this->Controls->Add(this->betButton1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainScreen";
			this->Text = L"MainScreen";
			this->Load += gcnew System::EventHandler(this, &MainScreen::MainScreen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redChipPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blueChipPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yellowChipPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenChipPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double degreeAll = 1;
	double turnDegree = 2.8125;
	double finalTurn;
	int spins = 0;
	Image^ originalWheel = Image::FromFile("rouletteWheel.png");

	private: System::Void MainScreen_Load(System::Object^ sender, System::EventArgs^ e) {
		std::cout <<"User id: " << userIndex  << "\n";
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void spinButton_Click(System::Object^ sender, System::EventArgs^ e) {
		degreeAll = 2.8125;
		spins = 0;
		turnDegree = 2.8125;
		finalTurn = randomSin();
		wheelTimer->Start();
	}
	public: Image^ RotateImage(Image^ img, float rotationAngle) {
		//create an empty Bitmap image
		Image^ bmp = Image::FromFile("rouletteWheel.png");

		//turn the Bitmap into a Graphics object
		Graphics^ gfx = Graphics::FromImage(bmp);

		//now we set the rotation point to the center of our image
		gfx->TranslateTransform((float)bmp->Width / 2, (float)bmp->Height / 2);

		//now rotate the image
		gfx->RotateTransform(rotationAngle);

		gfx->TranslateTransform(-(float)bmp->Width / 2, -(float)bmp->Height / 2);

		//set the InterpolationMode to HighQualityBicubic so to ensure a high
		//quality image once it is transformed to the specified size			   
		gfx->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;
		//now draw our new image onto the graphics object

		gfx->DrawImage(bmp, 0, 0);

		//dispose of our Graphics object
		gfx->~Graphics();

		//return the image
		return bmp;
	}
	private: System::Void wheelTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		if (spins < 20) { 
			if (degreeAll >=360) {
				spins++;
				pictureBox1->Image = Image::FromFile("rouletteWheel.png");
				degreeAll = 0;
			}
			if (spins < 1) {
				pictureBox1->Image = RotateImage(pictureBox1->Image, turnDegree);
				float tempIncrease = turnDegree;
				turnDegree += 2.8125 + tempIncrease;
				degreeAll += 2.8125 + tempIncrease;
			}

			else {
				pictureBox1->Image = RotateImage(pictureBox1->Image, turnDegree / 3);
				turnDegree += turnDegree  / 4;
				degreeAll += turnDegree / 4;
			}
		}
		else{
			GC::Collect();
			finalTurn = randomSin();
			pictureBox1->Image = RotateImage(pictureBox1->Image, finalTurn);
			int winner = checkRouletteAngle(finalTurn);
			std::cout << "\nWinner - " << winner;
			winNumLable->Text = "" + winner;
			wheelTimer->Stop();
		}
	}

	void redChipChange(int mode) {
		if (mode)
			redChipPictureBox->Image = Image::FromFile("img/redChipPressed.png");
		else
			redChipPictureBox->Image = Image::FromFile("img/redChip.png");
	}
	void blueChipChange(int mode) {
		if (mode)
			blueChipPictureBox->Image = Image::FromFile("img/blueChipPressed.png");
		else
			blueChipPictureBox->Image = Image::FromFile("img/blueChip.png");
	}
	void yellowChipChange(int mode) {
		if (mode)
			yellowChipPictureBox->Image = Image::FromFile("img/yellowChipPressed.png");
		else
			yellowChipPictureBox->Image = Image::FromFile("img/yellowChip.png");
	}
	void greenChipChange(int mode) {
		if (mode)
			greenChipPictureBox->Image = Image::FromFile("img/greenChipPressed.png");
		else
			greenChipPictureBox->Image = Image::FromFile("img/greenChip.png");
	}
	private: System::Void redChipPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		redChipChange(1);
		blueChipChange(0);
		yellowChipChange(0);
		greenChipChange(0);
	}
	private: System::Void blueChipPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		redChipChange(0);
		blueChipChange(1);
		yellowChipChange(0);
		greenChipChange(0);
	}
	private: System::Void yellowChipPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		redChipChange(0);
		blueChipChange(0);
		yellowChipChange(1);
		greenChipChange(0);
	}
	private: System::Void greenChipPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		redChipChange(0);
		blueChipChange(0);
		yellowChipChange(0);
		greenChipChange(1);
	}
};
}
