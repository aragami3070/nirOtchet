#pragma once
#include <cmath>
#include "Solve.h"

namespace Winform2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblFormula1;
	private: System::Windows::Forms::Label^ lblFormula2;
	private: System::Windows::Forms::Label^ lblFormula3;
	protected:


	protected:

	protected:


	private: System::Windows::Forms::Label^ lblInputX;
	private: System::Windows::Forms::Label^ lblInputY;
	private: System::Windows::Forms::ErrorProvider^ errPrX;


	private: System::Windows::Forms::Button^ btnStart;

	private: System::Windows::Forms::TextBox^ txtOut;
	private: System::Windows::Forms::TextBox^ txtInY;
	private: System::Windows::Forms::TextBox^ txtInX;
	private: System::Windows::Forms::ErrorProvider^ errPrY;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lblFormula1 = (gcnew System::Windows::Forms::Label());
			this->lblFormula2 = (gcnew System::Windows::Forms::Label());
			this->lblFormula3 = (gcnew System::Windows::Forms::Label());
			this->lblInputX = (gcnew System::Windows::Forms::Label());
			this->lblInputY = (gcnew System::Windows::Forms::Label());
			this->errPrX = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->txtInX = (gcnew System::Windows::Forms::TextBox());
			this->txtInY = (gcnew System::Windows::Forms::TextBox());
			this->txtOut = (gcnew System::Windows::Forms::TextBox());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->errPrY = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrY))->BeginInit();
			this->SuspendLayout();
			// 
			// lblFormula1
			// 
			this->lblFormula1->AutoSize = true;
			this->lblFormula1->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFormula1->Location = System::Drawing::Point(21, 137);
			this->lblFormula1->Name = L"lblFormula1";
			this->lblFormula1->Size = System::Drawing::Size(116, 22);
			this->lblFormula1->TabIndex = 0;
			this->lblFormula1->Text = L"y^2 * sin(x^2)";
			// 
			// lblFormula2
			// 
			this->lblFormula2->AutoSize = true;
			this->lblFormula2->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFormula2->Location = System::Drawing::Point(12, 150);
			this->lblFormula2->Name = L"lblFormula2";
			this->lblFormula2->Size = System::Drawing::Size(156, 22);
			this->lblFormula2->TabIndex = 1;
			this->lblFormula2->Tag = L"";
			this->lblFormula2->Text = L"---------------------  =";
			// 
			// lblFormula3
			// 
			this->lblFormula3->AutoSize = true;
			this->lblFormula3->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFormula3->Location = System::Drawing::Point(41, 170);
			this->lblFormula3->Name = L"lblFormula3";
			this->lblFormula3->Size = System::Drawing::Size(67, 22);
			this->lblFormula3->TabIndex = 2;
			this->lblFormula3->Text = L"x + y^2";
			// 
			// lblInputX
			// 
			this->lblInputX->AutoSize = true;
			this->lblInputX->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInputX->Location = System::Drawing::Point(21, 14);
			this->lblInputX->Name = L"lblInputX";
			this->lblInputX->Size = System::Drawing::Size(98, 22);
			this->lblInputX->TabIndex = 3;
			this->lblInputX->Text = L"������� X:";
			// 
			// lblInputY
			// 
			this->lblInputY->AutoSize = true;
			this->lblInputY->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInputY->Location = System::Drawing::Point(21, 64);
			this->lblInputY->Name = L"lblInputY";
			this->lblInputY->Size = System::Drawing::Size(98, 22);
			this->lblInputY->TabIndex = 4;
			this->lblInputY->Text = L"������� Y:";
			// 
			// errPrX
			// 
			this->errPrX->ContainerControl = this;
			// 
			// txtInX
			// 
			this->txtInX->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInX->Location = System::Drawing::Point(150, 14);
			this->txtInX->Name = L"txtInX";
			this->txtInX->Size = System::Drawing::Size(290, 29);
			this->txtInX->TabIndex = 5;
			// 
			// txtInY
			// 
			this->txtInY->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInY->Location = System::Drawing::Point(150, 56);
			this->txtInY->Name = L"txtInY";
			this->txtInY->Size = System::Drawing::Size(290, 29);
			this->txtInY->TabIndex = 6;
			// 
			// txtOut
			// 
			this->txtOut->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtOut->Location = System::Drawing::Point(174, 103);
			this->txtOut->Multiline = true;
			this->txtOut->Name = L"txtOut";
			this->txtOut->ReadOnly = true;
			this->txtOut->Size = System::Drawing::Size(266, 116);
			this->txtOut->TabIndex = 7;
			// 
			// btnStart
			// 
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnStart->Location = System::Drawing::Point(150, 233);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(119, 36);
			this->btnStart->TabIndex = 8;
			this->btnStart->Text = L"���������";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// errPrY
			// 
			this->errPrY->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 281);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->txtOut);
			this->Controls->Add(this->txtInY);
			this->Controls->Add(this->txtInX);
			this->Controls->Add(this->lblInputY);
			this->Controls->Add(this->lblInputX);
			this->Controls->Add(this->lblFormula3);
			this->Controls->Add(this->lblFormula1);
			this->Controls->Add(this->lblFormula2);
			this->Name = L"MyForm";
			this->Text = L"������� ����������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrY))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void ClearAll() { // ������� �����
		this->txtOut->Text = "";
		errPrX->SetError(txtInX, String::Empty);
		errPrY->SetError(txtInY, String::Empty);
	}
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputX;
		long long InputY;
		// ��������� ������ �� TextBox � �����
		bool parseX = Int64::TryParse(this->txtInX->Text, InputX);
		bool parseY = Int64::TryParse(this->txtInY->Text, InputY);
		// ����� �� �����
		if (!parseX) {
			errPrX->SetError(txtInX, "������� �� ����� �����");
			if (!parseY) {
				errPrY->SetError(txtInY, "������� �� ����� �����");
			}
		}
		else if (!parseY) {
			errPrY->SetError(txtInY, "������� �� ����� �����");
		}
		// �������� �� ������� �� ����
		else {
			if ((InputX == 0 && InputY == 0) || 
				(InputX == -4 && abs(InputY) == 2)) {
				errPrX->SetError(txtInX, "������� �� ����");
				errPrY->SetError(txtInY, "������� �� ����");
			}
			else{
				// ��� ���������
				// ���������
				double resOutput = solve(InputX, InputY);
				// ���������� � ���� ������
				this->txtOut->Text = System::Convert::ToString(resOutput);
			}
		}
	}
};
}
