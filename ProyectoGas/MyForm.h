#pragma once
#include "Placa.h"
#include "Pila.h"
#include "Cola.h"
#include "Lista.h"
namespace ProyectoGas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txtboxObtenerPrecio1;
	private: System::Windows::Forms::TextBox^  txtboxMostrarPila;
	private: System::Windows::Forms::TextBox^  txtboxMostrarCola;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtboxPrecio1;
	private: System::Windows::Forms::Button^  btnShowPrecio1;
	private: System::Windows::Forms::Button^  btnEditar;
	private: System::Windows::Forms::Button^  btnHecho;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnOtroPrecio1;

	private: System::Windows::Forms::Button^  btnBorrardigito;
	private: System::Windows::Forms::GroupBox^  groupboxBorrar;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupPrecio2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  btnMostrarPrecio2;

	private: System::Windows::Forms::TextBox^  txtboxShowPrecio2;
	private: System::Windows::Forms::Button^  btnOtroPrecio2;



	private: System::Windows::Forms::TextBox^  txtboxObtenerPrecio2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btnEditarPrecio2;
	private: System::Windows::Forms::Button^  btnHechoPrecio2;
	private: System::Windows::Forms::Button^  btnOrdenarPila;
	private: System::Windows::Forms::Button^  btnOrdenarCola;
	private: System::Windows::Forms::GroupBox^  groupboxPrecio3;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  btnMostrarPrecio3;
	private: System::Windows::Forms::TextBox^  txtboxShowPrecio3;



	private: System::Windows::Forms::TextBox^  txtboxObtenerPrecio3;


	private: System::Windows::Forms::Button^  btnEditarPrecio3;
	private: System::Windows::Forms::Button^  btnHechoPrecio3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtboxObtenerPrecio1 = (gcnew System::Windows::Forms::TextBox());
			this->txtboxMostrarPila = (gcnew System::Windows::Forms::TextBox());
			this->txtboxMostrarCola = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtboxPrecio1 = (gcnew System::Windows::Forms::TextBox());
			this->btnShowPrecio1 = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnHecho = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnOtroPrecio1 = (gcnew System::Windows::Forms::Button());
			this->btnBorrardigito = (gcnew System::Windows::Forms::Button());
			this->groupboxBorrar = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupPrecio2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnMostrarPrecio2 = (gcnew System::Windows::Forms::Button());
			this->txtboxShowPrecio2 = (gcnew System::Windows::Forms::TextBox());
			this->btnOtroPrecio2 = (gcnew System::Windows::Forms::Button());
			this->txtboxObtenerPrecio2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnEditarPrecio2 = (gcnew System::Windows::Forms::Button());
			this->btnHechoPrecio2 = (gcnew System::Windows::Forms::Button());
			this->btnOrdenarPila = (gcnew System::Windows::Forms::Button());
			this->btnOrdenarCola = (gcnew System::Windows::Forms::Button());
			this->groupboxPrecio3 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnMostrarPrecio3 = (gcnew System::Windows::Forms::Button());
			this->txtboxShowPrecio3 = (gcnew System::Windows::Forms::TextBox());
			this->txtboxObtenerPrecio3 = (gcnew System::Windows::Forms::TextBox());
			this->btnEditarPrecio3 = (gcnew System::Windows::Forms::Button());
			this->btnHechoPrecio3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupboxBorrar->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupPrecio2->SuspendLayout();
			this->groupboxPrecio3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(197, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gasolinera Veliz";
			// 
			// txtboxObtenerPrecio1
			// 
			this->txtboxObtenerPrecio1->Location = System::Drawing::Point(103, 21);
			this->txtboxObtenerPrecio1->Name = L"txtboxObtenerPrecio1";
			this->txtboxObtenerPrecio1->Size = System::Drawing::Size(100, 20);
			this->txtboxObtenerPrecio1->TabIndex = 1;
			// 
			// txtboxMostrarPila
			// 
			this->txtboxMostrarPila->Enabled = false;
			this->txtboxMostrarPila->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtboxMostrarPila->Location = System::Drawing::Point(541, 101);
			this->txtboxMostrarPila->Multiline = true;
			this->txtboxMostrarPila->Name = L"txtboxMostrarPila";
			this->txtboxMostrarPila->ReadOnly = true;
			this->txtboxMostrarPila->Size = System::Drawing::Size(98, 352);
			this->txtboxMostrarPila->TabIndex = 2;
			this->txtboxMostrarPila->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtboxMostrarCola
			// 
			this->txtboxMostrarCola->Enabled = false;
			this->txtboxMostrarCola->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20, System::Drawing::FontStyle::Bold));
			this->txtboxMostrarCola->Location = System::Drawing::Point(659, 101);
			this->txtboxMostrarCola->Multiline = true;
			this->txtboxMostrarCola->Name = L"txtboxMostrarCola";
			this->txtboxMostrarCola->ReadOnly = true;
			this->txtboxMostrarCola->Size = System::Drawing::Size(92, 352);
			this->txtboxMostrarCola->TabIndex = 3;
			this->txtboxMostrarCola->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(571, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Pila";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(666, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Cola";
			// 
			// txtboxPrecio1
			// 
			this->txtboxPrecio1->Font = (gcnew System::Drawing::Font(L"Russo One", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtboxPrecio1->Location = System::Drawing::Point(389, 152);
			this->txtboxPrecio1->Name = L"txtboxPrecio1";
			this->txtboxPrecio1->ReadOnly = true;
			this->txtboxPrecio1->Size = System::Drawing::Size(118, 36);
			this->txtboxPrecio1->TabIndex = 6;
			this->txtboxPrecio1->TextChanged += gcnew System::EventHandler(this, &MyForm::txtboxPrecio1_TextChanged);
			// 
			// btnShowPrecio1
			// 
			this->btnShowPrecio1->Enabled = false;
			this->btnShowPrecio1->Location = System::Drawing::Point(276, 152);
			this->btnShowPrecio1->Name = L"btnShowPrecio1";
			this->btnShowPrecio1->Size = System::Drawing::Size(75, 23);
			this->btnShowPrecio1->TabIndex = 7;
			this->btnShowPrecio1->Text = L"Mostrar";
			this->btnShowPrecio1->UseVisualStyleBackColor = true;
			this->btnShowPrecio1->Click += gcnew System::EventHandler(this, &MyForm::btnShowPrecio1_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->Enabled = false;
			this->btnEditar->Location = System::Drawing::Point(19, 44);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(63, 25);
			this->btnEditar->TabIndex = 8;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = true;
			this->btnEditar->Click += gcnew System::EventHandler(this, &MyForm::btnEditar_Click);
			// 
			// btnHecho
			// 
			this->btnHecho->Location = System::Drawing::Point(121, 44);
			this->btnHecho->Name = L"btnHecho";
			this->btnHecho->Size = System::Drawing::Size(84, 25);
			this->btnHecho->TabIndex = 9;
			this->btnHecho->Text = L"Hecho";
			this->btnHecho->UseVisualStyleBackColor = true;
			this->btnHecho->Click += gcnew System::EventHandler(this, &MyForm::btnHecho_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"¿Desea ingresar otro Precio\?";
			// 
			// btnOtroPrecio1
			// 
			this->btnOtroPrecio1->Location = System::Drawing::Point(161, 151);
			this->btnOtroPrecio1->Name = L"btnOtroPrecio1";
			this->btnOtroPrecio1->Size = System::Drawing::Size(42, 23);
			this->btnOtroPrecio1->TabIndex = 11;
			this->btnOtroPrecio1->Text = L"Si";
			this->btnOtroPrecio1->UseVisualStyleBackColor = true;
			this->btnOtroPrecio1->Click += gcnew System::EventHandler(this, &MyForm::btnOtroPrecio1_Click);
			// 
			// btnBorrardigito
			// 
			this->btnBorrardigito->Enabled = false;
			this->btnBorrardigito->Location = System::Drawing::Point(19, 75);
			this->btnBorrardigito->Name = L"btnBorrardigito";
			this->btnBorrardigito->Size = System::Drawing::Size(55, 44);
			this->btnBorrardigito->TabIndex = 12;
			this->btnBorrardigito->Text = L"Borrar un digito";
			this->btnBorrardigito->UseVisualStyleBackColor = true;
			this->btnBorrardigito->Click += gcnew System::EventHandler(this, &MyForm::btnBorrardigito_Click);
			// 
			// groupboxBorrar
			// 
			this->groupboxBorrar->Controls->Add(this->label5);
			this->groupboxBorrar->Controls->Add(this->comboBox1);
			this->groupboxBorrar->Location = System::Drawing::Point(80, 75);
			this->groupboxBorrar->Name = L"groupboxBorrar";
			this->groupboxBorrar->Size = System::Drawing::Size(138, 65);
			this->groupboxBorrar->TabIndex = 13;
			this->groupboxBorrar->TabStop = false;
			this->groupboxBorrar->Text = L"Borrar";
			this->groupboxBorrar->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"¿Qué digito desea borrar\?";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9"
			});
			this->comboBox1->Location = System::Drawing::Point(9, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->groupboxBorrar);
			this->groupBox1->Controls->Add(this->btnOtroPrecio1);
			this->groupBox1->Controls->Add(this->txtboxObtenerPrecio1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->btnBorrardigito);
			this->groupBox1->Controls->Add(this->btnEditar);
			this->groupBox1->Controls->Add(this->btnHecho);
			this->groupBox1->Location = System::Drawing::Point(24, 71);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(235, 182);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Precio 1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Ingrese Precio: ";
			// 
			// groupPrecio2
			// 
			this->groupPrecio2->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->groupPrecio2->Controls->Add(this->label7);
			this->groupPrecio2->Controls->Add(this->btnOtroPrecio2);
			this->groupPrecio2->Controls->Add(this->txtboxObtenerPrecio2);
			this->groupPrecio2->Controls->Add(this->label9);
			this->groupPrecio2->Controls->Add(this->btnEditarPrecio2);
			this->groupPrecio2->Controls->Add(this->btnHechoPrecio2);
			this->groupPrecio2->Location = System::Drawing::Point(24, 259);
			this->groupPrecio2->Name = L"groupPrecio2";
			this->groupPrecio2->Size = System::Drawing::Size(235, 111);
			this->groupPrecio2->TabIndex = 15;
			this->groupPrecio2->TabStop = false;
			this->groupPrecio2->Text = L"Precio 2";
			this->groupPrecio2->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Ingrese Precio: ";
			// 
			// btnMostrarPrecio2
			// 
			this->btnMostrarPrecio2->Enabled = false;
			this->btnMostrarPrecio2->Location = System::Drawing::Point(276, 305);
			this->btnMostrarPrecio2->Name = L"btnMostrarPrecio2";
			this->btnMostrarPrecio2->Size = System::Drawing::Size(75, 23);
			this->btnMostrarPrecio2->TabIndex = 7;
			this->btnMostrarPrecio2->Text = L"Mostrar";
			this->btnMostrarPrecio2->UseVisualStyleBackColor = true;
			this->btnMostrarPrecio2->Click += gcnew System::EventHandler(this, &MyForm::btnMostrarPrecio2_Click);
			// 
			// txtboxShowPrecio2
			// 
			this->txtboxShowPrecio2->Font = (gcnew System::Drawing::Font(L"Russo One", 18, System::Drawing::FontStyle::Bold));
			this->txtboxShowPrecio2->Location = System::Drawing::Point(389, 305);
			this->txtboxShowPrecio2->Name = L"txtboxShowPrecio2";
			this->txtboxShowPrecio2->ReadOnly = true;
			this->txtboxShowPrecio2->Size = System::Drawing::Size(118, 36);
			this->txtboxShowPrecio2->TabIndex = 6;
			// 
			// btnOtroPrecio2
			// 
			this->btnOtroPrecio2->Location = System::Drawing::Point(161, 75);
			this->btnOtroPrecio2->Name = L"btnOtroPrecio2";
			this->btnOtroPrecio2->Size = System::Drawing::Size(42, 23);
			this->btnOtroPrecio2->TabIndex = 11;
			this->btnOtroPrecio2->Text = L"Si";
			this->btnOtroPrecio2->UseVisualStyleBackColor = true;
			this->btnOtroPrecio2->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// txtboxObtenerPrecio2
			// 
			this->txtboxObtenerPrecio2->Location = System::Drawing::Point(103, 21);
			this->txtboxObtenerPrecio2->Name = L"txtboxObtenerPrecio2";
			this->txtboxObtenerPrecio2->Size = System::Drawing::Size(100, 20);
			this->txtboxObtenerPrecio2->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"¿Desea ingresar otro Precio\?";
			// 
			// btnEditarPrecio2
			// 
			this->btnEditarPrecio2->Enabled = false;
			this->btnEditarPrecio2->Location = System::Drawing::Point(19, 44);
			this->btnEditarPrecio2->Name = L"btnEditarPrecio2";
			this->btnEditarPrecio2->Size = System::Drawing::Size(63, 25);
			this->btnEditarPrecio2->TabIndex = 8;
			this->btnEditarPrecio2->Text = L"Editar";
			this->btnEditarPrecio2->UseVisualStyleBackColor = true;
			this->btnEditarPrecio2->Click += gcnew System::EventHandler(this, &MyForm::btnEditarPrecio2_Click);
			// 
			// btnHechoPrecio2
			// 
			this->btnHechoPrecio2->Location = System::Drawing::Point(121, 44);
			this->btnHechoPrecio2->Name = L"btnHechoPrecio2";
			this->btnHechoPrecio2->Size = System::Drawing::Size(84, 25);
			this->btnHechoPrecio2->TabIndex = 9;
			this->btnHechoPrecio2->Text = L"Hecho";
			this->btnHechoPrecio2->UseVisualStyleBackColor = true;
			this->btnHechoPrecio2->Click += gcnew System::EventHandler(this, &MyForm::btnHechoPrecio2_Click);
			// 
			// btnOrdenarPila
			// 
			this->btnOrdenarPila->Location = System::Drawing::Point(563, 459);
			this->btnOrdenarPila->Name = L"btnOrdenarPila";
			this->btnOrdenarPila->Size = System::Drawing::Size(54, 43);
			this->btnOrdenarPila->TabIndex = 16;
			this->btnOrdenarPila->Text = L"Ordenar Pila";
			this->btnOrdenarPila->UseVisualStyleBackColor = true;
			this->btnOrdenarPila->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnOrdenarCola
			// 
			this->btnOrdenarCola->Location = System::Drawing::Point(678, 459);
			this->btnOrdenarCola->Name = L"btnOrdenarCola";
			this->btnOrdenarCola->Size = System::Drawing::Size(54, 43);
			this->btnOrdenarCola->TabIndex = 17;
			this->btnOrdenarCola->Text = L"Ordenar Cola";
			this->btnOrdenarCola->UseVisualStyleBackColor = true;
			this->btnOrdenarCola->Click += gcnew System::EventHandler(this, &MyForm::btnOrdenarCola_Click);
			// 
			// groupboxPrecio3
			// 
			this->groupboxPrecio3->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->groupboxPrecio3->Controls->Add(this->label8);
			this->groupboxPrecio3->Controls->Add(this->txtboxObtenerPrecio3);
			this->groupboxPrecio3->Controls->Add(this->btnEditarPrecio3);
			this->groupboxPrecio3->Controls->Add(this->btnHechoPrecio3);
			this->groupboxPrecio3->Location = System::Drawing::Point(24, 376);
			this->groupboxPrecio3->Name = L"groupboxPrecio3";
			this->groupboxPrecio3->Size = System::Drawing::Size(235, 83);
			this->groupboxPrecio3->TabIndex = 18;
			this->groupboxPrecio3->TabStop = false;
			this->groupboxPrecio3->Text = L"Precio 3";
			this->groupboxPrecio3->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Ingrese Precio: ";
			// 
			// btnMostrarPrecio3
			// 
			this->btnMostrarPrecio3->Enabled = false;
			this->btnMostrarPrecio3->Location = System::Drawing::Point(276, 422);
			this->btnMostrarPrecio3->Name = L"btnMostrarPrecio3";
			this->btnMostrarPrecio3->Size = System::Drawing::Size(75, 23);
			this->btnMostrarPrecio3->TabIndex = 7;
			this->btnMostrarPrecio3->Text = L"Mostrar";
			this->btnMostrarPrecio3->UseVisualStyleBackColor = true;
			this->btnMostrarPrecio3->Click += gcnew System::EventHandler(this, &MyForm::btnMostrarPrecio3_Click);
			// 
			// txtboxShowPrecio3
			// 
			this->txtboxShowPrecio3->Font = (gcnew System::Drawing::Font(L"Russo One", 18, System::Drawing::FontStyle::Bold));
			this->txtboxShowPrecio3->Location = System::Drawing::Point(389, 420);
			this->txtboxShowPrecio3->Name = L"txtboxShowPrecio3";
			this->txtboxShowPrecio3->ReadOnly = true;
			this->txtboxShowPrecio3->Size = System::Drawing::Size(118, 36);
			this->txtboxShowPrecio3->TabIndex = 6;
			// 
			// txtboxObtenerPrecio3
			// 
			this->txtboxObtenerPrecio3->Location = System::Drawing::Point(103, 21);
			this->txtboxObtenerPrecio3->Name = L"txtboxObtenerPrecio3";
			this->txtboxObtenerPrecio3->Size = System::Drawing::Size(100, 20);
			this->txtboxObtenerPrecio3->TabIndex = 1;
			// 
			// btnEditarPrecio3
			// 
			this->btnEditarPrecio3->Enabled = false;
			this->btnEditarPrecio3->Location = System::Drawing::Point(19, 44);
			this->btnEditarPrecio3->Name = L"btnEditarPrecio3";
			this->btnEditarPrecio3->Size = System::Drawing::Size(63, 25);
			this->btnEditarPrecio3->TabIndex = 8;
			this->btnEditarPrecio3->Text = L"Editar";
			this->btnEditarPrecio3->UseVisualStyleBackColor = true;
			this->btnEditarPrecio3->Click += gcnew System::EventHandler(this, &MyForm::btnEditarPrecio3_Click);
			// 
			// btnHechoPrecio3
			// 
			this->btnHechoPrecio3->Location = System::Drawing::Point(121, 44);
			this->btnHechoPrecio3->Name = L"btnHechoPrecio3";
			this->btnHechoPrecio3->Size = System::Drawing::Size(84, 25);
			this->btnHechoPrecio3->TabIndex = 9;
			this->btnHechoPrecio3->Text = L"Hecho";
			this->btnHechoPrecio3->UseVisualStyleBackColor = true;
			this->btnHechoPrecio3->Click += gcnew System::EventHandler(this, &MyForm::btnHechoPrecio3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(411, 122);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 18);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Precio 1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(411, 279);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 18);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Precio 2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(411, 392);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 18);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Precio 3";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(354, 156);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 26);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Q.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(354, 305);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(36, 26);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Q.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(354, 427);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(36, 26);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Q.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(763, 533);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->groupboxPrecio3);
			this->Controls->Add(this->btnMostrarPrecio3);
			this->Controls->Add(this->txtboxShowPrecio3);
			this->Controls->Add(this->btnMostrarPrecio2);
			this->Controls->Add(this->btnOrdenarCola);
			this->Controls->Add(this->txtboxShowPrecio2);
			this->Controls->Add(this->btnShowPrecio1);
			this->Controls->Add(this->btnOrdenarPila);
			this->Controls->Add(this->txtboxPrecio1);
			this->Controls->Add(this->groupPrecio2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtboxMostrarCola);
			this->Controls->Add(this->txtboxMostrarPila);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Precios";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupboxBorrar->ResumeLayout(false);
			this->groupboxBorrar->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupPrecio2->ResumeLayout(false);
			this->groupPrecio2->PerformLayout();
			this->groupboxPrecio3->ResumeLayout(false);
			this->groupboxPrecio3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Se Crean las Pilas, listas y colas. 
Pila* Caja1;
Cola* Caja2;
Pila* AuxPila;
Cola* AuxCola;
Lista* Principal;
Lista* Secundaria;
Lista* Terciaria;
//Variable utiliza para validar si se desea eliminar todo el numero o por digito, valido en editar precio 1
bool Edicion;

// Inicia Bloque de inicializacion. Se crea la pila y la cola. Se llenan con los valores
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Edicion = true;
		Caja1 = new Pila();
		Caja2 = new Cola();
		for (int i = 1; i <= 2; i++)
		{
			for (int j = 0; j <= 9; j++)
			{
				Placa * Valor  = new Placa();
				Valor->Asignar_Valor(j);
				if (i == 1)
				{
				
					Caja1->Apilar(*Valor);
				}
				if (i == 2)
				{
					Caja2->Agregar_Cola(*Valor);
				}
			}
		}
		Impresion(0);
	}
//Finaliza Bloque de inicializacion.
			 /*****************************************************************************************************************
			 *******************************************************************************************************************/
//Inicia Bloque de instrucciones para Precio 1.

//Inicia Boton Para Mostrar Precio 1
private: System::Void btnShowPrecio1_Click(System::Object^  sender, System::EventArgs^  e) {
//Crea la lista principal	
	Principal = new Lista();
		String^Precio1 = "";
		Precio1=txtboxObtenerPrecio1->Text;

		for (int i=0;i<Precio1->Length;i++)
		{
			AuxPila = nullptr;
			AuxCola = nullptr;
			int Valor = 0;
//Recibe el valor Unicode, a partir de ahi si obtiene el valor númerico
			switch (Precio1[i])
			{
		case 48:
				Valor = 0;
				break;
		case 49:
			Valor = 1;
			break;
		case 50:
			Valor = 2;
			break;
		case 51:
			Valor = 3;
			break;
		case 52:
			Valor = 4;
			break;
		case 53:
			Valor = 5;
			break;
		case 54:
			Valor = 6;
			break;
		case 55:
			Valor = 7;
			break;
		case 56:
			Valor = 8;
			break;
		case 57:
			Valor = 9;
			break;
			}
		//Se llama el metodo Encontrar número
			Encontrar_numero(Valor, Principal);

				}
		
		btnShowPrecio1->Enabled = false;
		btnEditar->Enabled = true;
		btnBorrardigito->Enabled = true;
		//Se llama el metodo imprimir
		Impresion(1);
	

	}
//Finaliza Boton para Mostrar Precio 1
//Inicia Boton Hecho Precio 1
private: System::Void btnHecho_Click(System::Object^  sender, System::EventArgs^  e) {
	//Valida que se la edición para eliminar todo el número o solamente borrar un digito
	if (Edicion == true)
	{
	//Realiza acciones para ingresar un nuevo número
		try
		{
			int Verificacion = Convert::ToInt32(txtboxObtenerPrecio1->Text);
			if (Verificacion<0 || Verificacion>9999)
			{
				MessageBox::Show("Ingrese Numeros Mayores a 0 y menores a 100.00");
				txtboxObtenerPrecio1->Clear();
				txtboxObtenerPrecio1->Focus();
			}
			else
			{
				btnShowPrecio1->Enabled = true;
				btnHecho->Enabled = false;
				txtboxObtenerPrecio1->Enabled = false;
			}
		}
		catch (...)
		{
			MessageBox::Show("Ingrese solamente números");
			txtboxObtenerPrecio1->Clear();
			txtboxObtenerPrecio1->Focus();
		}
	}
	else
	{
		//Realiaza acciones para borrar un digito
		try
		{
			int digito = Convert::ToInt16(comboBox1->Text);
			if(Principal->Cabeza != nullptr)
			{
			//Valida que el digito sea mayor a 0
				if (digito >= 0)
				{
					Placa * Eliminado = new Placa();
					int cant = 0;
					Eliminado = Principal->Cabeza;

					do
					{
						if (cant == 0)
						{
							cant++;
						}
						else
						{
							Eliminado = Eliminado->Siguiente;
						}
					} while (Eliminado->Valor != digito && Eliminado->Siguiente != nullptr);
					if (Eliminado->Valor != digito)
					{
						MessageBox::Show("No existe el número que desea borrar");

					}
					else if (Eliminado->Valor == digito)
					{
						Placa DatoAlaire = Principal->Eliminar(Eliminado);
						int cant = 0;
						bool Apruebo = false;
						Eliminado = Caja1->Head;

						do
						{
							if (Eliminado->Valor == DatoAlaire.Valor)
							{
								Apruebo = true;
							}
							else
							{
								Eliminado = Eliminado->Siguiente;
							}
						} while (Apruebo == false && Eliminado != nullptr);
						if (Apruebo == false)
						{
							Caja1->Apilar(DatoAlaire);
						}
						else
						{
							Caja2->Agregar_Cola(DatoAlaire);
						}
						Impresion(1);
						groupboxBorrar->Visible = false;
						btnHecho->Enabled = false;
						btnEditar->Enabled = true;
						btnBorrardigito->Enabled = true;
					}
				}
				else
				{
					MessageBox::Show("Ingrese números mayores o iguales a 0");
				}
			}
		}
		catch (...)
		{
			MessageBox::Show("Ingrese solamente números");
		}
	}
}
//Finaliza Boton Hecho Precio1
//Inicia boton borrar digito
private: System::Void btnBorrardigito_Click(System::Object^  sender, System::EventArgs^  e) {
	//Realiza la acciones necesarias para permiitr que se borre un solo digito
	groupboxBorrar->Visible = true;
	btnBorrardigito->Enabled = false;
	btnEditar->Enabled = false;
	btnHecho->Enabled = true;
	//Cambiar el estado de Edicion permite que al presionar el boton hecho se realice la accion de eliminar un digito
	Edicion = false;
}
		 //Finaliza boton borrar digito
		 //Inicia Boton Editar Precio 1
private: System::Void btnEditar_Click(System::Object^  sender, System::EventArgs^  e) {
	//Procedimiento para eliminar todo el número del precio
	do
	{
		//Guarda el primer valor de la lista
		Placa DatoAlaire = Principal->EliminarCabeza();
		int cant = 0;
		bool Apruebo = false;
		Placa* Delete = Caja1->Head;

		do
		{
			if (Delete->Valor == DatoAlaire.Valor)
			{
				Apruebo = true;
			}
			else
			{
				Delete = Delete->Siguiente;
			}
		} while (Apruebo == false && Delete != nullptr);
		//Valida si ya se encuentra en la pila
		if (Apruebo == false)
		{
			Caja1->Apilar(DatoAlaire);
		}
		//Si ya se encuentra en la pila, se agrega a a la cola
		else
		{
			Caja2->Agregar_Cola(DatoAlaire);
		}


	} while (Principal->Cabeza!=nullptr);
	Impresion(1);
	Edicion = true;
	btnEditar->Enabled = false;
	btnBorrardigito->Enabled = false;
	btnHecho->Enabled = true;
	txtboxObtenerPrecio1->Enabled = true;
}
		 //Finaliza Boton Editar Precio 1
//Boton para agregar otro precio
private: System::Void btnOtroPrecio1_Click(System::Object^  sender, System::EventArgs^  e) {
	groupPrecio2->Visible = true;
}

//Finaliza Bloque de instrucciones para Precio 1.

/*-------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------*/

//Inicia Bloque de instrucciones para Precio 2.

		 //Inicia Boton Hecho Precio 2
private: System::Void btnHechoPrecio2_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		int Verificacion = Convert::ToInt32(txtboxObtenerPrecio2->Text);
		if (Verificacion<0 || Verificacion>9999)
		{
			MessageBox::Show("Ingrese Numeros Mayores a 0 y menores a 100.00");
			txtboxObtenerPrecio2->Clear();
			txtboxObtenerPrecio2->Focus();
		}
		else
		{
			btnMostrarPrecio2->Enabled = true;
			btnHechoPrecio2->Enabled = false;
			txtboxObtenerPrecio2->Enabled = false;
		}
	}
	catch (...)
	{
		MessageBox::Show("Ingrese solamente números");
		txtboxObtenerPrecio2->Clear();
		txtboxObtenerPrecio2->Focus();
	}
}
		 //Finaliza Boton Hecho Precio 2
		 //Inicia Boton Editar Precio 2
private: System::Void btnEditarPrecio2_Click(System::Object^  sender, System::EventArgs^  e) {
	do
	{
		Placa DatoAlaire = Secundaria->EliminarCabeza();
		int cant = 0;
		bool Apruebo = false;
		Placa* Delete = Caja1->Head;
		do
		{
			if (Delete->Valor == DatoAlaire.Valor)
			{
				Apruebo = true;
			}
			else
			{
				Delete = Delete->Siguiente;
			}
		} while (Apruebo == false && Delete != nullptr);
		if (Apruebo == false)
		{
			Caja1->Apilar(DatoAlaire);
		}
		else
		{
			Caja2->Agregar_Cola(DatoAlaire);
		}


	} while (Secundaria->Cabeza != nullptr);
	Impresion(2);
	btnEditarPrecio2->Enabled = false;
	btnHechoPrecio2->Enabled = true;
	txtboxObtenerPrecio2->Enabled = true;
}
		 //Finaliza Boton Editar Precio 2
		 //Inicia Boton Mostrar Precio 2
private: System::Void btnMostrarPrecio2_Click(System::Object^  sender, System::EventArgs^  e) {
	Secundaria = new Lista();
	String^Precio2 = "";
	Precio2 = txtboxObtenerPrecio2->Text;

	for (int i = 0; i<Precio2->Length; i++)
	{
		AuxPila = nullptr;
		AuxCola = nullptr;
		int Valor = 0;
		switch (Precio2[i])
		{
		case 48:
			Valor = 0;
			break;
		case 49:
			Valor = 1;
			break;
		case 50:
			Valor = 2;
			break;
		case 51:
			Valor = 3;
			break;
		case 52:
			Valor = 4;
			break;
		case 53:
			Valor = 5;
			break;
		case 54:
			Valor = 6;
			break;
		case 55:
			Valor = 7;
			break;
		case 56:
			Valor = 8;
			break;
		case 57:
			Valor = 9;
			break;
		}
		Encontrar_numero(Valor, Secundaria);
	}

	btnMostrarPrecio2->Enabled = false;
	btnEditarPrecio2->Enabled = true;
	Impresion(2);
}
		 //Finaliza Boton Mostrar Precio 2
		 //Inicia Boton Agregar otro numero
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	groupboxPrecio3->Visible = true;
}
		 //Finaliza Boton Agregar otro numero

		 //Finaliza Bloque de instrucciones para Precio 2.

/*-------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------*/


		 //Inicia Bloque de Instrucciones Precio 3
		 //Inicia Boton Editar Precio 3
private: System::Void btnEditarPrecio3_Click(System::Object^  sender, System::EventArgs^  e) {
	do
	{
		Placa DatoAlaire = Terciaria->EliminarCabeza();
		int cant = 0;
		bool Apruebo = false;
		Placa* Delete = Caja1->Head;
		do
		{
			if (Delete->Valor == DatoAlaire.Valor)
			{
				Apruebo = true;
			}
			else
			{
				Delete = Delete->Siguiente;
			}
		} while (Apruebo == false && Delete != nullptr);
		if (Apruebo == false)
		{
			Caja1->Apilar(DatoAlaire);
		}
		else
		{
			Caja2->Agregar_Cola(DatoAlaire);
		}


	} while (Terciaria->Cabeza != nullptr);
	Impresion(3);
	btnEditarPrecio3->Enabled = false;
	btnHechoPrecio3->Enabled = true;
	txtboxObtenerPrecio3->Enabled = true;
}
		 //Finaliza Boton Editar Precio 3
		 //Inicia Boton Hecho Precio 3
private: System::Void btnHechoPrecio3_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		int Verificacion = Convert::ToInt32(txtboxObtenerPrecio3->Text);
		if (Verificacion<0 || Verificacion>9999)
		{
			MessageBox::Show("Ingrese Numeros Mayores a 0 y menores a 100.00");
			txtboxObtenerPrecio3->Clear();
			txtboxObtenerPrecio3->Focus();
		}
		else
		{
			btnMostrarPrecio3->Enabled = true;
			btnHechoPrecio3->Enabled = false;
			txtboxObtenerPrecio3->Enabled = false;
		}
	}
	catch (...)
	{
		MessageBox::Show("Ingrese solamente números");
		txtboxObtenerPrecio3->Clear();
		txtboxObtenerPrecio3->Focus();
	}
}
		 //Finaliza Boton Hecho Precio 3
		 //Inicia Boton Mostrar Precio 3
private: System::Void btnMostrarPrecio3_Click(System::Object^  sender, System::EventArgs^  e) {
	Terciaria = new Lista();
	String^Precio3 = "";
	Precio3 = txtboxObtenerPrecio3->Text;
	for (int i = 0; i<Precio3->Length; i++)
	{
		AuxPila = nullptr;
		AuxCola = nullptr;
		int Valor = 0;
		switch (Precio3[i])
		{
		case 48:
			Valor = 0;
			break;
		case 49:
			Valor = 1;
			break;
		case 50:
			Valor = 2;
			break;
		case 51:
			Valor = 3;
			break;
		case 52:
			Valor = 4;
			break;
		case 53:
			Valor = 5;
			break;
		case 54:
			Valor = 6;
			break;
		case 55:
			Valor = 7;
			break;
		case 56:
			Valor = 8;
			break;
		case 57:
			Valor = 9;
			break;
		}
		Encontrar_numero(Valor, Terciaria);
	}
	btnMostrarPrecio3->Enabled = false;
	btnEditarPrecio3->Enabled = true;
	Impresion(3);
}
		 //Finaliza Boton Mostrar Precio 3




/*-------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------*/

		 //Inicia Sección de metodos

//Metodo para encontrar el número en la pila o en la cola
void Encontrar_numero(int Numero, Lista* Pantalla)
{
//Crea una pila y cola auxiliar para guardar valores
	AuxPila = new Pila();
	AuxCola = new Cola();
	//Valida si el número se encuentra en el top de la pila (caja1)
	if (Numero == Caja1->Head->Valor && Pantalla->Elementos<4)
	{
		Pantalla->Agregar(Caja1->Desapilar());
	}
	//Si no se prosigue a desapilara la pila hasta encontrar el valor
	else
	{
		//Desapila la Pila (caja1) y la guarda en la pila auxiliar
		do
		{
			AuxPila->Apilar(Caja1->Desapilar());
		} while ((Numero != Caja1->Head->Valor) && (Caja1->Head->Siguiente != nullptr));
		//Valida si el top de la pila (caja1) es el número que se busca y si el siguiente posee un puntero nulo
		if (Numero == Caja1->Head->Valor && Caja1->Head->Siguiente == nullptr && Pantalla->Elementos<4)
		{
			Pantalla->Agregar(Caja1->Desapilar());
			do
			{
				Caja1->Apilar(AuxPila->Desapilar());
			} while (AuxPila->Head != nullptr);
		}
	//Valida si el último elemento posee un puntero nulo, en este punto el número no se encuentra en la pila 
		if (Caja1->Head->Siguiente == nullptr)
		{
			//Se apila de nuevo a la pila (caja1), para proseguir a buscar a la cola
			do
			{
				Caja1->Apilar(AuxPila->Desapilar());
			} while (AuxPila->Head != nullptr);
			
			//Cola (caja2), Valida si el primer elemento de la cola es el número que se busca
			if (Caja2->Inicio->Valor == Numero&& Pantalla->Elementos<4)
			{
				Pantalla->Agregar(Caja2->Retirar_Head());
			}
			//Si el número que se busca no es el primero de la cola, se prosigue a sacar los número y
			//guardarlos en la cola auxiliar, hasta encontrar el valor buscado o hasta que el puntero siguiente sea nulo
			else
			{
				//Saca el inicio de la cola (caja2)
				do
				{
					AuxCola->Agregar_Cola(Caja2->Retirar_Head());
				} while ((Numero != Caja2->Inicio->Valor) && (Caja2->Inicio->Siguiente != nullptr));
				 //Valida si el primer elmento de la cola (caja2) es el número a busca y el puntero siguiente es nulo
				if (Numero == Caja2->Inicio->Valor && Caja2->Inicio->Siguiente == nullptr && Pantalla->Elementos<4)
				{
					Pantalla->Agregar(Caja2->Retirar_Head());
					do
					{
						Caja2->Agregar_Cola(AuxCola->Retirar_Head());
					} while (AuxCola->Inicio != nullptr);
				}
				//Valida si el siguiente valor es nulo y no es el número que se desea buscar
				if (Caja2->Inicio->Siguiente == nullptr)
				{
				//Se guarda de nuevo los valores en la cola (caja2)
					do
					{
						Caja2->Agregar_Cola(AuxCola->Retirar_Head());
					} while (AuxCola->Inicio != nullptr);
					
					//Se suma uno al número que se esta buscando, en caso de que ya no exista  la cola o en la pila
					if (Numero == 9)
					{
						Numero = 0;
					}
					else
					{
						Numero++;
					}
					//Se llama al metodo, enviando como nuevo parametro de número, el número obtenido más uno.
					//Valida que los elementos no sean mayores a 4 elementos dentro de la pila
					if (Pantalla->Elementos<4)
					{
						Encontrar_numero(Numero, Pantalla);
					}


				}
				//Valida si el número es igual al valor inicio de la cola (caja2)
				if (Numero == Caja2->Inicio->Valor&& Pantalla->Elementos<4)
				{
					Pantalla->Agregar(Caja2->Retirar_Head());
					do
					{
						Caja2->Agregar_Cola(AuxCola->Retirar_Head());
					} while (AuxCola->Inicio != nullptr);
				}
			}

		}
		//Valida si el número es igual al valor top de la pila (caja1)
		if (Numero == Caja1->Head->Valor && Pantalla->Elementos<4)
		{
			Pantalla->Agregar(Caja1->Desapilar());
			do
			{
				Caja1->Apilar(AuxPila->Desapilar());
			} while (AuxPila->Head != nullptr);
		}
	}
}
//Finaliza Metodo para encontrar el número en la pila o en la cola

//Metodo para impresion en pantalla
		 void Impresion(int Lista)
		 {
			 int PointDeci = 0;
			 String ^ Paquete = "";
			//Guarda el puntero del primer valor de la pila (caja 1)
			 Placa * Impresion = Caja1->Head;
			 do
			 {
				 Paquete += Convert::ToString(Impresion->Valor) + Environment::NewLine;
				 Impresion = Impresion->Siguiente;
			 } while (Impresion != nullptr);
			 txtboxMostrarPila->Text = Paquete;
			 Paquete = "";
			 //Guarda el puntero del primer valor de la cola (caja 2)
			 Impresion = Caja2->Inicio;
			 do
			 {
				 Paquete += Convert::ToString(Impresion->Valor) + Environment::NewLine;
				 Impresion = Impresion->Siguiente;
			 } while (Impresion != nullptr);
			 txtboxMostrarCola->Text = Paquete;
			//Valida que lista se desea imprimir
			 if (Lista == 0)
			 {
				 PointDeci = 0;
			 }
			 if (Lista == 1)
			 {
				 //Guarda el puntero del primer valor de la lista 1(principal)
			
				 int Contador=0;
				 Impresion = Principal->Cabeza;
				 Paquete = "";
				 if (Impresion != nullptr)
				 {
					 do
					 {
						 Paquete += Convert::ToString(Impresion->Valor);
						 Contador++;
						 if (PointDeci == 1)
						 {
							 Paquete += ".";
						 }
						 PointDeci++;	 Impresion = Impresion->Siguiente;
					 } while (Impresion != nullptr && Contador<4);
					 txtboxPrecio1->Text = Paquete;
				 }
				 else
				 {
					 txtboxPrecio1->Text = "";
				 }
			 }
			 if (Lista == 2)
			 {
				 //Guarda el puntero del primer valor de la lista (secundaria)
				 Impresion = Secundaria->Cabeza;
				 int contador = 0;
				 Paquete = "";
				 if (Impresion != nullptr)
				 {
					 do
					 {
						 Paquete += Convert::ToString(Impresion->Valor);
						 if (PointDeci == 1)
						 {
							 Paquete += ".";
						 }
						 contador++;
						 PointDeci++;	 Impresion = Impresion->Siguiente;
					 } while (Impresion != nullptr&& contador<4);
					 txtboxShowPrecio2->Text = Paquete;
				 }
				 else
				 {
					 txtboxShowPrecio2->Text = "";
				 }
			 }
			 if (Lista == 3)
			 {
				 //Guarda el puntero del primer valor de la lista 3(terciaria)
				 Impresion = Terciaria->Cabeza;
				 Paquete = "";
				 int contar = 0;
				 if (Impresion != nullptr)
				 {
					 do
					 {
						 Paquete += Convert::ToString(Impresion->Valor);
						 if (PointDeci == 1)
						 {
							 Paquete += ".";
						 }
						 contar++;
						 PointDeci++;	 Impresion = Impresion->Siguiente;
					 } while (Impresion != nullptr && contar<4);
					 txtboxShowPrecio3->Text = Paquete;
				 }
				 else
				 {
					 txtboxShowPrecio3->Text = "";
				 }
			 }
		}
		 //Finaliza Metodo para impresion en pantalla

		 //Inicia Metodo de ordenamiento de la pila
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Placa Vector[10];
		int Cantidad = 0;
		for (int i = 0; i < 10; i++)
		{
			if (Caja1->Head != nullptr)
			{
				Vector[i] = Caja1->Desapilar();
				Cantidad++;
			}
		}

		int i, j;
		for (i = 0; i < Cantidad-1; i++)
		{
			for (j = 0; j < Cantidad - i-1; j++)
			{
				if (Vector[j].Valor > Vector[j+1].Valor)
				{
					int aux = Vector[j].Valor;
					Vector[j].Valor = Vector[j+1].Valor;
					Vector[j+1].Valor = aux;

				}
			}
		}
		for (int Elem = 0; Elem < Cantidad; Elem++)
		{
			Caja1->Apilar(Vector[Elem]);
		}
		
		//Impresion
		String ^ Paquete = "";
		Placa * Impresion = Caja1->Head;
		do
		{
			Paquete += Convert::ToString(Impresion->Valor) + Environment::NewLine;
			Impresion = Impresion->Siguiente;
		} while (Impresion != nullptr);
		txtboxMostrarPila->Text = Paquete;
		Paquete = "";
	}
		 //Finaliza Metodo de ordenamiento de la pila

		 //Inicia Metodo de ordenamiento de la cola
private: System::Void btnOrdenarCola_Click(System::Object^  sender, System::EventArgs^  e) {
	Placa Vector[10];
	int Cantidad = 0;
	for (int i = 0; i < 10; i++)
	{
		if (Caja2->Inicio!= nullptr)
		{
			Vector[i] = Caja2->Retirar_Head();
			Cantidad++;
		}
	}

	int i, j;
	for (i = 0; i < Cantidad - 1; i++)
	{
		for (j = 0; j < Cantidad - i - 1; j++)
		{
			if (Vector[j].Valor > Vector[j + 1].Valor)
			{
				int aux = Vector[j].Valor;
				Vector[j].Valor = Vector[j + 1].Valor;
				Vector[j + 1].Valor = aux;

			}
		}
	}
	for (int Elem = 0; Elem < Cantidad; Elem++)
	{
		Caja2->Agregar_Cola(Vector[Elem]);
	}

	//Impresion
	String ^ Paquete = "";
	Placa * Impresion = Caja2->Inicio;
	do
	{
		Paquete += Convert::ToString(Impresion->Valor) + Environment::NewLine;
		Impresion = Impresion->Siguiente;
	} while (Impresion != nullptr);
	txtboxMostrarCola->Text = Paquete;
	Paquete = "";
}
		 //Finaliza Metodo de ordenamiento de la cola


		 private: System::Void txtboxPrecio1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}

};
	

}
