#pragma once

#include "fact.h"

namespace Winform1 {

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
	private: System::Windows::Forms::Label^ lblInput;
	private: System::Windows::Forms::Label^ lblOutput;
	private: System::Windows::Forms::Button^ btnCalculate;
	protected:

	protected:

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txtInput;
	private: System::Windows::Forms::TextBox^ txtOutput;
	private: System::Windows::Forms::ErrorProvider^ errPr;

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
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->errPr = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPr))->BeginInit();
			this->SuspendLayout();
			// 
			// lblInput
			// 
			this->lblInput->AutoSize = true;
			this->lblInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInput->Location = System::Drawing::Point(12, 74);
			this->lblInput->Name = L"lblInput";
			this->lblInput->Size = System::Drawing::Size(276, 24);
			this->lblInput->TabIndex = 0;
			this->lblInput->Text = L"������� ����� ����� ��� N =";
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOutput->Location = System::Drawing::Point(12, 121);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(180, 24);
			this->lblOutput->TabIndex = 1;
			this->lblOutput->Text = L"��������� ��� N! =";
			// 
			// btnCalculate
			// 
			this->btnCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCalculate->Location = System::Drawing::Point(194, 193);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(132, 38);
			this->btnCalculate->TabIndex = 2;
			this->btnCalculate->Text = L"���������";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// txtInput
			// 
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInput->Location = System::Drawing::Point(294, 71);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(205, 29);
			this->txtInput->TabIndex = 3;
			// 
			// txtOutput
			// 
			this->txtOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtOutput->Location = System::Drawing::Point(294, 116);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(205, 29);
			this->txtOutput->TabIndex = 4;
			// 
			// errPr
			// 
			this->errPr->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 292);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->lblInput);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"���������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ClearAll() { // ������� �����
		this->txtOutput->Text = "������ �����";
		errPr->SetError(txtInput, String::Empty);
	}
	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputNumber;
		// ��������� ������ �� TextBox � �����
		bool result = Int64::TryParse(this->txtInput->Text, InputNumber);
		// ����� �� �����
		if (!result) {
			errPr->SetError(txtInput, "������� �� ����� �����");
		}
		else {
			if (InputNumber >= 20) {
				errPr->SetError(txtInput, "������� ������� �����");
			}
			else{
				// ���������
				long long OutputNumber = fact(InputNumber);
				// ������������� �����
				if (OutputNumber == -1) {
					errPr->SetError(txtInput, "������� ������������� �����");
				}
				// ��� ���������
				else {
					// ���������� � ���� ������
					this->txtOutput->Text = System::Convert::ToString(OutputNumber);
				}
			}
		}
	}
};
}
