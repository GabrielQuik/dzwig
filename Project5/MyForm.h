#pragma once
#include <Windows.h>

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  hookTile;
	private: System::Windows::Forms::Button^  hookUp;
	private: System::Windows::Forms::Button^  hookDown;
	private: System::Windows::Forms::Button^  simulator;

	protected:

	protected:

	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->hookTile = (gcnew System::Windows::Forms::PictureBox());
			this->hookUp = (gcnew System::Windows::Forms::Button());
			this->hookDown = (gcnew System::Windows::Forms::Button());
			this->simulator = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hookTile))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"++";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(660, 440);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(500, 110);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(36, 18);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(93, 446);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"--";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(500, 405);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(30, 30);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(530, 405);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(30, 30);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(560, 405);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 30);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// hookTile
			// 
			this->hookTile->BackColor = System::Drawing::Color::Maroon;
			this->hookTile->Location = System::Drawing::Point(517, 128);
			this->hookTile->Name = L"hookTile";
			this->hookTile->Size = System::Drawing::Size(2, 30);
			this->hookTile->TabIndex = 10;
			this->hookTile->TabStop = false;
			// 
			// hookUp
			// 
			this->hookUp->Location = System::Drawing::Point(174, 446);
			this->hookUp->Name = L"hookUp";
			this->hookUp->Size = System::Drawing::Size(75, 23);
			this->hookUp->TabIndex = 11;
			this->hookUp->Text = L"hook up";
			this->hookUp->UseVisualStyleBackColor = true;
			this->hookUp->Click += gcnew System::EventHandler(this, &MyForm::hookUp_Click);
			// 
			// hookDown
			// 
			this->hookDown->Location = System::Drawing::Point(255, 446);
			this->hookDown->Name = L"hookDown";
			this->hookDown->Size = System::Drawing::Size(75, 23);
			this->hookDown->TabIndex = 12;
			this->hookDown->Text = L"hook down";
			this->hookDown->UseVisualStyleBackColor = true;
			this->hookDown->Click += gcnew System::EventHandler(this, &MyForm::hookDown_Click);
			// 
			// simulator
			// 
			this->simulator->Location = System::Drawing::Point(336, 446);
			this->simulator->Name = L"simulator";
			this->simulator->Size = System::Drawing::Size(75, 23);
			this->simulator->TabIndex = 13;
			this->simulator->Text = L"simulate";
			this->simulator->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(680, 474);
			this->Controls->Add(this->hookTile);
			this->Controls->Add(this->simulator);
			this->Controls->Add(this->hookDown);
			this->Controls->Add(this->hookUp);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Project";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hookTile))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
	int x = 500, y = 110, hookX = x + 17, hookY = y + 18;
	int hookControler = 1;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < 30; i++) {
			//Sleep(5);
			this->pictureBox2->Location = System::Drawing::Point(x++,y);
			this->hookTile->Location = System::Drawing::Point(hookX++, hookY);
		}
	}
	
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 30; i++) {

		//Sleep(5);
		this->pictureBox2->Location = System::Drawing::Point(x--, y);
		this->hookTile->Location = System::Drawing::Point(hookX--, hookY);
	}
}
private: System::Void hookUp_Click(System::Object^  sender, System::EventArgs^  e) {
	hookControler--;
	this->hookTile->Size = System::Drawing::Size(2, 30 * hookControler);
}
private: System::Void hookDown_Click(System::Object^  sender, System::EventArgs^  e) {
	
	hookControler++;
	this->hookTile->Size = System::Drawing::Size(2, 30 * hookControler);
}
};
};
