#pragma once
#include <vector>
#include <time.h>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <iterator>
#include "QuestClass/Quest.h"
#include "MessageForm.h"


namespace Winform9 {

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
	private:
		// ������ ��������
		std::vector<Quest>* Questions = new std::vector<Quest>();
		// ������ �� �������� Questions � ��������� �������
		std::vector<int>* RandIndex = new std::vector<int>();
	private: System::Windows::Forms::Label^ lblQuest;


	private: System::Windows::Forms::TextBox^ countBox;
	private: System::Windows::Forms::TextBox^ questBox;
	private: System::Windows::Forms::GroupBox^ answerGroup;
	protected:



	private: System::Windows::Forms::CheckBox^ answerD;
	private: System::Windows::Forms::CheckBox^ answerC;


	private: System::Windows::Forms::CheckBox^ answerB;

	private: System::Windows::Forms::CheckBox^ answerA;
	private: System::Windows::Forms::TextBox^ shortAnswerBox;


	private: System::Windows::Forms::Label^ lblShortAnswer;


	private: System::Windows::Forms::Button^ actionBtn;
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
			this->lblQuest = (gcnew System::Windows::Forms::Label());
			this->countBox = (gcnew System::Windows::Forms::TextBox());
			this->questBox = (gcnew System::Windows::Forms::TextBox());
			this->answerGroup = (gcnew System::Windows::Forms::GroupBox());
			this->answerD = (gcnew System::Windows::Forms::CheckBox());
			this->answerC = (gcnew System::Windows::Forms::CheckBox());
			this->answerB = (gcnew System::Windows::Forms::CheckBox());
			this->answerA = (gcnew System::Windows::Forms::CheckBox());
			this->shortAnswerBox = (gcnew System::Windows::Forms::TextBox());
			this->lblShortAnswer = (gcnew System::Windows::Forms::Label());
			this->actionBtn = (gcnew System::Windows::Forms::Button());
			this->errPr = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->answerGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPr))->BeginInit();
			this->SuspendLayout();
			// 
			// lblQuest
			// 
			this->lblQuest->AutoSize = true;
			this->lblQuest->Location = System::Drawing::Point(35, 23);
			this->lblQuest->Name = L"lblQuest";
			this->lblQuest->Size = System::Drawing::Size(44, 13);
			this->lblQuest->TabIndex = 0;
			this->lblQuest->Text = L"������";
			// 
			// countBox
			// 
			this->countBox->Location = System::Drawing::Point(85, 20);
			this->countBox->Name = L"countBox";
			this->countBox->ReadOnly = true;
			this->countBox->Size = System::Drawing::Size(33, 20);
			this->countBox->TabIndex = 1;
			// 
			// questBox
			// 
			this->questBox->Location = System::Drawing::Point(37, 54);
			this->questBox->Multiline = true;
			this->questBox->Name = L"questBox";
			this->questBox->ReadOnly = true;
			this->questBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->questBox->Size = System::Drawing::Size(718, 293);
			this->questBox->TabIndex = 2;
			// 
			// answerGroup
			// 
			this->answerGroup->Controls->Add(this->answerD);
			this->answerGroup->Controls->Add(this->answerC);
			this->answerGroup->Controls->Add(this->answerB);
			this->answerGroup->Controls->Add(this->answerA);
			this->answerGroup->Location = System::Drawing::Point(417, 362);
			this->answerGroup->Name = L"answerGroup";
			this->answerGroup->Size = System::Drawing::Size(62, 117);
			this->answerGroup->TabIndex = 3;
			this->answerGroup->TabStop = false;
			this->answerGroup->Text = L"������:";
			// 
			// answerD
			// 
			this->answerD->AutoSize = true;
			this->answerD->Location = System::Drawing::Point(6, 88);
			this->answerD->Name = L"answerD";
			this->answerD->Size = System::Drawing::Size(34, 17);
			this->answerD->TabIndex = 3;
			this->answerD->Text = L"D";
			this->answerD->UseVisualStyleBackColor = true;
			// 
			// answerC
			// 
			this->answerC->AutoSize = true;
			this->answerC->Location = System::Drawing::Point(6, 65);
			this->answerC->Name = L"answerC";
			this->answerC->Size = System::Drawing::Size(33, 17);
			this->answerC->TabIndex = 2;
			this->answerC->Text = L"C";
			this->answerC->UseVisualStyleBackColor = true;
			// 
			// answerB
			// 
			this->answerB->AutoSize = true;
			this->answerB->Location = System::Drawing::Point(6, 42);
			this->answerB->Name = L"answerB";
			this->answerB->Size = System::Drawing::Size(33, 17);
			this->answerB->TabIndex = 1;
			this->answerB->Text = L"B";
			this->answerB->UseVisualStyleBackColor = true;
			// 
			// answerA
			// 
			this->answerA->AutoSize = true;
			this->answerA->Location = System::Drawing::Point(6, 19);
			this->answerA->Name = L"answerA";
			this->answerA->Size = System::Drawing::Size(33, 17);
			this->answerA->TabIndex = 0;
			this->answerA->Text = L"A";
			this->answerA->UseVisualStyleBackColor = true;
			// 
			// shortAnswerBox
			// 
			this->shortAnswerBox->Location = System::Drawing::Point(188, 381);
			this->shortAnswerBox->Multiline = true;
			this->shortAnswerBox->Name = L"shortAnswerBox";
			this->shortAnswerBox->Size = System::Drawing::Size(142, 40);
			this->shortAnswerBox->TabIndex = 4;
			// 
			// lblShortAnswer
			// 
			this->lblShortAnswer->AutoSize = true;
			this->lblShortAnswer->Location = System::Drawing::Point(185, 362);
			this->lblShortAnswer->Name = L"lblShortAnswer";
			this->lblShortAnswer->Size = System::Drawing::Size(89, 13);
			this->lblShortAnswer->TabIndex = 5;
			this->lblShortAnswer->Text = L"�������� �����:";
			// 
			// actionBtn
			// 
			this->actionBtn->Location = System::Drawing::Point(188, 436);
			this->actionBtn->Name = L"actionBtn";
			this->actionBtn->Size = System::Drawing::Size(142, 43);
			this->actionBtn->TabIndex = 6;
			this->actionBtn->Text = L"�����";
			this->actionBtn->UseVisualStyleBackColor = true;
			this->actionBtn->Click += gcnew System::EventHandler(this, &MyForm::actionBtn_Click);
			// 
			// errPr
			// 
			this->errPr->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 504);
			this->Controls->Add(this->actionBtn);
			this->Controls->Add(this->lblShortAnswer);
			this->Controls->Add(this->shortAnswerBox);
			this->Controls->Add(this->answerGroup);
			this->Controls->Add(this->questBox);
			this->Controls->Add(this->countBox);
			this->Controls->Add(this->lblQuest);
			this->Name = L"MyForm";
			this->Text = L"����";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->answerGroup->ResumeLayout(false);
			this->answerGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		// ����� �������� ������� - 1 (������)
		int iter = 0;
		// ������� ������� ��������/���������� ������ ��� ������� ���� YesNo
		void YesNoForm() {
			answerGroup->Show();
			answerA->Show();
			answerB->Show();
			answerA->Checked = false;
			answerB->Checked = false;
			answerC->Hide();
			answerD->Hide();
			lblShortAnswer->Hide();
			shortAnswerBox->Hide();
			shortAnswerBox->Clear();
		}

		// ������� ������� ��������/���������� ������ ��� ������� ���� OneAnswer
		void OneAnswerForm() {
			answerGroup->Show();
			answerA->Show();
			answerB->Show();
			answerC->Show();
			answerD->Show();
			answerA->Checked = false;
			answerB->Checked = false;
			answerC->Checked = false;
			answerD->Checked = false;
			lblShortAnswer->Hide();
			shortAnswerBox->Hide();
			shortAnswerBox->Clear();
		}

		// ������� ������� ��������/���������� ������ ��� ������� ���� ShortAnswer
		void ShortAnswerForm() {
			lblShortAnswer->Show();
			shortAnswerBox->Show();
			answerGroup->Hide();
			shortAnswerBox->Clear();
		}

		// ���������� 10 �������� � vector
		void QuestionsLoad() {
			// 1 ������
			Questions->push_back(Quest("����������� �� ������ 'using namespace std;' ��� ������ � string? \n \
							�������� ������: [A] ��; [B] ���;", YesNo, "B"));
			// 2 ������
			Questions->push_back(Quest("����� �� ��������� ���������� ������������ ��� ������������ �������� ���������� � C++? \n \
					�������� ������: [A] =; [B] -=; [C] +=; [D] ==;", OneAnswer, "A"));
			// 3 ������
			Questions->push_back(Quest("����� �� ��������� ����� ������ ������������ ��� �������� ����� ����� � C++? \n \
							�������� ������: [A] int; [B] long; [C] float; [D] double;", SomeAnswers, "AB"));
			// 4 ������
			Questions->push_back(Quest("����� �������� ������������ ��� ��������� � C++?", ShortAnswer, "*"));
			// 5 ������
			Questions->push_back(Quest("����� �������� ������������ ��� �������� � C++?", ShortAnswer, "+"));
			// 6 ������
			Questions->push_back(Quest("����� ��� ������ ����� ����� stoi?", ShortAnswer, "string"));
			// 7 ������
			Questions->push_back(Quest("� ������ ������������ ���� ����������� vector<>?", ShortAnswer, "std"));
			// 8 ������
			Questions->push_back(Quest("����� �������� ������������ ��� ����������� �� C++?", ShortAnswer, "!"));
			// 9 ������
			Questions->push_back(Quest("����� �������� ������������ ��� �������� ����������� � C++", ShortAnswer, "!="));
			// 10 ������
			Questions->push_back(Quest("����� �������� ������������ ��� �������� ������ � C++?", ShortAnswer, "<"));
		}

		void RandIndexLoad() {
			// ��������� ������ ������� �� 0 �� Questions->size() - 1
			for (int i = 0; i < Questions->size(); ++i) {
				RandIndex->push_back(i);
			}
			// �������� ������ ������� �������� �������
			srand(time(NULL));
			std::random_shuffle(RandIndex->begin(), RandIndex->end());
		}


		// ������� ������ �����
		void ChooseForm() {
			int i = RandIndex->at(iter);
			Quest temp = Questions->at(i);
			// � ����������� �� ������� �������� ������ ������� ����������� ��������� �� �����
			if (temp.getType() == YesNo) {
				YesNoForm();
			}
			else if (temp.getType() == OneAnswer || temp.getType() == SomeAnswers) {
				OneAnswerForm();
			}
			else {
				ShortAnswerForm();
			}
		}

		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			countBox->Text = Convert::ToString(iter + 1);
			// ��������� ������� � ��������� � �������� ������ ��������
			QuestionsLoad();
			RandIndexLoad();
			// �������� �����
			ChooseForm();
			// ����� ������ ����� �� ������� �������� (����� �� ����� ������� ����� ������ �� ������� ��������)
			int i = RandIndex->at(iter);
			// ����� ������ �� ������� i
			questBox->Text = gcnew String(Questions->at(i).getText().c_str());
		}

		// ���������� ������ �� ������ (��� �������� ���� YesNo)
		std::string YesNoRead() {
			// ��������: ����� ������ ������ ��� ������
			std::string temp = "";
			if (answerA->Checked == true && answerB->Checked == true) {
				errPr->SetError(actionBtn, "����� ������� ������ ���� �����!");
			}
			else if (answerA->Checked == true) {
				temp = "A";
			}
			else if (answerB->Checked == true) {
				temp = "B";
			}
			else {
				errPr->SetError(actionBtn, "����� ������� �����!");
			}
			return temp;
		}

		// ���������� ������ �� ������ (��� �������� ���� OneAnser)
		std::string OneAnswerRead() {
			// ��������: ����� ������ ������ ��� ������
			std::string temp = "";
			if (answerA->Checked == false && answerB->Checked == false && answerC->Checked == false && answerD->Checked == false) {
				errPr->SetError(actionBtn, "����� ������� �����!");
			}
			else if (answerA->Checked == true && answerB->Checked == false && answerC->Checked == false && answerD->Checked == false) {
				temp = "A";
			}
			else if (answerB->Checked == true && answerA->Checked == false && answerC->Checked == false && answerD->Checked == false) {
				temp = "B";
			}
			else if (answerC->Checked == true && answerA->Checked == false && answerB->Checked == false && answerD->Checked == false) {
				temp = "C";
			}
			else if (answerD->Checked == true && answerA->Checked == false && answerB->Checked == false && answerC->Checked == false) {
				temp = "D";
			}
			else {
				errPr->SetError(actionBtn, "����� ������� ������ ���� �����!");
			}
			return temp;
		}

		// ���������� ������ �� ������ (��� �������� ���� SomeAnsers)
		std::string SomeAnswersRead() {
			// ��������: ����� ������ ������ ��� ������
			std::string temp = "";
			if (answerA->Checked == false && answerB->Checked == false && answerC->Checked == false && answerD->Checked == false) {
				errPr->SetError(actionBtn, "����� ������� �����!");
			}
			if (answerA->Checked == true) {
				temp += "A";
			}
			if (answerB->Checked == true) {
				temp += "B";
			}
			if (answerC->Checked == true) {
				temp += "C";
			}
			if (answerD->Checked == true) {
				temp += "D";
			}
			return temp;

		}

		// ���������� ������ �� ������ (��� �������� ���� ShortAnswer)
		std::string ShortAnswerRead() {
			std::string temp = msclr::interop::marshal_as<std::string>(shortAnswerBox->Text);
			// ��������� �� �� ������ ����
			if (temp == "") {
				errPr->SetError(actionBtn, "����� ������ �����!");
			}
			return temp;
		}

		// ����� ������� ���������� ������ � ����������� �� ���� �������
		std::string ReadAnswer() {
			int i = RandIndex->at(iter);
			Quest temp = Questions->at(i);
			if (temp.getType() == YesNo) {
				return YesNoRead();
			}
			else if (temp.getType() == OneAnswer) {
				return OneAnswerRead();
			}
			else if (temp.getType() == SomeAnswers) {
				return SomeAnswersRead();
			}
			else {
				return ShortAnswerRead();
			}

		}

		// ������� ���������� �������
		int CalcResult() {
			int sum = 0;
			// ���������� �� ������� ��������
			for (int i = 0; i < Questions->size(); ++i) {
				// ���������� ����� �� ���������� ������� (1 ��� 0)
				sum += Questions->at(i).getResult();
			}
			// ������� ���-�� ���������� �������
			return sum;
		}

		System::Void actionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			errPr->Clear();
			std::string answer = "";
			// ��������� ����� �� ������
			if (iter != Questions->size()) {
				answer = ReadAnswer();
			}
			// ���� ����� ����������� �������
			if (answer != "") {
				int i = RandIndex->at(iter);
				bool flag = false;
				// �������� ������
				if (Questions->at(i).getRightAnswer() == answer) {
					// ����������� ������ �� �����
					Questions->at(i).setResult(1);
					flag = true;
				}
				else {
					// ����������� ������ �� �����
					Questions->at(i).setResult(0);
				}
				// ����� ���������� ������ �� ������ ������ (��������� �������� ��� ���)
				MessageForm^ msgForm = gcnew MessageForm();
				msgForm->setFlag(flag);
				msgForm->ShowDialog();
				iter++;
				// ������� � ���������� �������
				if (iter != Questions->size()) {
					countBox->Text = Convert::ToString(iter + 1);
					ChooseForm();
					int i = RandIndex->at(iter);
					questBox->Text = gcnew String(Questions->at(i).getText().c_str());
				}
				// ���� ������� ��������� ������� ���������
				else {
					questBox->Text = gcnew String("�� ������� " + CalcResult() + " ������");
				}
			}
		}
};
}
