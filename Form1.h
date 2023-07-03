#pragma once
#include  "Cell(Blue).h"
#include "Movement.h"
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
namespace praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox_generation;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton_speed3;

	private: System::Windows::Forms::RadioButton^ radioButton_speed2;

	private: System::Windows::Forms::RadioButton^ radioButton_speed1;

	private: System::Windows::Forms::TextBox^ textBox_food;

	private: System::Windows::Forms::Button^ button_stop;
	private: System::Windows::Forms::Button^ button_simulation_start;

	private: System::Windows::Forms::Button^ button_step;



	private: System::Windows::Forms::Button^ button_start;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox_water;
	public protected: System::Windows::Forms::Timer^ Time;

	public protected:
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel3;

	public protected:
	private:

	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox_generation = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_speed3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_speed2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_speed1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox_food = (gcnew System::Windows::Forms::TextBox());
			this->button_stop = (gcnew System::Windows::Forms::Button());
			this->button_simulation_start = (gcnew System::Windows::Forms::Button());
			this->button_step = (gcnew System::Windows::Forms::Button());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_water = (gcnew System::Windows::Forms::TextBox());
			this->Time = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_generation
			// 
			this->textBox_generation->Location = System::Drawing::Point(12, 24);
			this->textBox_generation->Name = L"textBox_generation";
			this->textBox_generation->ReadOnly = true;
			this->textBox_generation->Size = System::Drawing::Size(100, 20);
			this->textBox_generation->TabIndex = 1;
			this->textBox_generation->Text = L"Ïîêîëåíèå: 0";
			this->textBox_generation->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_generation_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(133, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Ïèòàòåëüíûå âåùåñòâà:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton_speed3);
			this->groupBox1->Controls->Add(this->radioButton_speed2);
			this->groupBox1->Controls->Add(this->radioButton_speed1);
			this->groupBox1->Location = System::Drawing::Point(12, 418);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(133, 48);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// radioButton_speed3
			// 
			this->radioButton_speed3->AutoSize = true;
			this->radioButton_speed3->Location = System::Drawing::Point(90, 19);
			this->radioButton_speed3->Name = L"radioButton_speed3";
			this->radioButton_speed3->Size = System::Drawing::Size(36, 17);
			this->radioButton_speed3->TabIndex = 6;
			this->radioButton_speed3->Text = L"3x";
			this->radioButton_speed3->UseVisualStyleBackColor = true;
			this->radioButton_speed3->Click += gcnew System::EventHandler(this, &Form1::radioButton_speed3_Click);
			// 
			// radioButton_speed2
			// 
			this->radioButton_speed2->AutoSize = true;
			this->radioButton_speed2->Location = System::Drawing::Point(48, 19);
			this->radioButton_speed2->Name = L"radioButton_speed2";
			this->radioButton_speed2->Size = System::Drawing::Size(36, 17);
			this->radioButton_speed2->TabIndex = 5;
			this->radioButton_speed2->Text = L"2x";
			this->radioButton_speed2->UseVisualStyleBackColor = true;
			this->radioButton_speed2->Click += gcnew System::EventHandler(this, &Form1::radioButton_speed2_Click);
			// 
			// radioButton_speed1
			// 
			this->radioButton_speed1->AutoSize = true;
			this->radioButton_speed1->Checked = true;
			this->radioButton_speed1->Location = System::Drawing::Point(6, 19);
			this->radioButton_speed1->Name = L"radioButton_speed1";
			this->radioButton_speed1->Size = System::Drawing::Size(36, 17);
			this->radioButton_speed1->TabIndex = 4;
			this->radioButton_speed1->TabStop = true;
			this->radioButton_speed1->Text = L"1x";
			this->radioButton_speed1->UseVisualStyleBackColor = true;
			this->radioButton_speed1->Click += gcnew System::EventHandler(this, &Form1::radioButton_speed1_Click);
			// 
			// textBox_food
			// 
			this->textBox_food->Location = System::Drawing::Point(21, 111);
			this->textBox_food->Name = L"textBox_food";
			this->textBox_food->Size = System::Drawing::Size(100, 20);
			this->textBox_food->TabIndex = 4;
			this->textBox_food->Text = L"50";
			this->textBox_food->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_food_TextChanged);
			// 
			// button_stop
			// 
			this->button_stop->Location = System::Drawing::Point(21, 590);
			this->button_stop->Name = L"button_stop";
			this->button_stop->Size = System::Drawing::Size(75, 23);
			this->button_stop->TabIndex = 5;
			this->button_stop->Text = L"Ñòîï";
			this->button_stop->UseVisualStyleBackColor = true;
			this->button_stop->Click += gcnew System::EventHandler(this, &Form1::button_stop_Click);
			// 
			// button_simulation_start
			// 
			this->button_simulation_start->Location = System::Drawing::Point(450, 570);
			this->button_simulation_start->Name = L"button_simulation_start";
			this->button_simulation_start->Size = System::Drawing::Size(122, 23);
			this->button_simulation_start->TabIndex = 6;
			this->button_simulation_start->Text = L"Íîâàÿ ñèìóëÿöèÿ";
			this->button_simulation_start->UseVisualStyleBackColor = true;
			this->button_simulation_start->Click += gcnew System::EventHandler(this, &Form1::button_simulation_start_Click);
			// 
			// button_step
			// 
			this->button_step->Location = System::Drawing::Point(128, 590);
			this->button_step->Name = L"button_step";
			this->button_step->Size = System::Drawing::Size(75, 23);
			this->button_step->TabIndex = 7;
			this->button_step->Text = L"Øàã âïåðåä";
			this->button_step->UseVisualStyleBackColor = true;
			this->button_step->Click += gcnew System::EventHandler(this, &Form1::button_step_Click);
			// 
			// button_start
			// 
			this->button_start->Location = System::Drawing::Point(21, 590);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(75, 23);
			this->button_start->TabIndex = 9;
			this->button_start->Text = L"Ñòàðò";
			this->button_start->UseVisualStyleBackColor = true;
			this->button_start->Visible = false;
			this->button_start->Click += gcnew System::EventHandler(this, &Form1::button_start_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 392);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(113, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Ñêîðîñòü ñèìóëÿöèè";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(84, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"Âëàãà:";
			// 
			// textBox_water
			// 
			this->textBox_water->Location = System::Drawing::Point(21, 163);
			this->textBox_water->Name = L"textBox_water";
			this->textBox_water->Size = System::Drawing::Size(100, 20);
			this->textBox_water->TabIndex = 11;
			this->textBox_water->Text = L"50";
			this->textBox_water->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// Time
			// 
			this->Time->Enabled = true;
			this->Time->Interval = 45;
			this->Time->Tick += gcnew System::EventHandler(this, &Form1::Time_Tick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(162, 541);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(809, 10);
			this->panel2->TabIndex = 13;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Controls->Add(this->panel1);
			this->panel4->Location = System::Drawing::Point(161, 1);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(807, 8);
			this->panel4->TabIndex = 15;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(1109, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(10, 549);
			this->panel1->TabIndex = 16;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel6->Location = System::Drawing::Point(161, 1);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(10, 549);
			this->panel6->TabIndex = 13;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(961, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 549);
			this->panel3->TabIndex = 16;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1007, 630);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox_water);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button_start);
			this->Controls->Add(this->button_step);
			this->Controls->Add(this->button_simulation_start);
			this->Controls->Add(this->button_stop);
			this->Controls->Add(this->textBox_food);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox_generation);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int x, y, step = 0, stop_check = 0, speed_check, step_last = 0,reset_check=1;
		int BlueNum, RedNum, PurpleNum, GreenNum,newNum;
		int i;
private: array<PictureBox^>^ Blue;
private: array<PictureBox^>^ Red;
private: array<PictureBox^>^ Green;
private: array<PictureBox^>^ Purple;

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_stop_Click(System::Object^ sender, System::EventArgs^ e) {
		button_stop->Visible = false;
		button_start->Visible = true;
		stop_check = 0;
	}
private: System::Void button_start_Click(System::Object^ sender, System::EventArgs^ e) {
	button_stop->Visible = true;
	button_start->Visible = false;
	stop_check = 1;
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Time_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	if(stop_check)
		step = step + 1;
	textBox_generation->Text = "Ïîêîëåíèå: " + step;
	if (step_last != step)
	{
		Draw_Movement asdas;
		Random^ a = gcnew Random();
		Random^ b = gcnew Random();
			newNum = asdas.Normal_Move(Blue, 1, BlueNum);
			for (BlueNum; BlueNum < newNum; BlueNum++)
			{
				this->Controls->Add(Blue[BlueNum]);
			}
		

			newNum = asdas.Normal_Move(Red, 2, RedNum);
			for (RedNum; RedNum < newNum; RedNum++)
			{
				this->Controls->Add(Red[RedNum]);
			}
			
			newNum = asdas.Normal_Move(Green, 3, GreenNum);
			for (GreenNum; GreenNum < newNum; GreenNum++)
			{
				this->Controls->Add(Green[GreenNum]);
			}
			newNum = asdas.Normal_Move(Purple, 4, PurpleNum);
			for (; PurpleNum < newNum; PurpleNum++)
			{
				this->Controls->Add(Purple[PurpleNum]);
			}

	}
	step_last = step;
}
private: System::Void button_step_Click(System::Object^ sender, System::EventArgs^ e) {
	
		step += 1;
if (stop_check==0)
	{
		Draw_Movement asdas;
		Blue = gcnew array <PictureBox^, 1>(6000);
		asdas.First_Move(Blue, 1);
		this->Controls->Add(Blue[0]);
		BlueNum = 1;

		Red = gcnew array <PictureBox^, 1>(6000);
		asdas.First_Move(Red, 2);
		this->Controls->Add(Red[0]);
		RedNum = 1;

		Green = gcnew array <PictureBox^, 1>(6000);
		asdas.First_Move(Green, 3);
		this->Controls->Add(Green[0]);
		GreenNum = 1;

		Purple = gcnew array <PictureBox^, 1>(6000);
		asdas.First_Move(Purple, 4);
		this->Controls->Add(Purple[0]);
		PurpleNum = 1;
		
	}
}
private: System::Void textBox_food_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void textBox_generation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void radioButton_speed2_Click(System::Object^ sender, System::EventArgs^ e) {
	Time->Interval = 30;
}
private: System::Void radioButton_speed3_Click(System::Object^ sender, System::EventArgs^ e) {
	Time->Interval = 15;
}
private: System::Void radioButton_speed1_Click(System::Object^ sender, System::EventArgs^ e) {
	Time->Interval = 45;
}
private: System::Void button_simulation_start_Click(System::Object^ sender, System::EventArgs^ e) {
	if (step > 0)
	{
		for (int i = BlueNum-1; i >= 0; i--)
		{
			this->Controls->Remove(Blue[i]);
		}
		for (int i = RedNum-1; i >= 0; i--)
		{
			this->Controls->Remove(Red[i]);
		}
		for (int i = GreenNum-1; i >= 0; i--)
		{
			this->Controls->Remove(Green[i]);
		}
		for (int i = PurpleNum-1; i >= 0; i--)
		{
			this->Controls->Remove(Purple[i]);
		}
	}
	step = 0;
	step_last = 0;
	Cell_Blue* BLUE_CELLS= new Cell_Blue[6000];
	Draw_Movement asdas;
	if (reset_check)
	{
		Blue = gcnew array <PictureBox^, 1>(6000);
		Red = gcnew array <PictureBox^, 1>(6000);
		Green = gcnew array <PictureBox^, 1>(6000);
		Purple = gcnew array <PictureBox^, 1>(6000);
		reset_check = 0;
	}
	asdas.First_Move(Blue,1);
	this->Controls->Add(Blue[0]);
	BlueNum = 1;


	asdas.First_Move(Red, 2);
	this->Controls->Add(Red[0]);
	RedNum = 1;


	asdas.First_Move(Green, 3);
	this->Controls->Add(Green[0]);
	GreenNum = 1;


	asdas.First_Move(Purple, 4);
	this->Controls->Add(Purple[0]);
	PurpleNum = 1; 
	stop_check = 1;

	
}
};
}
