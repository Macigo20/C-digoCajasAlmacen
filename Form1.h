////////////////////////
/// Manuel Cid Gómez ///
///    08/02/2023    ///
/// Control de cajas ///
///  en un almacén   ///
////////////////////////

#pragma once
#include "Vent_Ent.h"
#include "Vent_Sal.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
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
	private: System::Windows::Forms::Button^ btn_ent;
	private: System::Windows::Forms::Button^ btn_sal;
	private: System::Windows::Forms::Label^ texto1;





	protected:

	protected:

	private:
	
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void){
			this->btn_ent = (gcnew System::Windows::Forms::Button());
			this->btn_sal = (gcnew System::Windows::Forms::Button());
			this->texto1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();

			// 
			// btn_ent
			// 
			this->btn_ent->BackColor = System::Drawing::Color::Lime;
			this->btn_ent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ent->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_ent->Location = System::Drawing::Point(134, 386);
			this->btn_ent->Name = L"btn_ent";
			this->btn_ent->Size = System::Drawing::Size(200, 75);
			this->btn_ent->TabIndex = 0;
			this->btn_ent->Text = L"Entran";
			this->btn_ent->UseVisualStyleBackColor = false;
			this->btn_ent->Click += gcnew System::EventHandler(this, &Form1::btn_ent_Click);

			// 
			// btn_sal
			// 
			this->btn_sal->BackColor = System::Drawing::Color::Yellow;
			this->btn_sal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_sal->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_sal->Location = System::Drawing::Point(581, 386);
			this->btn_sal->Name = L"btn_sal";
			this->btn_sal->Size = System::Drawing::Size(200, 75);
			this->btn_sal->TabIndex = 1;
			this->btn_sal->Text = L"Salen";
			this->btn_sal->UseVisualStyleBackColor = false;
			this->btn_sal->Click += gcnew System::EventHandler(this, &Form1::btn_sal_Click);

			// 
			// texto1
			// 
			this->texto1->AutoSize = true;
			this->texto1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto1->Location = System::Drawing::Point(125, 205);
			this->texto1->Name = L"texto1";
			this->texto1->Size = System::Drawing::Size(656, 50);
			this->texto1->TabIndex = 3;
			this->texto1->Text = L"¿Entran o salen cajas del almacén\?";
			this->texto1->Click += gcnew System::EventHandler(this, &Form1::Texto1_Click);

			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(900, 650);
			this->Controls->Add(this->texto1);
			this->Controls->Add(this->btn_sal);
			this->Controls->Add(this->btn_ent);
			this->Name = L"Form1";
			this->Text = L"Ventana Principal";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	//
	// btn_ent
	//
	private: System::Void btn_ent_Click(System::Object^ sender, System::EventArgs^ e) {

		Almacen::Vent_Ent^ vent_ent = gcnew Almacen::Vent_Ent();
		
		this->Visible = false;
		vent_ent->ShowDialog();
		this->Visible = true;

	}

	//
	// btn_sal
	//
	private: System::Void btn_sal_Click(System::Object^ sender, System::EventArgs^ e) {

		Almacen::Vent_Sal^ vent_sal = gcnew Almacen::Vent_Sal();

		this->Visible = false;
		vent_sal->ShowDialog();
		this->Visible = true;
	}

	private: System::Void Texto1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
