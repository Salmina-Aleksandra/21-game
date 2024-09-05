#pragma once

#include <winsock.h>
#include <stdio.h>
#include <WinUser.h>
#include <time.h>
#include <iostream>

#define	WSA_NETEVENT		(WM_USER+2)

#define SERVER_PORT     0x2001
#define CLIENT_PORT     0x2011

SOCKET         UDPSocket;
sockaddr_in	   CallAddress;
sockaddr_in	   OurAddress;
int			   f=0;


namespace Server {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Security::Permissions;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		bool flag = false;
		int fl = 0;
		int stop = 0;
		int bstop;
		int bs = 0;
		int znp = 0;
		int chet;
		int ng = 0;
		array <PictureBox^, 2>^ PBS = gcnew array<PictureBox^, 2>(11, 11);
		PictureBox^ oldPB = gcnew System::Windows::Forms::PictureBox();
		array <int, 2>^ a = gcnew array<int, 2>(8, 8);
		int St = 0; 
		int status = 1; 
		int r, c;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::ImageList^ imageList1;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			PBS[0, 0] = this->pictureBox1;
			PBS[1, 0] = this->pictureBox3;
			PBS[2, 0] = this->pictureBox4;
			PBS[3, 0] = this->pictureBox2;
			PBS[4, 0] = this->pictureBox5;
			PBS[5, 0] = this->pictureBox6;
			PBS[6, 0] = this->pictureBox7;
			PBS[7, 0] = this->pictureBox8;
			PBS[8, 0] = this->pictureBox9;
			PBS[9, 0] = this->pictureBox10;
			PBS[10, 0] = this->pictureBox11;	
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;


	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^ label19;

	private: System::ComponentModel::IContainer^ components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(1049, 159);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(281, 452);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(1088, 617);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(242, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Начать новую игру";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(1059, 9);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(271, 51);
			this->label19->TabIndex = 496;
			this->label19->Text = L"П О Б Е Д А";
			this->label19->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1031, 635);
			this->pictureBox1->TabIndex = 498;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"C6.png");
			this->imageList1->Images->SetKeyName(1, L"C7.png");
			this->imageList1->Images->SetKeyName(2, L"C8.png");
			this->imageList1->Images->SetKeyName(3, L"C9.png");
			this->imageList1->Images->SetKeyName(4, L"C10.png");
			this->imageList1->Images->SetKeyName(5, L"CA.png");
			this->imageList1->Images->SetKeyName(6, L"CJ.png");
			this->imageList1->Images->SetKeyName(7, L"CK.png");
			this->imageList1->Images->SetKeyName(8, L"CQ.png");
			this->imageList1->Images->SetKeyName(9, L"D6.png");
			this->imageList1->Images->SetKeyName(10, L"D7.png");
			this->imageList1->Images->SetKeyName(11, L"D8.png");
			this->imageList1->Images->SetKeyName(12, L"D9.png");
			this->imageList1->Images->SetKeyName(13, L"D10.png");
			this->imageList1->Images->SetKeyName(14, L"DA.png");
			this->imageList1->Images->SetKeyName(15, L"DJ.png");
			this->imageList1->Images->SetKeyName(16, L"DK.png");
			this->imageList1->Images->SetKeyName(17, L"DQ.png");
			this->imageList1->Images->SetKeyName(18, L"H6.png");
			this->imageList1->Images->SetKeyName(19, L"H7.png");
			this->imageList1->Images->SetKeyName(20, L"H8.png");
			this->imageList1->Images->SetKeyName(21, L"H9.png");
			this->imageList1->Images->SetKeyName(22, L"H10.png");
			this->imageList1->Images->SetKeyName(23, L"HA.png");
			this->imageList1->Images->SetKeyName(24, L"HJ.png");
			this->imageList1->Images->SetKeyName(25, L"HK.png");
			this->imageList1->Images->SetKeyName(26, L"HQ.png");
			this->imageList1->Images->SetKeyName(27, L"S6.png");
			this->imageList1->Images->SetKeyName(28, L"S7.png");
			this->imageList1->Images->SetKeyName(29, L"S8.png");
			this->imageList1->Images->SetKeyName(30, L"S9.png");
			this->imageList1->Images->SetKeyName(31, L"S10.png");
			this->imageList1->Images->SetKeyName(32, L"SA.png");
			this->imageList1->Images->SetKeyName(33, L"SJ.png");
			this->imageList1->Images->SetKeyName(34, L"SK.png");
			this->imageList1->Images->SetKeyName(35, L"SQ.png");
			this->imageList1->Images->SetKeyName(36, L"SC.png");
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(1049, 60);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(282, 51);
			this->label20->TabIndex = 497;
			this->label20->Text = L"ПРОИГРЫШ";
			this->label20->Visible = false;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(917, 484);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 23);
			this->button2->TabIndex = 499;
			this->button2->Text = L"Еще";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(917, 524);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 23);
			this->button3->TabIndex = 500;
			this->button3->Text = L"Стоп";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(960, 410);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 501;
			this->label1->Text = L"Ваш счет";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(917, 441);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(109, 22);
			this->textBox1->TabIndex = 502;
			this->textBox1->Text = L"0";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(104, 356);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(141, 230);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 503;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(260, 356);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(143, 234);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 504;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(104, 32);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(141, 230);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 505;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(262, 32);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(141, 230);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 506;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(917, 567);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 23);
			this->button4->TabIndex = 507;
			this->button4->Text = L"Сдать карты";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(418, 32);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(141, 230);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 508;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(575, 32);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(141, 230);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 509;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(733, 32);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(141, 230);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 510;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(418, 356);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(141, 230);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 511;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(575, 356);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(141, 230);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 512;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(733, 356);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(141, 230);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 513;
			this->pictureBox11->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(914, 256);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 16);
			this->label2->TabIndex = 514;
			this->label2->Text = L"Счет соперника";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(917, 289);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(109, 22);
			this->textBox2->TabIndex = 515;
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(917, 607);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 23);
			this->button5->TabIndex = 516;
			this->button5->Text = L"Вскрываемся";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(1079, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 51);
			this->label3->TabIndex = 517;
			this->label3->Text = L"Н И Ч Ь Я";
			this->label3->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1342, 659);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form1";
			this->Text = L"Server";
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Активация---------------------------------------------------------------------------------------------
	private: System::Void Form1_Activated(System::Object^  sender, System::EventArgs^  e) {
			 WSADATA	    WSAData;
			 int		    rc;
			 char			Name[101], *IpAddr, Buf[1000];
			 PHOSTENT       phe;
			 

			 if (f==1) return;
			 f = 1;
			 rc = WSAStartup(MAKEWORD(2,0), &WSAData);
			 if (rc != 0) {
				listBox1->Items->Add("Ошибка инициализации WSAStartup");
				return;
			} // if
			 

			UDPSocket = socket(AF_INET, SOCK_DGRAM, 0);
			if (UDPSocket == INVALID_SOCKET) {
				listBox1->Items->Add("Протокол UDP установлен.");
			} // if

			memset(&OurAddress, 0, sizeof(OurAddress));
			OurAddress.sin_family = AF_INET;
			OurAddress.sin_port = SERVER_PORT;

		    rc =bind(UDPSocket, (LPSOCKADDR)&OurAddress, sizeof(sockaddr_in));
			if (rc == SOCKET_ERROR) {
				listBox1->Items->Add("Адресная ошибка");
				return;
			} // if
			
			rc = WSAAsyncSelect(UDPSocket, (HWND)(this->Handle.ToInt32()), WSA_NETEVENT, FD_READ);
			if (rc != 0) {
				listBox1->Items->Add("Ошибка WSAAsyncSelect");
				return;
			} // if

			gethostname(Name, 101);
			strcpy(Buf, "Имя компьютера ");
			strcat(Buf, Name);
			String ^ s= gcnew String(Buf);
			listBox1->Items->Add(s);

			phe = gethostbyname(Name);
			if (phe != NULL) {
				memcpy((void *)&(OurAddress.sin_addr), phe->h_addr, phe->h_length);
				IpAddr = inet_ntoa(OurAddress.sin_addr);
				strcpy(Buf, "IP-Адрес ");
				strcat(Buf, IpAddr);
				String ^ s2= gcnew String(Buf);
				listBox1->Items->Add(s2);
			} // if

			listBox1->Items->Add(L"Сервер запущен");
		 } // Form1_Activated
	//Получение---------------------------------------------------------------------------------------------
	protected: virtual void WndProc (Message% m) override
	{
		int      rc, l=sizeof(CallAddress);
		char  Buf[500];
		int St = 0;
     
		if (m.Msg == WSA_NETEVENT) {
			if (m.LParam.ToInt32() == FD_READ) {
				rc = recvfrom((SOCKET)m.WParam.ToInt32(), (char *)Buf, sizeof(Buf)-1, 0, (PSOCKADDR)&CallAddress, &l);
				//std::cout << Buf << "\n";
				if (rc == SOCKET_ERROR) {
          			rc = WSAGetLastError();
          			listBox1->Items->Add(String::Format( "Ошибка recvfrom {0}", rc ));
		          	return;
				} 
				if (rc >= 1) {
					if (strlen(Buf) == 1) {
						if (Buf[0] == 'n' && Buf[1] == 0) {
							listBox1->Items->Add("Клиент подключился");
							listBox1->Items->Add("Можете начать игру.");
							sendto(UDPSocket, "n", 2, 0, (LPSOCKADDR)&CallAddress, sizeof(CallAddress));
							button1->Enabled = true;
						}
						else {
							label20->Visible = true;
							button1->Enabled = true;
						}
					}
					else {
						
						
						if (bs == 1 && Buf[0] == -5)
						{
							listBox1->Items->Add("Все игроки набрали карты. Можете вскрываться");
							button5->Enabled = true;
							button2->Enabled = false;
							button3->Enabled = true;
							znp = Buf[4];
						}
						else
						{
							if (Buf[0] == -5)
							{
								listBox1->Items->Add("Ваш ход");
								button2->Enabled = true;
								button3->Enabled = true;
								znp = Buf[4];
							}
						}
						if (stop == 1)
						{
							button2->Enabled = false;
							button3->Enabled = false;
						}
						else
						{
							if (Buf[3] == -3)
							{
								listBox1->Items->Add("Ваш ход");
								button2->Enabled = true;
								button3->Enabled = true;
							}
						}
						if (Buf[3] == 1111)
						{
							listBox1->Items->Add("Ходит соперник. Ожидайте");
							button4->Enabled = false;
							
						}
						if (Buf[3] == -1)
						{
							listBox1->Items->Add("Ваш ход");
							button4->Enabled = true;
						}
						else
						{
							if (Buf[3] == -2)
							{
								listBox1->Items->Add("Ходит соперник. Ожидайте");
								button4->Enabled = false;
								button2->Enabled = false;
								button3->Enabled = false;
							}
						}
						if (Buf[0] == 3)
						{
							int bb = Buf[1];
							int cc = Buf[2];
							PBS[3, 0]->Image = imageList1->Images[bb];
							PBS[4, 0]->Image = imageList1->Images[cc];
						}
						else
						{	
							if (Buf[0] == 2)
							{
								int dd = Buf[1];
								PBS[5, 0]->Image = imageList1->Images[dd];
							}
							else
							{
								if (Buf[0] == 4)
								{
									int dd = Buf[1];
									PBS[6, 0]->Image = imageList1->Images[dd];
								}
								else
								{
									if (Buf[0] == 5)
									{
										int dd = Buf[1];
										PBS[7, 0]->Image = imageList1->Images[dd];
									}
								}
							}
						}
					}
				}
			} 
		} 
        Form::WndProc( m );
    } 
	//Отключение--------------------------------------------------------------------------------------------
	private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				closesocket(UDPSocket);
				WSACleanup();
	} 
	//Новая игра--------------------------------------------------------------------------------------------
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//Ходит вторым
		label19->Visible = false;
		label20->Visible = false;
		label3->Visible = false;
		listBox1->Items->Add("Вы ходите вторым. Ожидайте");

		if (ng == 1)
		{
			PBS[1, 0]->Image = imageList1->Images[36];
			PBS[2, 0]->Image = imageList1->Images[36];
			PBS[8, 0]->Image = imageList1->Images[36];
			PBS[9, 0]->Image = imageList1->Images[36];
			PBS[10, 0]->Image = imageList1->Images[36];
			pictureBox2->Visible = false;
			pictureBox5->Visible = false;
			pictureBox6->Visible = false;
			pictureBox7->Visible = false;
			pictureBox8->Visible = false;
			fl = 0;
			bs = 0;
			textBox1->Text = "0";
			textBox2->Text = "";
		}


		button1->Enabled = false;
	}
	
//кнопка сдать карты, получение первых двух карт
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	char SendString[5];
	//fl = 0;
	int a[36] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34, 35 };
	srand(time(NULL));
	int b = a[rand() % 36];
	int c = a[rand() % 36];
	PBS[1, 0]->Image = imageList1->Images[b];
	PBS[2, 0]->Image = imageList1->Images[c];

	if (b == 0 || b == 9 || b == 18 || b == 27)
		textBox1->Text = "6";
	else
	{
		if (b == 1 || b == 10 || b == 19 || b == 28)
			textBox1->Text = "7";
		else
		{
			if (b == 2 || b == 11 || b == 20 || b == 29)
				textBox1->Text = "8";
			else
			{
				if (b == 3 || b == 12 || b == 21 || b == 30)
					textBox1->Text = "9";
				else
				{
					if (b == 4 || b == 13 || b == 22 || b == 31)
						textBox1->Text = "10";
					else
					{
						if (b == 5 || b == 14 || b == 23 || b == 32)
							textBox1->Text = "11";
						else
						{
							if (b == 6 || b == 15 || b == 24 || b == 33)
								textBox1->Text = "2";
							else
							{
								if (b == 7 || b == 16 || b == 25 || b == 34)
									textBox1->Text = "4";
								else
									textBox1->Text = "3";
							}
						}
					}
				}
			}
		}
	}


	int tt = Convert::ToInt32(textBox1->Text);
	int znach = 0;
	int zn = 0;
	if (c == 0 || c == 9 || c == 18 || c == 27)
	{
		zn = 6;
		znach = tt + zn;
		textBox1->Text = Convert::ToString(znach);
	}
	else
	{
		if (c == 1 || c == 10 || c == 19 || c == 28)
		{
			zn = 7;
			znach = tt + zn;
			textBox1->Text = Convert::ToString(znach);
		}
		else
		{
			if (c == 2 || c == 11 || c == 20 || c == 29)
			{
				zn = 8;
				znach = tt + zn;
				textBox1->Text = Convert::ToString(znach);
			}
			else
			{
				if (c == 3 || c == 12 || c == 21 || c == 30)
				{
					zn = 9;
					znach = tt + zn;
					textBox1->Text = Convert::ToString(znach);
				}
				else
				{
					if (c == 4 || c == 13 || c == 22 || c == 31)
					{
						zn = 10;
						znach = tt + zn;
						textBox1->Text = Convert::ToString(znach);
					}
					else
					{
						if (c == 5 || c == 14 || c == 23 || c == 32)
						{
							zn = 11;
							znach = tt + zn;
							textBox1->Text = Convert::ToString(znach);
							
						}
						else
						{
							if (c == 6 || c == 15 || c == 24 || c == 33)
							{
								zn = 2;
								znach = tt + zn;
								textBox1->Text = Convert::ToString(znach);
							}
							else
							{
								if (c == 7 || c == 16 || c == 25 || c == 34)
								{
									zn = 4;
									znach = tt + zn;
									textBox1->Text = Convert::ToString(znach);
								}
								else
								{
									zn = 3;
									znach = tt + zn;
									textBox1->Text = Convert::ToString(znach);
								}
							}
						}
					}
				}
			}
		}
	}
	if (znach == 21)
		label19->Visible = true;

	status = -4;
	SendString[0] = 3;
	SendString[1] = b;
	SendString[2] = c;
	SendString[3] = status;
	sendto(UDPSocket, SendString, 4, 0, (PSOCKADDR)&CallAddress, sizeof(CallAddress));
	button4->Enabled = false;
	button3->Enabled = false;
	listBox1->Items->Add("Вы сделали ход. Ожидайте соперника");
}
//кнопка еще, получение дополнительных карт
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	char SendString[6];
	int tt = Convert::ToInt32(textBox1->Text);
	int znach = 0;
	int zn = 0;

	int a[36] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34, 35 };
	srand(time(NULL));
	int b = a[rand() % 36];
	int c = a[rand() % 36];
	int d = a[rand() % 36];
	if (fl == 0)
	{
		PBS[8, 0]->Image = imageList1->Images[b];

		if (b == 0 || b == 9 || b == 18 || b == 27)
		{
			zn = 6;
			znach = tt + zn;
			textBox1->Text = Convert::ToString(znach);
			if (znach > 21)
				label20->Visible = true;
			else
			{
				if (znach == 21)
					label19->Visible = true;
			}
		}
		else
		{
			if (b == 1 || b == 10 || b == 19 || b == 28)
			{
				zn = 7;
				znach = tt + zn;
				textBox1->Text = Convert::ToString(znach);
			}
			else
			{
				if (b == 2 || b == 11 || b == 20 || b == 29)
				{
					zn = 8;
					znach = tt + zn;
					textBox1->Text = Convert::ToString(znach);
				}
				else
				{
					if (b == 3 || b == 12 || b == 21 || b == 30)
					{
						zn = 9;
						znach = tt + zn;
						textBox1->Text = Convert::ToString(znach);
					}
					else
					{
						if (b == 4 || b == 13 || b == 22 || b == 31)
						{
							zn = 10;
							znach = tt + zn;
							textBox1->Text = Convert::ToString(znach);
						}
						else
						{
							if (b == 5 || b == 14 || b == 23 || b == 32)
							{
								zn = 11;
								znach = tt + zn;
								textBox1->Text = Convert::ToString(znach);
							}
							else
							{
								if (b == 6 || b == 15 || b == 24 || b == 33)
								{
									zn = 2;
									znach = tt + zn;
									textBox1->Text = Convert::ToString(znach);
								}
								else
								{
									if (b == 7 || b == 16 || b == 25 || b == 34)
									{
										zn = 4;
										znach = tt + zn;
										textBox1->Text = Convert::ToString(znach);
									}
									else
									{
										zn = 3;
										znach = tt + zn;
										textBox1->Text = Convert::ToString(znach);
									}
								}
							}
						}
					}
				}
			}
		}

		SendString[0] = 2;
		SendString[1] = b;
		fl = 1;
	}
	else
	{
		if (fl == 1)
		{
			PBS[9, 0]->Image = imageList1->Images[c];

			if (c == 0 || c == 9 || c == 18 || c == 27)
			{
				zn = 6;
				znach = tt + zn;
				textBox1->Text = Convert::ToString(znach);
			}
			else
			{
				if (c == 1 || c == 10 || c == 19 || c == 28)
				{
					zn = 7;
					znach = tt + zn;
					textBox1->Text = Convert::ToString(znach);
				}
				else
				{
					if (c == 2 || c == 11 || c == 20 || c == 29)
					{
						zn = 8;
						znach = tt + zn;
						textBox1->Text = Convert::ToString(znach);
					}
					else
					{
						if (c == 3 || c == 12 || c == 21 || c == 30)
						{
							zn = 9;
							znach = tt + zn;
							textBox1->Text = Convert::ToString(znach);
						}
						else
						{
							if (c == 4 || c == 13 || c == 22 || c == 31)
							{
								zn = 10;
								znach = tt + zn;
								textBox1->Text = Convert::ToString(znach);
							}
							else
							{
								if (c == 5 || c == 14 || c == 23 || c == 32)
								{
									zn = 11;
									znach = tt + zn;
									textBox1->Text = Convert::ToString(znach);
								}
								else
								{
									if (c == 6 || c == 15 || c == 24 || c == 33)
									{
										zn = 2;
										znach = tt + zn;
										textBox1->Text = Convert::ToString(znach);
									}
									else
									{
										if (c == 7 || c == 16 || c == 25 || c == 34)
										{
											zn = 4;
											znach = tt + zn;
											textBox1->Text = Convert::ToString(znach);
										}
										else
										{
											zn = 3;
											znach = tt + zn;
											textBox1->Text = Convert::ToString(znach);
										}
									}
								}
							}
						}
					}
				}
			}

			SendString[0] = 4;
			SendString[1] = c;
			fl = 2;
		}
		else
		{
			PBS[10, 0]->Image = imageList1->Images[d];

			if (d == 0 || d == 9 || d == 18 || d == 27)
			{
				zn = 6;
				znach = tt + zn;
				textBox1->Text = Convert::ToString(znach);
			}
			else
			{
				if (d == 1 || d == 10 || d == 19 || d == 28)
				{
					zn = 7;
					znach = tt + zn;
					textBox1->Text = Convert::ToString(znach);
				}
				else
				{
					if (d == 2 || d == 11 || d == 20 || d == 29)
					{
						zn = 8;
						znach = tt + zn;
						textBox1->Text = Convert::ToString(znach);
					}
					else
					{
						if (d == 3 || d == 12 || d == 21 || d == 30)
						{
							zn = 9;
							znach = tt + zn;
							textBox1->Text = Convert::ToString(znach);
						}
						else
						{
							if (d == 4 || d == 13 || d == 22 || d == 31)
							{
								zn = 10;
								znach = tt + zn;
								textBox1->Text = Convert::ToString(znach);
							}
							else
							{
								if (d == 5 || d == 14 || d == 23 || d == 32)
								{
									zn = 11;
									znach = tt + zn;
									textBox1->Text = Convert::ToString(znach);
								}
								else
								{
									if (d == 6 || d == 15 || d == 24 || d == 33)
									{
										zn = 2;
										znach = tt + zn;
										textBox1->Text = Convert::ToString(znach);
									}
									else
									{
										if (d == 7 || d == 16 || d == 25 || d == 34)
										{
											zn = 4;
											znach = tt + zn;
											textBox1->Text = Convert::ToString(znach);
										}
										else
										{
											zn = 3;
											znach = tt + zn;
											textBox1->Text = Convert::ToString(znach);
										}
									}
								}
							}
						}
					}
				}
			}



			SendString[0] = 5;
			SendString[1] = d;
			button2->Enabled = false;
			stop = 1;
		}
	}
	status = -4;
	SendString[3] = status;
	button2->Enabled = false;
	button3->Enabled = false;
	listBox1->Items->Add("Вы сделали ход. Ожидайте соперника");
	sendto(UDPSocket, SendString, 7, 0, (PSOCKADDR)&CallAddress, sizeof(CallAddress));
}
//кнопка стоп, не получает новые карты
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	char SendString[5];
	button2->Enabled = false;
	button3->Enabled = false;
	bs = 1;
	SendString[0] = -5;
	SendString[4] = Convert::ToInt32(textBox1->Text);
	sendto(UDPSocket, SendString, 5, 0, (PSOCKADDR)&CallAddress, sizeof(CallAddress));
	listBox1->Items->Add("Вы сделали ход. Ожидайте соперника");
}
//кнопка вскрываемся, отображение карт и счета противника, отображение результатов игры
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int zns = Convert::ToInt32(textBox1->Text);


	if (zns > 21)
	{
		label20->Visible = true;
		listBox1->Items->Add("Вы проиграли(");
		listBox1->Items->Add("Вы можете начать новую игру");
	}
	else
	{
		if (znp > 21) 
		{
			label19->Visible = true;
			listBox1->Items->Add("Вы выиграли!");
			listBox1->Items->Add("Вы можете начать новую игру");
		}
		else
		{
			if (zns > znp)
			{
				label19->Visible = true;
				listBox1->Items->Add("Вы выиграли!");
				listBox1->Items->Add("Вы можете начать новую игру");
			}
			else
			{
				if (zns < znp)
				{
					label20->Visible = true;
					listBox1->Items->Add("Вы проиграли(");
					listBox1->Items->Add("Вы можете начать новую игру");
				}
				else
				{
					if (zns == znp)
					{
						label3->Visible = true;
						listBox1->Items->Add("У вас ничья");
						listBox1->Items->Add("Вы можете начать новую игру");

					}
				}
			}
		}
	}

	ng = 1;
	textBox2->Text = Convert::ToString(znp);
	pictureBox2->Visible = true;
	pictureBox5->Visible = true;
	pictureBox6->Visible = true;
	pictureBox7->Visible = true;
	pictureBox8->Visible = true;
	button3->Enabled = false;
	button5->Enabled = false;
	button1->Enabled = true;
}
};
}

