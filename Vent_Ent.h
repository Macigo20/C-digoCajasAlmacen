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
	/// Resumen de Vent_Ent
	/// </summary>
	public ref class Vent_Ent : public System::Windows::Forms::Form
	{
	public:
		Vent_Ent(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Vent_Ent()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ texto2;
	private: System::Windows::Forms::Label^ texto3;
	private: System::Windows::Forms::Button^ btn_acp_ent;
	private: System::Windows::Forms::Button^ btn_borr_ent;
	private: System::Windows::Forms::Label^ caj_total_ent;
	private: System::Windows::Forms::Label^ texto7;

	private: System::Windows::Forms::TextBox^ texto_caj_alm;
	private: System::Windows::Forms::TextBox^ texto_caj_ent;





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
			this->texto2 = (gcnew System::Windows::Forms::Label());
			this->texto3 = (gcnew System::Windows::Forms::Label());
			this->btn_acp_ent = (gcnew System::Windows::Forms::Button());
			this->btn_borr_ent = (gcnew System::Windows::Forms::Button());
			this->caj_total_ent = (gcnew System::Windows::Forms::Label());
			this->texto7 = (gcnew System::Windows::Forms::Label());
			this->texto_caj_alm = (gcnew System::Windows::Forms::TextBox());
			this->texto_caj_ent = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// texto2
			// 
			this->texto2->AutoSize = true;
			this->texto2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto2->Location = System::Drawing::Point(50, 507);
			this->texto2->Name = L"texto2";
			this->texto2->Size = System::Drawing::Size(464, 33);
			this->texto2->TabIndex = 1;
			this->texto2->Text = L"Número de cajas en el almacen:";
			this->texto2->Click += gcnew System::EventHandler(this, &Vent_Ent::texto2_Click);
			// 
			// texto3
			// 
			this->texto3->AutoSize = true;
			this->texto3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto3->Location = System::Drawing::Point(50, 161);
			this->texto3->Name = L"texto3";
			this->texto3->Size = System::Drawing::Size(621, 33);
			this->texto3->TabIndex = 2;
			this->texto3->Text = L"Número de cajas que entran en el almacen:";
			this->texto3->Click += gcnew System::EventHandler(this, &Vent_Ent::texto3_Click);
			// 
			// btn_acp_ent
			// 
			this->btn_acp_ent->BackColor = System::Drawing::Color::Lime;
			this->btn_acp_ent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_acp_ent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_acp_ent->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_acp_ent->Location = System::Drawing::Point(128, 291);
			this->btn_acp_ent->Name = L"btn_acp_ent";
			this->btn_acp_ent->Size = System::Drawing::Size(200, 75);
			this->btn_acp_ent->TabIndex = 3;
			this->btn_acp_ent->Text = L"Aceptar";
			this->btn_acp_ent->UseVisualStyleBackColor = false;
			this->btn_acp_ent->Click += gcnew System::EventHandler(this, &Vent_Ent::btn_acp_ent_Click);
			// 
			// btn_borr_ent
			// 
			this->btn_borr_ent->BackColor = System::Drawing::Color::Red;
			this->btn_borr_ent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_borr_ent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_borr_ent->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_borr_ent->Location = System::Drawing::Point(529, 291);
			this->btn_borr_ent->Name = L"btn_borr_ent";
			this->btn_borr_ent->Size = System::Drawing::Size(200, 75);
			this->btn_borr_ent->TabIndex = 4;
			this->btn_borr_ent->Text = L"Borrar";
			this->btn_borr_ent->UseVisualStyleBackColor = false;
			this->btn_borr_ent->Click += gcnew System::EventHandler(this, &Vent_Ent::btn_borr_ent_Click_1);
			// 
			// caj_total_ent
			// 
			this->caj_total_ent->AutoSize = true;
			this->caj_total_ent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->caj_total_ent->Location = System::Drawing::Point(563, 507);
			this->caj_total_ent->Name = L"caj_total_ent";
			this->caj_total_ent->Size = System::Drawing::Size(0, 33);
			this->caj_total_ent->TabIndex = 5;
			// 
			// texto7
			// 
			this->texto7->AutoSize = true;
			this->texto7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto7->Location = System::Drawing::Point(50, 89);
			this->texto7->Name = L"texto7";
			this->texto7->Size = System::Drawing::Size(540, 33);
			this->texto7->TabIndex = 11;
			this->texto7->Text = L"Número de cajas totales del almacen:";
			// 
			// texto_caj_alm
			// 
			this->texto_caj_alm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->texto_caj_alm->Location = System::Drawing::Point(726, 93);
			this->texto_caj_alm->Name = L"texto_caj_alm";
			this->texto_caj_alm->Size = System::Drawing::Size(100, 31);
			this->texto_caj_alm->TabIndex = 10;
			this->texto_caj_alm->UseWaitCursor = true;
			this->texto_caj_alm->TextChanged += gcnew System::EventHandler(this, &Vent_Ent::texto_caj_alm_TextChanged);
			this->texto_caj_alm->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Vent_Ent::texto_caj_alm_Validating);
			// 
			// texto_caj_ent
			// 
			this->texto_caj_ent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->texto_caj_ent->Location = System::Drawing::Point(726, 161);
			this->texto_caj_ent->Name = L"texto_caj_ent";
			this->texto_caj_ent->Size = System::Drawing::Size(100, 31);
			this->texto_caj_ent->TabIndex = 12;
			this->texto_caj_ent->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Vent_Ent::texto_caj_ent_Validating_1);
			// 
			// Vent_Ent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(900, 650);
			this->Controls->Add(this->texto_caj_ent);
			this->Controls->Add(this->texto7);
			this->Controls->Add(this->texto_caj_alm);
			this->Controls->Add(this->caj_total_ent);
			this->Controls->Add(this->btn_borr_ent);
			this->Controls->Add(this->btn_acp_ent);
			this->Controls->Add(this->texto3);
			this->Controls->Add(this->texto2);
			this->Name = L"Vent_Ent";
			this->Text = L"Vent_Ent";
			this->Load += gcnew System::EventHandler(this, &Vent_Ent::Vent_Ent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Vent_Ent_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void texto3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btn_acp_ent_Click(System::Object^ sender, System::EventArgs^ e) {

		int numero1 = System::Convert::ToInt32(texto_caj_alm->Text);
		int numero2 = System::Convert::ToInt32(texto_caj_ent->Text);

		// Realizar la suma
		int suma = numero1 + numero2;

		// Mostrar el resultado
		this->caj_total_ent->Text = "Cajas totales " + suma;

	}

	private: System::Void texto2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void texto_caj_alm_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		
	}
	private: System::Void texto_caj_ent_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void texto_caj_alm_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		
		int numero_entero;
		if (!Int32::TryParse(texto_caj_alm->Text, numero_entero)) {
			MessageBox::Show("Debe ingresar un número entero.");
			e->Cancel = true;
		}

	}
	
	private: System::Void texto_caj_ent_Validating_1(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

		int numero_entero2;
		if (!Int32::TryParse(texto_caj_ent->Text, numero_entero2)) {
			MessageBox::Show("Debe ingresar un número entero.");
			e->Cancel = true;
		}
	}

	private: System::Void btn_borr_ent_Click_1(System::Object^ sender, System::EventArgs^ e) {

		// Borrar el texto del cuadro de texto
		texto_caj_alm->Text = "";
		texto_caj_ent->Text = "";
	
	}
};
}
