#pragma once
#include "Recursion.h"

namespace Winform3 {

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
	private: System::Windows::Forms::Button^ btnStart;
	protected:

	private: System::Windows::Forms::Label^ lblX;
	private: System::Windows::Forms::Label^ lblN;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::TextBox^ txtInX;
	private: System::Windows::Forms::TextBox^ txtInN;
	private: System::Windows::Forms::TextBox^ txtOut;
	private: System::Windows::Forms::ErrorProvider^ errPrX;
	private: System::Windows::Forms::ErrorProvider^ errPrN;


	private: System::ComponentModel::IContainer^ components;
	protected:







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
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->lblX = (gcnew System::Windows::Forms::Label());
			this->lblN = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txtInX = (gcnew System::Windows::Forms::TextBox());
			this->txtInN = (gcnew System::Windows::Forms::TextBox());
			this->txtOut = (gcnew System::Windows::Forms::TextBox());
			this->errPrX = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errPrN = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrN))->BeginInit();
			this->SuspendLayout();
			// 
			// btnStart
			// 
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnStart->Location = System::Drawing::Point(116, 343);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(109, 47);
			this->btnStart->TabIndex = 0;
			this->btnStart->Text = L"���������";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::btnStart_Click);
			// 
			// lblX
			// 
			this->lblX->AutoSize = true;
			this->lblX->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblX->Location = System::Drawing::Point(37, 21);
			this->lblX->Name = L"lblX";
			this->lblX->Size = System::Drawing::Size(25, 23);
			this->lblX->TabIndex = 1;
			this->lblX->Text = L"X:";
			// 
			// lblN
			// 
			this->lblN->AutoSize = true;
			this->lblN->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblN->Location = System::Drawing::Point(37, 80);
			this->lblN->Name = L"lblN";
			this->lblN->Size = System::Drawing::Size(27, 23);
			this->lblN->TabIndex = 2;
			this->lblN->Text = L"N:";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblResult->Location = System::Drawing::Point(37, 129);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(91, 23);
			this->lblResult->TabIndex = 3;
			this->lblResult->Text = L"���������:";
			// 
			// txtInX
			// 
			this->txtInX->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInX->Location = System::Drawing::Point(68, 18);
			this->txtInX->Name = L"txtInX";
			this->txtInX->Size = System::Drawing::Size(249, 31);
			this->txtInX->TabIndex = 4;
			// 
			// txtInN
			// 
			this->txtInN->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInN->Location = System::Drawing::Point(70, 77);
			this->txtInN->Name = L"txtInN";
			this->txtInN->Size = System::Drawing::Size(247, 31);
			this->txtInN->TabIndex = 5;
			// 
			// txtOut
			// 
			this->txtOut->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtOut->Location = System::Drawing::Point(41, 173);
			this->txtOut->Multiline = true;
			this->txtOut->Name = L"txtOut";
			this->txtOut->ReadOnly = true;
			this->txtOut->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtOut->Size = System::Drawing::Size(276, 146);
			this->txtOut->TabIndex = 6;
			// 
			// errPrX
			// 
			this->errPrX->ContainerControl = this;
			// 
			// errPrN
			// 
			this->errPrN->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 403);
			this->Controls->Add(this->txtOut);
			this->Controls->Add(this->txtInN);
			this->Controls->Add(this->txtInX);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lblN);
			this->Controls->Add(this->lblX);
			this->Controls->Add(this->btnStart);
			this->Name = L"MyForm";
			this->Text = L"����������� ���������� X^N";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrN))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ClearAll() { // ������� �����
		this->txtOut->Text = "";
		errPrX->SetError(txtInX, String::Empty);
		errPrN->SetError(txtInN , String::Empty);
	}
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		double InputX;
		long long InputN;
		// ��������� ������ �� TextBox � �����
		bool parseX = double::TryParse(this->txtInX->Text, InputX);
		bool parseN = Int64::TryParse(this->txtInN->Text, InputN);
		// ����� �� �����
		if (!parseX) {
			errPrX->SetError(txtInX, "X �� �����");
			if (!parseN) {
				errPrN->SetError(txtInN, "N �� ����� �����");
			}
		}
		else if (!parseN) {
			errPrN->SetError(txtInN, "N �� ����� �����");
		}
		else {
			// ��� ��������� 
			double result;
			// ��������� ���������
			result = recursion(InputX, InputN);
			// ���������� � ���� ������
			this->txtOut->Text = System::Convert::ToString(result);
		}
	}
};
}
