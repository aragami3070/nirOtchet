#pragma once
#include<string>
namespace Winform4 {

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
	private: System::Windows::Forms::DataGridView^ ArDtGr;
	private: System::Windows::Forms::Label^ lblTask;
	protected:

	protected:


	private: System::Windows::Forms::Button^ AddBtn;
	private: System::Windows::Forms::Button^ DelBtn;
	private: System::Windows::Forms::TextBox^ XTxtBox;




	private: System::Windows::Forms::Label^ lblX;
	private: System::Windows::Forms::Label^ lblInterval1;
	private: System::Windows::Forms::Label^ lblInterval2;
	private: System::Windows::Forms::TextBox^ ATxtBox;
	private: System::Windows::Forms::TextBox^ BTxtBox;




	private: System::Windows::Forms::Button^ SumBtn;
	private: System::Windows::Forms::TextBox^ SumTxtBox;

	private: System::Windows::Forms::Label^ lblSum;
	private: System::Windows::Forms::TextBox^ MaxTxtBox;
	private: System::Windows::Forms::Label^ lblMaxEl;


	private: System::Windows::Forms::Button^ MaxBtn;
	private: System::Windows::Forms::ErrorProvider^ errPrX;
	private: System::Windows::Forms::ErrorProvider^ errPrA;
	private: System::Windows::Forms::ErrorProvider^ errPrB;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ArDtGr = (gcnew System::Windows::Forms::DataGridView());
			this->lblTask = (gcnew System::Windows::Forms::Label());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->DelBtn = (gcnew System::Windows::Forms::Button());
			this->XTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->lblX = (gcnew System::Windows::Forms::Label());
			this->lblInterval1 = (gcnew System::Windows::Forms::Label());
			this->lblInterval2 = (gcnew System::Windows::Forms::Label());
			this->ATxtBox = (gcnew System::Windows::Forms::TextBox());
			this->BTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->SumBtn = (gcnew System::Windows::Forms::Button());
			this->SumTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->lblSum = (gcnew System::Windows::Forms::Label());
			this->MaxTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->lblMaxEl = (gcnew System::Windows::Forms::Label());
			this->MaxBtn = (gcnew System::Windows::Forms::Button());
			this->errPrX = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errPrA = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errPrB = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArDtGr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrB))->BeginInit();
			this->SuspendLayout();
			// 
			// ArDtGr
			// 
			this->ArDtGr->AllowUserToAddRows = false;
			this->ArDtGr->AllowUserToDeleteRows = false;
			this->ArDtGr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ArDtGr->Location = System::Drawing::Point(34, 129);
			this->ArDtGr->Name = L"ArDtGr";
			this->ArDtGr->ReadOnly = true;
			this->ArDtGr->Size = System::Drawing::Size(192, 268);
			this->ArDtGr->TabIndex = 0;
			// 
			// lblTask
			// 
			this->lblTask->AutoSize = true;
			this->lblTask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTask->Location = System::Drawing::Point(12, 19);
			this->lblTask->Name = L"lblTask";
			this->lblTask->Size = System::Drawing::Size(763, 80);
			this->lblTask->TabIndex = 1;
			this->lblTask->Text = resources->GetString(L"lblTask.Text");
			// 
			// AddBtn
			// 
			this->AddBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddBtn->Location = System::Drawing::Point(248, 151);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(99, 35);
			this->AddBtn->TabIndex = 2;
			this->AddBtn->Text = L"��������";
			this->AddBtn->UseVisualStyleBackColor = true;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MyForm::AddBtn_Click);
			// 
			// DelBtn
			// 
			this->DelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DelBtn->Location = System::Drawing::Point(248, 215);
			this->DelBtn->Name = L"DelBtn";
			this->DelBtn->Size = System::Drawing::Size(99, 35);
			this->DelBtn->TabIndex = 3;
			this->DelBtn->Text = L"�������";
			this->DelBtn->UseVisualStyleBackColor = true;
			this->DelBtn->Click += gcnew System::EventHandler(this, &MyForm::DelBtn_Click);
			// 
			// XTxtBox
			// 
			this->XTxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->XTxtBox->Location = System::Drawing::Point(441, 160);
			this->XTxtBox->Name = L"XTxtBox";
			this->XTxtBox->Size = System::Drawing::Size(100, 26);
			this->XTxtBox->TabIndex = 4;
			// 
			// lblX
			// 
			this->lblX->AutoSize = true;
			this->lblX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblX->Location = System::Drawing::Point(398, 162);
			this->lblX->Name = L"lblX";
			this->lblX->Size = System::Drawing::Size(37, 20);
			this->lblX->TabIndex = 5;
			this->lblX->Text = L"X = ";
			// 
			// lblInterval1
			// 
			this->lblInterval1->AutoSize = true;
			this->lblInterval1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInterval1->Location = System::Drawing::Point(398, 218);
			this->lblInterval1->Name = L"lblInterval1";
			this->lblInterval1->Size = System::Drawing::Size(96, 20);
			this->lblInterval1->TabIndex = 6;
			this->lblInterval1->Text = L"��������: [";
			// 
			// lblInterval2
			// 
			this->lblInterval2->AutoSize = true;
			this->lblInterval2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInterval2->Location = System::Drawing::Point(632, 218);
			this->lblInterval2->Name = L"lblInterval2";
			this->lblInterval2->Size = System::Drawing::Size(13, 20);
			this->lblInterval2->TabIndex = 7;
			this->lblInterval2->Text = L"]";
			// 
			// ATxtBox
			// 
			this->ATxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ATxtBox->Location = System::Drawing::Point(500, 215);
			this->ATxtBox->Name = L"ATxtBox";
			this->ATxtBox->Size = System::Drawing::Size(60, 26);
			this->ATxtBox->TabIndex = 8;
			// 
			// BTxtBox
			// 
			this->BTxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BTxtBox->Location = System::Drawing::Point(566, 215);
			this->BTxtBox->Name = L"BTxtBox";
			this->BTxtBox->Size = System::Drawing::Size(60, 26);
			this->BTxtBox->TabIndex = 9;
			// 
			// SumBtn
			// 
			this->SumBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SumBtn->Location = System::Drawing::Point(398, 308);
			this->SumBtn->Name = L"SumBtn";
			this->SumBtn->Size = System::Drawing::Size(75, 35);
			this->SumBtn->TabIndex = 10;
			this->SumBtn->Text = L"�����";
			this->SumBtn->UseVisualStyleBackColor = true;
			this->SumBtn->Click += gcnew System::EventHandler(this, &MyForm::SumBtn_Click);
			// 
			// SumTxtBox
			// 
			this->SumTxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SumTxtBox->Location = System::Drawing::Point(430, 276);
			this->SumTxtBox->Name = L"SumTxtBox";
			this->SumTxtBox->ReadOnly = true;
			this->SumTxtBox->Size = System::Drawing::Size(338, 26);
			this->SumTxtBox->TabIndex = 12;
			// 
			// lblSum
			// 
			this->lblSum->AutoSize = true;
			this->lblSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSum->Location = System::Drawing::Point(362, 276);
			this->lblSum->Name = L"lblSum";
			this->lblSum->Size = System::Drawing::Size(62, 20);
			this->lblSum->TabIndex = 11;
			this->lblSum->Text = L"�����:";
			// 
			// MaxTxtBox
			// 
			this->MaxTxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MaxTxtBox->Location = System::Drawing::Point(479, 386);
			this->MaxTxtBox->Name = L"MaxTxtBox";
			this->MaxTxtBox->ReadOnly = true;
			this->MaxTxtBox->Size = System::Drawing::Size(289, 26);
			this->MaxTxtBox->TabIndex = 15;
			// 
			// lblMaxEl
			// 
			this->lblMaxEl->AutoSize = true;
			this->lblMaxEl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMaxEl->Location = System::Drawing::Point(290, 372);
			this->lblMaxEl->Name = L"lblMaxEl";
			this->lblMaxEl->Size = System::Drawing::Size(183, 40);
			this->lblMaxEl->TabIndex = 14;
			this->lblMaxEl->Text = L"������ ������������\r\n�������� ���������:";
			// 
			// MaxBtn
			// 
			this->MaxBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MaxBtn->Location = System::Drawing::Point(366, 431);
			this->MaxBtn->Name = L"MaxBtn";
			this->MaxBtn->Size = System::Drawing::Size(147, 50);
			this->MaxBtn->TabIndex = 13;
			this->MaxBtn->Text = L"������������ ��������";
			this->MaxBtn->UseVisualStyleBackColor = true;
			this->MaxBtn->Click += gcnew System::EventHandler(this, &MyForm::MaxBtn_Click);
			// 
			// errPrX
			// 
			this->errPrX->ContainerControl = this;
			// 
			// errPrA
			// 
			this->errPrA->ContainerControl = this;
			// 
			// errPrB
			// 
			this->errPrB->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 511);
			this->Controls->Add(this->MaxTxtBox);
			this->Controls->Add(this->lblMaxEl);
			this->Controls->Add(this->MaxBtn);
			this->Controls->Add(this->SumTxtBox);
			this->Controls->Add(this->lblSum);
			this->Controls->Add(this->SumBtn);
			this->Controls->Add(this->BTxtBox);
			this->Controls->Add(this->ATxtBox);
			this->Controls->Add(this->lblInterval2);
			this->Controls->Add(this->lblInterval1);
			this->Controls->Add(this->lblX);
			this->Controls->Add(this->XTxtBox);
			this->Controls->Add(this->DelBtn);
			this->Controls->Add(this->AddBtn);
			this->Controls->Add(this->lblTask);
			this->Controls->Add(this->ArDtGr);
			this->Name = L"MyForm";
			this->Text = L"��������� ��������� ������. ����� 1.";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArDtGr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPrB))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// ������� �����
	private: void ClearAll() { 
		this->SumTxtBox->Text = "";
		this->MaxTxtBox->Text = "";
		errPrX->SetError(XTxtBox, String::Empty);
		errPrA->SetError(ATxtBox, String::Empty);
		errPrB->SetError(BTxtBox, String::Empty);
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ArDtGr->Columns->Add("ArColumn", "������");
		for (int i = 0; i < 7; i++) {
			ArDtGr->Rows->Add();
		}
		ArDtGr->Rows[0]->Cells[0]->Value = (long long)8;
		ArDtGr->Rows[1]->Cells[0]->Value = (long long)7;
		ArDtGr->Rows[2]->Cells[0]->Value = (long long)3;
		ArDtGr->Rows[3]->Cells[0]->Value = (long long)4;
		ArDtGr->Rows[4]->Cells[0]->Value = (long long)7;
		ArDtGr->Rows[5]->Cells[0]->Value = (long long)5;
		ArDtGr->Rows[6]->Cells[0]->Value = (long long)7;
	}
	// ������� ������
	private: System::Void AddBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputX;
		// ��������� ������ �� TextBox � �����
		bool parseX = Int64::TryParse(this->XTxtBox->Text, InputX);
		// ����� �� �����
		if (!parseX) {
			errPrX->SetError(XTxtBox, "X �� �����");
		}
		else {
			ArDtGr->Rows->Add();
			ArDtGr->Rows[ArDtGr->RowCount - 1]->Cells[0]->Value = InputX;
		}
	}

	// �������� ������
	private: System::Void DelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (ArDtGr->RowCount != 0) {
			ArDtGr->Rows->RemoveAt(ArDtGr->RowCount - 1);
		}
	}

	// ������� ��������������
	private: System::Void SumBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputA;
		long long InputB;
		// ��������� ������ �� TextBox � �����
		bool parseA = Int64::TryParse(this->ATxtBox->Text, InputA);
		bool parseB = Int64::TryParse(this->BTxtBox->Text, InputB);
		if (!parseA) {
			errPrA->SetError(ATxtBox, "A �� �����");
			if (!parseB) {
				errPrB->SetError(BTxtBox, "B �� �����");
			}
		}
		else if (!parseB) {
			errPrB->SetError(BTxtBox, "B �� �����");
		}
		else if (InputA < 0) {
			errPrA->SetError(ATxtBox, "� �� ����� ���� �������������");
		}
		else if (InputB > ArDtGr->RowCount -1) {
			errPrB->SetError(BTxtBox, "B ������ ��� ���-�� ���������");
		}
		else {
			// ������� �������� ���������������
			long long countres = 0;
			long long count = 0;
			double res = 0;
			double sum = 0;
			for (long long i = 0; i <= ArDtGr->RowCount - 1; i++) {
				if ((long long)ArDtGr->Rows[i]->Cells[0]->Value % 2 != 0) {
					res += (long long)ArDtGr->Rows[i]->Cells[0]->Value;
					countres++;
				}
			}
			for (long long i = InputA; i <= InputB; i++) {
				if ((long long)ArDtGr->Rows[i]->Cells[0]->Value % 2 != 0) {
					sum += (long long)ArDtGr->Rows[i]->Cells[0]->Value;
					count++;
				}
			}

			res -= sum;
			countres -= count;

			// ��������� ������, ��� ����� ��������� ���
			if (res != 0 && countres != 0) {
				res = (res) / countres;
				this->SumTxtBox->Text = res.ToString();
			}
			else {
				this->SumTxtBox->Text = "����� ��������� ���";
			}
		}
	}

	private: System::Void MaxBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		bool flag = false;
		long long max = -INT_MAX;
		for (long long i = 0; i <= ArDtGr->RowCount - 1; i++) {
			try
			{
				long long elemArr = (long long)ArDtGr->Rows[i]->Cells[0]->Value;
				if (elemArr > max && elemArr % 2 != 0) {
					max = (long long)ArDtGr->Rows[i]->Cells[0]->Value;
				}
			}
			catch (const std::exception&)
			{
				this->MaxTxtBox->Text = "� ������� ���� �� �����";
				flag = true;
			}
		}

		if (max % 2 != 0 && flag == false) {
			for (long long i = 0; i <= ArDtGr->RowCount - 1; i++) {
				if ((long long)ArDtGr->Rows[i]->Cells[0]->Value == max) {
					this->MaxTxtBox->Text += i.ToString();
					this->MaxTxtBox->Text += " ";
				}
			}
		}
		else if (flag == false) {
			this->MaxTxtBox->Text = "��� �������� ���������";
		}
	}
};
}
