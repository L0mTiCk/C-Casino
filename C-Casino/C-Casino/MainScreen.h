#pragma once

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
	protected:
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
	private: System::Windows::Forms::Panel^ rouletteWheelPanel;
	private: System::Windows::Forms::Panel^ rouletteBallPanel;






	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->rouletteWheelPanel = (gcnew System::Windows::Forms::Panel());
			this->rouletteBallPanel = (gcnew System::Windows::Forms::Panel());
			this->rouletteWheelPanel->SuspendLayout();
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
			this->betButton1->Location = System::Drawing::Point(420, 159);
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
			this->betButton2->Location = System::Drawing::Point(420, 97);
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
			this->betButton3->Location = System::Drawing::Point(420, 35);
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
			this->betButton6->Location = System::Drawing::Point(481, 35);
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
			this->betButton5->Location = System::Drawing::Point(481, 97);
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
			this->betButton4->Location = System::Drawing::Point(481, 159);
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
			this->betButton9->Location = System::Drawing::Point(546, 35);
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
			this->betButton8->Location = System::Drawing::Point(546, 97);
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
			this->betButton7->Location = System::Drawing::Point(546, 159);
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
			this->betButton12->Location = System::Drawing::Point(606, 35);
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
			this->betButton11->Location = System::Drawing::Point(606, 97);
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
			this->betButton10->Location = System::Drawing::Point(606, 159);
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
			this->betButton18->Location = System::Drawing::Point(732, 35);
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
			this->betButton17->Location = System::Drawing::Point(732, 97);
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
			this->betButton16->Location = System::Drawing::Point(732, 159);
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
			this->betButton15->Location = System::Drawing::Point(671, 35);
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
			this->betButton14->Location = System::Drawing::Point(671, 97);
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
			this->betButton13->Location = System::Drawing::Point(671, 159);
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
			this->betButton27->Location = System::Drawing::Point(922, 35);
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
			this->betButton26->Location = System::Drawing::Point(922, 97);
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
			this->betButton25->Location = System::Drawing::Point(922, 159);
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
			this->betButton24->Location = System::Drawing::Point(861, 35);
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
			this->betButton23->Location = System::Drawing::Point(861, 97);
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
			this->betButton22->Location = System::Drawing::Point(861, 159);
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
			this->betButton21->Location = System::Drawing::Point(796, 35);
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
			this->betButton20->Location = System::Drawing::Point(796, 97);
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
			this->betButton19->Location = System::Drawing::Point(796, 159);
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
			this->betButton36->Location = System::Drawing::Point(1113, 35);
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
			this->betButton35->Location = System::Drawing::Point(1113, 97);
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
			this->betButton34->Location = System::Drawing::Point(1113, 159);
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
			this->betButton33->Location = System::Drawing::Point(1052, 35);
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
			this->betButton32->Location = System::Drawing::Point(1052, 97);
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
			this->betButton31->Location = System::Drawing::Point(1052, 159);
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
			this->betButton30->Location = System::Drawing::Point(987, 35);
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
			this->betButton29->Location = System::Drawing::Point(987, 97);
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
			this->betButton28->Location = System::Drawing::Point(987, 159);
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
			this->betLine1->Location = System::Drawing::Point(1178, 159);
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
			this->betLine2->Location = System::Drawing::Point(1178, 97);
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
			this->betLine3->Location = System::Drawing::Point(1178, 35);
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
			this->betFirst12->Location = System::Drawing::Point(420, 224);
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
			this->betThird12->Location = System::Drawing::Point(922, 224);
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
			this->betSecond12->Location = System::Drawing::Point(671, 224);
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
			this->betButtonFirstHalf->Location = System::Drawing::Point(420, 273);
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
			this->betButtonEven->Location = System::Drawing::Point(546, 273);
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
			this->betButtonRed->Location = System::Drawing::Point(671, 273);
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
			this->betButtonBlack->Location = System::Drawing::Point(796, 273);
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
			this->betButtonOdd->Location = System::Drawing::Point(922, 273);
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
			this->betButtonSecondHalf->Location = System::Drawing::Point(1052, 273);
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
			this->betButtonZero->Location = System::Drawing::Point(356, 35);
			this->betButtonZero->Margin = System::Windows::Forms::Padding(0);
			this->betButtonZero->Name = L"betButtonZero";
			this->betButtonZero->Size = System::Drawing::Size(64, 189);
			this->betButtonZero->TabIndex = 48;
			this->betButtonZero->Text = L"0";
			this->betButtonZero->UseVisualStyleBackColor = false;
			// 
			// rouletteWheelPanel
			// 
			this->rouletteWheelPanel->BackColor = System::Drawing::Color::Transparent;
			this->rouletteWheelPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rouletteWheelPanel.BackgroundImage")));
			this->rouletteWheelPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rouletteWheelPanel->Controls->Add(this->rouletteBallPanel);
			this->rouletteWheelPanel->Location = System::Drawing::Point(12, 284);
			this->rouletteWheelPanel->Name = L"rouletteWheelPanel";
			this->rouletteWheelPanel->Size = System::Drawing::Size(377, 377);
			this->rouletteWheelPanel->TabIndex = 49;
			// 
			// rouletteBallPanel
			// 
			this->rouletteBallPanel->BackColor = System::Drawing::Color::Transparent;
			this->rouletteBallPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rouletteBallPanel.BackgroundImage")));
			this->rouletteBallPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rouletteBallPanel->Location = System::Drawing::Point(59, 72);
			this->rouletteBallPanel->Margin = System::Windows::Forms::Padding(0);
			this->rouletteBallPanel->Name = L"rouletteBallPanel";
			this->rouletteBallPanel->Size = System::Drawing::Size(255, 255);
			this->rouletteBallPanel->TabIndex = 50;
			// 
			// MainScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->rouletteWheelPanel);
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
			this->Name = L"MainScreen";
			this->Text = L"MainScreen";
			this->Load += gcnew System::EventHandler(this, &MainScreen::MainScreen_Load);
			this->rouletteWheelPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainScreen_Load(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
