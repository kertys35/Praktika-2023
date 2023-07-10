#pragma once
#include  "Cell(Blue).h"
#include "Cell_Red.h"
#include "Cell_Green.h"
#include "Cell_Purple.h"
#include "Movement.h"
#include "Gamelogic.h"
#include "Food.h"
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
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Main()
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
	private: System::Windows::Forms::Button^ button_plus_food;
	private: System::Windows::Forms::Button^ button_minus_food;
	private: System::Windows::Forms::Button^ button_plus_water;
	private: System::Windows::Forms::Button^ button_minus_water;
	private: System::Windows::Forms::Button^ button_clear_field;
	private: System::Windows::Forms::Button^ button_minus_food_energy;

	private: System::Windows::Forms::Button^ button_plus_food_energy;
	private: System::Windows::Forms::TextBox^ textBox_food_energy;


	private: System::Windows::Forms::TextBox^ textBox;


	private: System::Windows::Forms::Button^ button_food_fresh_minus;

	private: System::Windows::Forms::Button^ button_food_fresh_plus;
	private: System::Windows::Forms::TextBox^ textBox_food_fresh;


	private: System::Windows::Forms::TextBox^ textBox_1;





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
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
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
			this->button_plus_food = (gcnew System::Windows::Forms::Button());
			this->button_minus_food = (gcnew System::Windows::Forms::Button());
			this->button_plus_water = (gcnew System::Windows::Forms::Button());
			this->button_minus_water = (gcnew System::Windows::Forms::Button());
			this->button_clear_field = (gcnew System::Windows::Forms::Button());
			this->button_minus_food_energy = (gcnew System::Windows::Forms::Button());
			this->button_plus_food_energy = (gcnew System::Windows::Forms::Button());
			this->textBox_food_energy = (gcnew System::Windows::Forms::TextBox());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->button_food_fresh_minus = (gcnew System::Windows::Forms::Button());
			this->button_food_fresh_plus = (gcnew System::Windows::Forms::Button());
			this->textBox_food_fresh = (gcnew System::Windows::Forms::TextBox());
			this->textBox_1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_generation
			// 
			this->textBox_generation->Location = System::Drawing::Point(18, 26);
			this->textBox_generation->Name = L"textBox_generation";
			this->textBox_generation->ReadOnly = true;
			this->textBox_generation->Size = System::Drawing::Size(100, 20);
			this->textBox_generation->TabIndex = 1;
			this->textBox_generation->Text = L"Поколение: 0";
			this->textBox_generation->TextChanged += gcnew System::EventHandler(this, &Main::textBox_generation_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(133, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Количество еды:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton_speed3);
			this->groupBox1->Controls->Add(this->radioButton_speed2);
			this->groupBox1->Controls->Add(this->radioButton_speed1);
			this->groupBox1->Location = System::Drawing::Point(18, 451);
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
			this->radioButton_speed3->Click += gcnew System::EventHandler(this, &Main::radioButton_speed3_Click);
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
			this->radioButton_speed2->Click += gcnew System::EventHandler(this, &Main::radioButton_speed2_Click);
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
			this->radioButton_speed1->Click += gcnew System::EventHandler(this, &Main::radioButton_speed1_Click);
			// 
			// textBox_food
			// 
			this->textBox_food->Location = System::Drawing::Point(40, 111);
			this->textBox_food->Name = L"textBox_food";
			this->textBox_food->ReadOnly = true;
			this->textBox_food->Size = System::Drawing::Size(56, 20);
			this->textBox_food->TabIndex = 4;
			this->textBox_food->Text = L"50";
			this->textBox_food->TextChanged += gcnew System::EventHandler(this, &Main::textBox_food_TextChanged);
			// 
			// button_stop
			// 
			this->button_stop->Location = System::Drawing::Point(21, 590);
			this->button_stop->Name = L"button_stop";
			this->button_stop->Size = System::Drawing::Size(75, 23);
			this->button_stop->TabIndex = 5;
			this->button_stop->Text = L"Стоп";
			this->button_stop->UseVisualStyleBackColor = true;
			this->button_stop->Click += gcnew System::EventHandler(this, &Main::button_stop_Click);
			// 
			// button_simulation_start
			// 
			this->button_simulation_start->Location = System::Drawing::Point(450, 570);
			this->button_simulation_start->Name = L"button_simulation_start";
			this->button_simulation_start->Size = System::Drawing::Size(122, 23);
			this->button_simulation_start->TabIndex = 6;
			this->button_simulation_start->Text = L"Новая симуляция";
			this->button_simulation_start->UseVisualStyleBackColor = true;
			this->button_simulation_start->Click += gcnew System::EventHandler(this, &Main::button_simulation_start_Click);
			// 
			// button_step
			// 
			this->button_step->Location = System::Drawing::Point(128, 590);
			this->button_step->Name = L"button_step";
			this->button_step->Size = System::Drawing::Size(75, 23);
			this->button_step->TabIndex = 7;
			this->button_step->Text = L"Шаг вперед";
			this->button_step->UseVisualStyleBackColor = true;
			this->button_step->Click += gcnew System::EventHandler(this, &Main::button_step_Click);
			// 
			// button_start
			// 
			this->button_start->Location = System::Drawing::Point(21, 590);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(75, 23);
			this->button_start->TabIndex = 9;
			this->button_start->Text = L"Старт";
			this->button_start->UseVisualStyleBackColor = true;
			this->button_start->Visible = false;
			this->button_start->Click += gcnew System::EventHandler(this, &Main::button_start_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 425);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(113, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Скорость симуляции";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Main::textBox1_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(126, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"Солнечная энергия:";
			// 
			// textBox_water
			// 
			this->textBox_water->Location = System::Drawing::Point(40, 163);
			this->textBox_water->Name = L"textBox_water";
			this->textBox_water->ReadOnly = true;
			this->textBox_water->Size = System::Drawing::Size(56, 20);
			this->textBox_water->TabIndex = 11;
			this->textBox_water->Text = L"50";
			this->textBox_water->TextChanged += gcnew System::EventHandler(this, &Main::textBox5_TextChanged);
			// 
			// Time
			// 
			this->Time->Enabled = true;
			this->Time->Interval = 150;
			this->Time->Tick += gcnew System::EventHandler(this, &Main::Time_Tick);
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
			this->panel4->Location = System::Drawing::Point(161, 10);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(807, 10);
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
			this->panel6->Location = System::Drawing::Point(161, 10);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(10, 539);
			this->panel6->TabIndex = 13;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(961, 10);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 539);
			this->panel3->TabIndex = 16;
			// 
			// button_plus_food
			// 
			this->button_plus_food->Location = System::Drawing::Point(102, 111);
			this->button_plus_food->Name = L"button_plus_food";
			this->button_plus_food->Size = System::Drawing::Size(36, 20);
			this->button_plus_food->TabIndex = 17;
			this->button_plus_food->Text = L"+25";
			this->button_plus_food->UseVisualStyleBackColor = true;
			this->button_plus_food->Click += gcnew System::EventHandler(this, &Main::button_plus_food_Click);
			// 
			// button_minus_food
			// 
			this->button_minus_food->Location = System::Drawing::Point(1, 110);
			this->button_minus_food->Name = L"button_minus_food";
			this->button_minus_food->Size = System::Drawing::Size(33, 20);
			this->button_minus_food->TabIndex = 18;
			this->button_minus_food->Text = L"-25";
			this->button_minus_food->UseVisualStyleBackColor = true;
			this->button_minus_food->Click += gcnew System::EventHandler(this, &Main::button_minus_food_Click);
			// 
			// button_plus_water
			// 
			this->button_plus_water->Location = System::Drawing::Point(102, 163);
			this->button_plus_water->Name = L"button_plus_water";
			this->button_plus_water->Size = System::Drawing::Size(36, 20);
			this->button_plus_water->TabIndex = 19;
			this->button_plus_water->Text = L"+25";
			this->button_plus_water->UseVisualStyleBackColor = true;
			this->button_plus_water->Click += gcnew System::EventHandler(this, &Main::button_plus_sun_Click);
			// 
			// button_minus_water
			// 
			this->button_minus_water->Location = System::Drawing::Point(1, 163);
			this->button_minus_water->Name = L"button_minus_water";
			this->button_minus_water->Size = System::Drawing::Size(33, 20);
			this->button_minus_water->TabIndex = 20;
			this->button_minus_water->Text = L"-25";
			this->button_minus_water->UseVisualStyleBackColor = true;
			this->button_minus_water->Click += gcnew System::EventHandler(this, &Main::button_minus_sun_Click);
			// 
			// button_clear_field
			// 
			this->button_clear_field->Location = System::Drawing::Point(450, 570);
			this->button_clear_field->Name = L"button_clear_field";
			this->button_clear_field->Size = System::Drawing::Size(122, 23);
			this->button_clear_field->TabIndex = 21;
			this->button_clear_field->Text = L"Очистить";
			this->button_clear_field->UseVisualStyleBackColor = true;
			this->button_clear_field->Visible = false;
			this->button_clear_field->Click += gcnew System::EventHandler(this, &Main::button_clear_field_Click);
			// 
			// button_minus_food_energy
			// 
			this->button_minus_food_energy->Location = System::Drawing::Point(1, 226);
			this->button_minus_food_energy->Name = L"button_minus_food_energy";
			this->button_minus_food_energy->Size = System::Drawing::Size(33, 20);
			this->button_minus_food_energy->TabIndex = 25;
			this->button_minus_food_energy->Text = L"-25";
			this->button_minus_food_energy->UseVisualStyleBackColor = true;
			this->button_minus_food_energy->Click += gcnew System::EventHandler(this, &Main::button_minus_food_energy_Click);
			// 
			// button_plus_food_energy
			// 
			this->button_plus_food_energy->Location = System::Drawing::Point(102, 226);
			this->button_plus_food_energy->Name = L"button_plus_food_energy";
			this->button_plus_food_energy->Size = System::Drawing::Size(36, 20);
			this->button_plus_food_energy->TabIndex = 24;
			this->button_plus_food_energy->Text = L"+25";
			this->button_plus_food_energy->UseVisualStyleBackColor = true;
			this->button_plus_food_energy->Click += gcnew System::EventHandler(this, &Main::button_plus_food_energy_Click);
			// 
			// textBox_food_energy
			// 
			this->textBox_food_energy->Location = System::Drawing::Point(40, 226);
			this->textBox_food_energy->Name = L"textBox_food_energy";
			this->textBox_food_energy->ReadOnly = true;
			this->textBox_food_energy->Size = System::Drawing::Size(56, 20);
			this->textBox_food_energy->TabIndex = 23;
			this->textBox_food_energy->Text = L"50";
			// 
			// textBox
			// 
			this->textBox->Location = System::Drawing::Point(12, 200);
			this->textBox->Name = L"textBox";
			this->textBox->ReadOnly = true;
			this->textBox->Size = System::Drawing::Size(126, 20);
			this->textBox->TabIndex = 22;
			this->textBox->Text = L"Энергия с еды:";
			// 
			// button_food_fresh_minus
			// 
			this->button_food_fresh_minus->Location = System::Drawing::Point(1, 294);
			this->button_food_fresh_minus->Name = L"button_food_fresh_minus";
			this->button_food_fresh_minus->Size = System::Drawing::Size(33, 20);
			this->button_food_fresh_minus->TabIndex = 29;
			this->button_food_fresh_minus->Text = L"-10";
			this->button_food_fresh_minus->UseVisualStyleBackColor = true;
			this->button_food_fresh_minus->Click += gcnew System::EventHandler(this, &Main::button_food_fresh_minus_Click);
			// 
			// button_food_fresh_plus
			// 
			this->button_food_fresh_plus->Location = System::Drawing::Point(102, 294);
			this->button_food_fresh_plus->Name = L"button_food_fresh_plus";
			this->button_food_fresh_plus->Size = System::Drawing::Size(36, 20);
			this->button_food_fresh_plus->TabIndex = 28;
			this->button_food_fresh_plus->Text = L"+10";
			this->button_food_fresh_plus->UseVisualStyleBackColor = true;
			this->button_food_fresh_plus->Click += gcnew System::EventHandler(this, &Main::button_food_fresh_plus_Click);
			// 
			// textBox_food_fresh
			// 
			this->textBox_food_fresh->Location = System::Drawing::Point(40, 294);
			this->textBox_food_fresh->Name = L"textBox_food_fresh";
			this->textBox_food_fresh->ReadOnly = true;
			this->textBox_food_fresh->Size = System::Drawing::Size(56, 20);
			this->textBox_food_fresh->TabIndex = 27;
			this->textBox_food_fresh->Text = L"10";
			// 
			// textBox_1
			// 
			this->textBox_1->Location = System::Drawing::Point(12, 268);
			this->textBox_1->Name = L"textBox_1";
			this->textBox_1->ReadOnly = true;
			this->textBox_1->Size = System::Drawing::Size(126, 20);
			this->textBox_1->TabIndex = 26;
			this->textBox_1->Text = L"Время хранения еды:";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1007, 630);
			this->Controls->Add(this->button_food_fresh_minus);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button_food_fresh_plus);
			this->Controls->Add(this->textBox_food_fresh);
			this->Controls->Add(this->textBox_1);
			this->Controls->Add(this->button_minus_food_energy);
			this->Controls->Add(this->button_plus_food_energy);
			this->Controls->Add(this->textBox_food_energy);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->button_clear_field);
			this->Controls->Add(this->button_minus_water);
			this->Controls->Add(this->button_plus_water);
			this->Controls->Add(this->button_minus_food);
			this->Controls->Add(this->button_plus_food);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->Text = L"Симулятор клетки";
			this->Load += gcnew System::EventHandler(this, &Main::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int	step = 0, //номер текущего поколения
			stop_check = 0,	//флаг паузы симуляции
			speed_check,	//флаг скорости симуляции
			step_last = 0,	//номер предыдущего поколения
			end_check=0;	//флаг завершения симуляции
		int BlueNum, RedNum, PurpleNum, GreenNum,//количество активных клеток
			newNum;	//номер активной клетки
		int food_num=50,	//переменная количества еды на поле
			sun_num=50,		//объём энергии получаемой при фотосинтезе
			food_energy=50,	//объём энергии получаемой при поедании еды
			food_fresh=10;	//Время хранения еды

private: array<PictureBox^>^ Blue;	//массив элементов для отображения синих клеток
private: array<PictureBox^>^ Red;	//массив элементов для отображения красных клеток
private: array<PictureBox^>^ Green;	//массив элементов для отображения зелёных клеток
private: array<PictureBox^>^ Purple;//массив элементов для отображения фиолетовых клеток
private: array<PictureBox^>^ Food;//массив элементов для отображения еды
Cell_Blue* BLUE_CELLS = new Cell_Blue[10000];	//массив всех синих клеток
Cell_red* RED_CELLS = new Cell_red[10000];		//массив всех красных клеток
Cell_green* GREEN_CELLS = new Cell_green[10000];	//массив всех зеленых клеток
Cell_purple* PURPLE_CELLS = new Cell_purple[10000];	//массив всех фиолетовых клеток
Food_Class* FOOD_CELL = new Food_Class[501]; //массив еды

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
	textBox_generation->Text = "Поколение: " + step;
	if (step_last != step)
	{
		Draw_Movement drawing_methods;
		Game_Logic logic;
		int action,//флаг действий клетки
			x,
			y,
			m;
		int prey;//номер съеденной клетки
		int BlueDead,	//флаг вымирания синих клетки
			GreenDead,	//флаг вымирания зеленых клетки
			RedDead,	//флаг вымирания красных клетки
			PurpleDead;	//флаг вымирания фиолетовых клетки

		int activB=1,	//флаг активности синих клеток
			activR=1,	//флаг активности красных клеток
			activG=1,	//флаг активности зеленых клеток
			activP=1;	//флаг активности фиолетовых клеток
		for (int i = 0; i < food_num; i++)
		{
			if (FOOD_CELL[i].freshness <= 0)
			{
				//Random^ rand = gcnew Random();
				x = rand() % 780+171;
				int TempX = x % 10;
				y = rand() % 511 +20;
				int TempY = y % 10;
				//x -= TempX;
				//y -= TempY;
				FOOD_CELL[i].set_Food(food_energy, food_fresh, x, y);
				FOOD_CELL[i].place_food(Food, x, y,i);
				this->Controls->Add(Food[i]);
			}
		}
		newNum = 0;
		if (activB)
		{
			while (newNum < 30 && newNum< BlueNum)	//30 синих клеток осуществляют действия
			{
				newNum++;
				m = rand() % BlueNum;
				if (BLUE_CELLS[m].Energy > 0)
					action = rand() % 3 + 1;
				else
					action = 0;
				switch (action)
				{
				case 1:
					drawing_methods.Normal_Move(Blue[m], Food, food_num);
					BLUE_CELLS[m].set_cell(Blue[m]->Location.X, Blue[m]->Location.Y, BLUE_CELLS[m].Energy);
					this->Controls->Add(Blue[m]);
					break;
				case 2:
					break;
				case 3:

					drawing_methods.Create_New_Cell(Blue, 1, BlueNum, m);
					this->Controls->Add(Blue[BlueNum]);
					BLUE_CELLS[BlueNum].set_cell(Blue[BlueNum]->Location.X, Blue[BlueNum]->Location.Y, BLUE_CELLS[m].Energy / 2);
					BLUE_CELLS[m].set_energy(BLUE_CELLS[m].Energy / 2);
					BlueNum++;
					break;
				default:
					break;
				}
			}
		}
		newNum = 0;
		if (activR)
		{
			while (newNum < 30 && newNum < RedNum)	//30 красных клеток осуществляют действия
			{
				newNum++;
				m = rand() % RedNum;
				if (RED_CELLS[m].Energy > 0)
					action = rand() % 3 + 1;
				else
					action = 0;
				switch (action)
				{
				case 1:
					drawing_methods.Normal_Move(Red[m], Food, food_num);
					RED_CELLS[m].set_cell(Red[m]->Location.X, Red[m]->Location.Y, RED_CELLS[m].Energy);
					this->Controls->Add(Red[m]);
					break;
				case 2:
					break;
				case 3:

					drawing_methods.Create_New_Cell(Red, 2, RedNum, m);
					this->Controls->Add(Red[RedNum]);
					RED_CELLS[RedNum].set_cell(Red[RedNum]->Location.X, Red[RedNum]->Location.Y, RED_CELLS[m].Energy / 2);
					RED_CELLS[m].set_energy(RED_CELLS[m].Energy / 2);
					RedNum++;
					break;
				default:
					break;
				}

			}
		}
		
		newNum = 0;
		if (activG )
		{
			while (newNum < 30 && newNum < GreenNum)	//30 зеленых клеток осуществляют действия
			{
				newNum++;
				m = rand() % GreenNum;
				if (GREEN_CELLS[m].Energy > 0)
					action = rand() % 3 + 1;
				else
					action = 0;
				switch (action)
				{
				case 1:
					drawing_methods.Normal_Move(Green[m], Food, food_num);
					GREEN_CELLS[m].set_cell(Green[m]->Location.X, Green[m]->Location.Y, GREEN_CELLS[m].Energy);
					this->Controls->Add(Green[m]);
					break;
				case 2:
					GREEN_CELLS[m].set_energy(GREEN_CELLS[m].Energy + sun_num);
					break;
				case 3:
					drawing_methods.Create_New_Cell(Green, 3, GreenNum, m);
					this->Controls->Add(Green[GreenNum]);
					GREEN_CELLS[GreenNum].set_cell(Green[GreenNum]->Location.X, Green[GreenNum]->Location.Y, GREEN_CELLS[m].Energy / 2);
					GREEN_CELLS[m].set_energy(GREEN_CELLS[m].Energy / 2);
					GreenNum++;
					break;
				default:
					break;
				}

			}
		}
		
		newNum = 0;
		if (activP )
		{
			while (newNum < 20 && newNum < PurpleNum) //10 фиолетовых клеток осуществляют действия
			{
				newNum++;
				m = rand() % PurpleNum;
				action = rand() % 3 + 1;
				switch (action)
				{
				case 1:
					drawing_methods.Normal_Move(Purple[m], Food, food_num);
					PURPLE_CELLS[m].set_cell(Purple[m]->Location.X, Purple[m]->Location.Y, PURPLE_CELLS[m].Energy);
					this->Controls->Add(Purple[m]);
					break;
				case 2:
					PURPLE_CELLS[m].set_energy(PURPLE_CELLS[m].Energy + sun_num);
					break;
				case 3:
					drawing_methods.Create_New_Cell(Purple, 4, PurpleNum, m);
					this->Controls->Add(Purple[PurpleNum]);
					PURPLE_CELLS[PurpleNum].set_cell(Purple[PurpleNum]->Location.X, Purple[PurpleNum]->Location.Y, PURPLE_CELLS[m].Energy / 2);
					PURPLE_CELLS[m].set_energy(PURPLE_CELLS[m].Energy / 2);
					PurpleNum++;
					break;
				default:
					break;
				}

			}
		}
		for (int i = 0; i < BlueNum; i++)		//проверка съели ли синие клетки еду
		{
			BLUE_CELLS[i].eat(FOOD_CELL, food_num, BLUE_CELLS[i]);
		}

		for (int i = 0; i < PurpleNum; i++)		//проверка съели ли фиолетовые клетки еду
		{
			PURPLE_CELLS[i].eat(FOOD_CELL, food_num, PURPLE_CELLS[i]);
		}

		for (int i = 0; i < RedNum; i++)	//проверка, съели ли красные клетки другие клетки
		{
			switch (logic.eat_cell(Blue, Red[i], Green, Purple, BlueNum, GreenNum, PurpleNum, &prey))
			{
			case 1:
				RED_CELLS[i].set_energy(RED_CELLS[i].Energy + BLUE_CELLS[prey].Energy);
				BLUE_CELLS[i].set_energy(0);
				break;
			case 2:
				RED_CELLS[i].set_energy( RED_CELLS[i].Energy+ PURPLE_CELLS[prey].Energy);
				PURPLE_CELLS[i].set_energy(0);
				break;
			case 3:
				RED_CELLS[i].set_energy(RED_CELLS[i].Energy + GREEN_CELLS[prey].Energy);
				GREEN_CELLS[i].set_energy(0);
				break;
			default:
				break;
			}
		}
		for (int i = 0; i < food_num; i++)	//проверка на удаление еды
		{
			FOOD_CELL[i].freshness -= 1;
			if(FOOD_CELL[i].freshness<=1)
				this->Controls->Remove(Food[i]);
		}
			end_check = 0;//флаг на окончание симуляции
			BlueDead = 0;
			GreenDead = 0;
			RedDead = 0;
			PurpleDead = 0;

			for (int i = 0; i < BlueNum; i++)			//проверка смерти синих клеток
			{
				BLUE_CELLS[i].set_energy(BLUE_CELLS[i].Energy-1);
				if (BLUE_CELLS[i].Energy<1)
				{
					this->Controls->Remove(Blue[i]);
				}
				else
					BlueDead += 1;
			}
			for (int i = 0; i < RedNum; i++)	//проверка смерти красных клеток
			{
				RED_CELLS[i].set_energy(RED_CELLS[i].Energy-1);
				if (RED_CELLS[i].Energy < 1)
				{
					this->Controls->Remove(Red[i]);
				}
				else
					RedDead += 1;
			}
			for (int i = 0; i < GreenNum; i++)	//проверка смерти зеленых клеток
			{
				GREEN_CELLS[i].set_energy(GREEN_CELLS[i].Energy-1);
				if (GREEN_CELLS[i].Energy < 1)
				{
					this->Controls->Remove(Green[i]);
				}
				else
					GreenDead += 1;
			}

			for (int i = 0; i < PurpleNum; i++)	//проверка смерти фиолетовых клеток
			{
				PURPLE_CELLS[i].set_energy(PURPLE_CELLS[i].Energy-1);
				if (PURPLE_CELLS[i].Energy < 1)
				{
					this->Controls->Remove(Purple[i]);
				}
				else
					PurpleDead += 1;
			}
			if (BlueDead == 0)
				activB = 0;
			if (RedDead == 0)
				activR = 0;
			if (GreenDead == 0)
				activG = 0;
			if (PurpleDead == 0)
				activP = 0;

			if (BlueDead==0 && RedDead==0 && GreenDead==0 && PurpleDead==0)	//прекращение симуляции если  нет живых клеток
			{
				step = 0;
				step_last = 0;
				stop_check = 0;
				BlueNum = 0;
				RedNum = 0;
				GreenNum = 0;
				PurpleNum = 0;
				MessageBox::Show("Симуляция закончена.", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
	}
	step_last = step;
}
private: System::Void button_step_Click(System::Object^ sender, System::EventArgs^ e) {
	if (step > 0)
	{
		step += 1;
		button_stop->Visible = false;
		button_start->Visible = true;
		stop_check = 0;
	}
	else
		MessageBox::Show("Симуляция не начата.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Information);


}
private: System::Void textBox_food_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void textBox_generation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void radioButton_speed2_Click(System::Object^ sender, System::EventArgs^ e) {
	Time->Interval = 100;
}
private: System::Void radioButton_speed3_Click(System::Object^ sender, System::EventArgs^ e) {
	Time->Interval = 50;
}
private: System::Void radioButton_speed1_Click(System::Object^ sender, System::EventArgs^ e) {
	Time->Interval = 150;
}
private: System::Void button_simulation_start_Click(System::Object^ sender, System::EventArgs^ e) {
	Draw_Movement asdas;
	int x, y;

		Blue = gcnew array <PictureBox^, 1>(10000);
		Red = gcnew array <PictureBox^, 1>(10000);
		Green = gcnew array <PictureBox^, 1>(10000);
		Purple = gcnew array <PictureBox^, 1>(10000);
		Food = gcnew array <PictureBox^, 1>(501);
	
	asdas.First_Move(Blue,1);
	this->Controls->Add(Blue[0]);
	BLUE_CELLS[0].set_cell(Blue[0]->Location.X, Blue[0]->Location.Y,1000);
	BlueNum = 1;


	asdas.First_Move(Red, 2);
	this->Controls->Add(Red[0]);
	RED_CELLS[0].set_cell(Red[0]->Location.X, Red[0]->Location.Y, 1000);
	RedNum = 1;


	asdas.First_Move(Green, 3);
	this->Controls->Add(Green[0]);
	GREEN_CELLS[0].set_cell(Green[0]->Location.X, Green[0]->Location.Y, 1000);
	GreenNum = 1;


	asdas.First_Move(Purple, 4);
	this->Controls->Add(Purple[0]);
	PURPLE_CELLS[0].set_cell(Purple[0]->Location.X, Blue[0]->Location.Y, 1000);
	PurpleNum = 1; 
	stop_check = 1;
	for (int i = 0; i < food_num; i++)
	{
		x = rand() % 780 + 171;
		y = rand() % 511 + 20;
		FOOD_CELL[i].set_Food(food_energy, food_fresh, x, y);
		FOOD_CELL[i].place_food_first(Food, x, y, i);
		this->Controls->Add(Food[i]);
	}
	button_simulation_start->Visible = false;
	button_clear_field->Visible=true;
	
}

private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void button_clear_field_Click(System::Object^ sender, System::EventArgs^ e) {

		for (int i = BlueNum - 1; i >= 0; i--)
		{
			this->Controls->Remove(Blue[i]);
		}
		for (int i = RedNum - 1; i >= 0; i--)
		{
			this->Controls->Remove(Red[i]);
		}
		for (int i = GreenNum - 1; i >= 0; i--)
		{
			this->Controls->Remove(Green[i]);
		}
		for (int i = PurpleNum - 1; i >= 0; i--)
		{
			this->Controls->Remove(Purple[i]);
		}
		for (int i = food_num - 1; i >= 0; i--)
		{
			this->Controls->Remove(Food[i]);
		}
	step = 0;
	step_last = 0;
	stop_check = 0;
	BlueNum = 0;
	RedNum = 0;
	GreenNum = 0;
	PurpleNum = 0;
	button_clear_field->Visible = false;
	button_simulation_start->Visible = true;

}
private: System::Void button_plus_food_Click(System::Object^ sender, System::EventArgs^ e) {
	int x, y;
	if (food_num + 25 <= 500)
	{
		if(stop_check==0)
			Food = gcnew array <PictureBox^, 1>(501);

		for (int i = food_num; i <= food_num + 25; i++)
		{
			Random^ rand = gcnew Random();
			x = rand->Next(171, 951);
			int TempX = x % 10;
			y = rand->Next(11, 531);
			int TempY = y % 10;
			x -= TempX;
			y -= TempY;
			FOOD_CELL[i].set_Food(food_energy, food_fresh, x, y);
			FOOD_CELL[i].place_food_first(Food, x, y,i);
			if(stop_check!=0)
				this->Controls->Add(Food[i]);
		}
		food_num += 25;
	}
	textBox_food->Text =""+food_num;
}
private: System::Void button_minus_food_Click(System::Object^ sender, System::EventArgs^ e) {
	if (food_num - 25 >= 0)
	{
		for(int i=food_num;i>=food_num-25;i--)
			this->Controls->Remove(Food[i]);
		food_num -= 25;
	}
	textBox_food->Text = "" + food_num;
}
private: System::Void button_plus_sun_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sun_num + 25 <= 200)
		sun_num += 25;
	textBox_water->Text = "" + sun_num;
}
private: System::Void button_minus_sun_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sun_num - 25 >= 0)
		sun_num -= 25;
	textBox_water->Text = "" + sun_num;
}
private: System::Void button_plus_food_energy_Click(System::Object^ sender, System::EventArgs^ e) {
	if (food_energy + 25 <= 200)
		food_energy += 25;
	textBox_food_energy->Text = "" + food_energy;
}
private: System::Void button_minus_food_energy_Click(System::Object^ sender, System::EventArgs^ e) {
	if (food_energy - 25 >= 0)
		food_energy -= 25;
	textBox_food_energy->Text = "" + food_energy;
}
private: System::Void button_food_fresh_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (food_fresh + 10 <= 100)
		food_fresh += 10;
	textBox_food_fresh->Text = "" + food_fresh;
}
private: System::Void button_food_fresh_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (food_fresh - 10 >= 0)
		food_fresh -= 10;
	textBox_food_fresh->Text = "" + food_fresh;
}
};
}
