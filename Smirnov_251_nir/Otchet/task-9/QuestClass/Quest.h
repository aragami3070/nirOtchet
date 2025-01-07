#pragma once
#include<string>

enum TypeQuest {
	YesNo,
	OneAnswer,
	SomeAnswers,
	ShortAnswer
};

class Quest {
private:
	// ����� �������
	std::string Text;
	// ��� �������: "��/���", "���� �����", "��������� �������", "�������� �����"
	TypeQuest Type;
	// ���������� �����
	std::string RightAnswer;
	// ������ ������ �� ������ ������ (0, 1): 
	int Result;
public:
	// �����������
	Quest(std::string text, TypeQuest type, std::string rightAnswer);

	// get/set ������
	std::string getText();
	TypeQuest getType();
	std::string getRightAnswer();
	int getResult();
	void setResult(int result);
};

