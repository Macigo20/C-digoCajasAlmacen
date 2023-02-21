////////////////////////
/// Manuel Cid Gómez ///
///    08/02/2023    ///
/// Control de cajas ///
///  en un almacén   ///
////////////////////////

#pragma once

namespace Almacen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Vent_Sal
	/// </summary>
	public ref class Vent_Sal : public System::Windows::Forms::Form
	{
	public:
		Vent_Sal(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Vent_Sal()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::TextBox^ texto_caj_sal;
	private: System::Windows::Forms::Label^ texto4;
	private: System::Windows::Forms::Label^ texto5;
	private: System::Windows::Forms::Button^ btn_borr_sal;
	private: System::Windows::Forms::Button^ btn_acp_sal;
	private: System::Windows::Forms::Label^ caj_total_sal;

	private: System::Windows::Forms::Label^ texto6;
	private: System::Windows::Forms::TextBox^ texto_caj_alm;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_borr_sal = (gcnew System::Windows::Forms::Button());
			this->btn_acp_sal = (gcnew System::Windows::Forms::Button());
			this->texto4 = (gcnew System::Windows::Forms::Label());
			this->texto5 = (gcnew System::Windows::Forms::Label());
			this->texto_caj_sal = (gcnew System::Windows::Forms::TextBox());
			this->caj_total_sal = (gcnew System::Windows::Forms::Label());
			this->texto6 = (gcnew System::Windows::Forms::Label());
			this->texto_caj_alm = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_borr_sal
			// 
			this->btn_borr_sal->BackColor = System::Drawing::Color::Red;
			this->btn_borr_sal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_borr_sal->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_borr_sal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_borr_sal->Location = System::Drawing::Point(541, 292);
			this->btn_borr_sal->Name = L"btn_borr_sal";
			this->btn_borr_sal->Size = System::Drawing::Size(200, 75);
			this->btn_borr_sal->TabIndex = 9;
			this->btn_borr_sal->Text = L"Borrar";
			this->btn_borr_sal->UseVisualStyleBackColor = false;
			this->btn_borr_sal->Click += gcnew System::EventHandler(this, &Vent_Sal::btn_borr_sal_Click);
			// 
			// btn_acp_sal
			// 
			this->btn_acp_sal->BackColor = System::Drawing::Color::Lime;
			this->btn_acp_sal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_acp_sal->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_acp_sal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_acp_sal->Location = System::Drawing::Point(140, 292);
			this->btn_acp_sal->Name = L"btn_acp_sal";
			this->btn_acp_sal->Size = System::Drawing::Size(200, 75);
			this->btn_acp_sal->TabIndex = 8;
			this->btn_acp_sal->Text = L"Aceptar";
			this->btn_acp_sal->UseVisualStyleBackColor = false;
			this->btn_acp_sal->Click += gcnew System::EventHandler(this, &Vent_Sal::btn_acp_sal_Click);
			// 
			// texto4
			// 
			this->texto4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->texto4->AutoSize = true;
			this->texto4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto4->Location = System::Drawing::Point(62, 155);
			this->texto4->Name = L"texto4";
			this->texto4->Size = System::Drawing::Size(582, 33);
			this->texto4->TabIndex = 7;
			this->texto4->Text = L"Número de cajas que salen del almacen:";
			// 
			// texto5
			// 
			this->texto5->AutoSize = true;
			this->texto5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto5->Location = System::Drawing::Point(62, 501);
			this->texto5->Name = L"texto5";
			this->texto5->Size = System::Drawing::Size(464, 33);
			this->texto5->TabIndex = 6;
			this->texto5->Text = L"Número de cajas en el almacen:";
			// 
			// texto_caj_sal
			// 
			this->texto_caj_sal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->texto_caj_sal->Location = System::Drawing::Point(738, 159);
			this->texto_caj_sal->Name = L"texto_caj_sal";
			this->texto_caj_sal->Size = System::Drawing::Size(100, 31);
			this->texto_caj_sal->TabIndex = 5;
			this->texto_caj_sal->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Vent_Sal::texto_caj_sal_Validating);
			// 
			// caj_total_sal
			// 
			this->caj_total_sal->AutoSize = true;
			this->caj_total_sal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->caj_total_sal->Location = System::Drawing::Point(581, 501);
			this->caj_total_sal->Name = L"caj_total_sal";
			this->caj_total_sal->Size = System::Drawing::Size(0, 33);
			this->caj_total_sal->TabIndex = 10;
			// 
			// texto6
			// 
			this->texto6->AutoSize = true;
			this->texto6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto6->Location = System::Drawing::Point(62, 80);
			this->texto6->Name = L"texto6";
			this->texto6->Size = System::Drawing::Size(540, 33);
			this->texto6->TabIndex = 13;
			this->texto6->Text = L"Número de cajas totales del almacen:";
			// 
			// texto_caj_alm
			// 
			this->texto_caj_alm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->texto_caj_alm->Location = System::Drawing::Point(738, 84);
			this->texto_caj_alm->Name = L"texto_caj_alm";
			this->texto_caj_alm->Size = System::Drawing::Size(100, 31);
			this->texto_caj_alm->TabIndex = 12;
			this->texto_caj_alm->UseWaitCursor = true;
			this->texto_caj_alm->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Vent_Sal::texto_caj_alm_Validating);
			// 
			// Vent_Sal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(900, 650);
			this->Controls->Add(this->texto6);
			this->Controls->Add(this->texto_caj_alm);
			this->Controls->Add(this->caj_total_sal);
			this->Controls->Add(this->btn_borr_sal);
			this->Controls->Add(this->btn_acp_sal);
			this->Controls->Add(this->texto4);
			this->Controls->Add(this->texto5);
			this->Controls->Add(this->texto_caj_sal);
			this->Name = L"Vent_Sal";
			this->Text = L"Vent_Sal";
			this->Load += gcnew System::EventHandler(this, &Vent_Sal::Vent_Sal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Vent_Sal_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	
	private: System::Void btn_acp_sal_Click(System::Object^ sender, System::EventArgs^ e) {

		int numero1 = System::Convert::ToInt32(texto_caj_alm->Text);
		int numero2 = System::Convert::ToInt32(texto_caj_sal->Text);

		// Realizar la resta
		int resta = numero1 - numero2;

		// Mostrar el resultado
		this->caj_total_sal->Text = "Cajas totales " + resta;

	}

	private: System::Void btn_borr_sal_Click(System::Object^ sender, System::EventArgs^ e) {

		// Borrar el texto del cuadro de texto
		texto_caj_alm->Text = "";
		texto_caj_sal->Text = "";
	}	

	private: System::Void texto_caj_alm_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

		int numero_entero;
		if (!Int32::TryParse(texto_caj_alm->Text, numero_entero)) {
			MessageBox::Show("Debe ingresar un número entero.");
			e->Cancel = true;
		}
	}

	private: System::Void texto_caj_sal_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

		int numero_entero2;
		if (!Int32::TryParse(texto_caj_sal->Text, numero_entero2)) {
			MessageBox::Show("Debe ingresar un número entero.");
			e->Cancel = true;
		}
	}
};
}
