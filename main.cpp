#include <iostream>

#define VARIANT 5

void laba1(double fBound, double sBound)
{
	double result = fBound/2 + sBound/2;
	std::cout << "�����: " << result << std::endl;
}

int64_t procNumSeq(int64_t a, int64_t b)
{
	std::cout << std::endl << "������������ ������� �������� ����� ���� �����" << std::endl;
	return (a + b)*(a + b);
}

int64_t procNumSeq(int64_t a)
{
	std::cout << std::endl << "������������ ������� ��������� �����" << std::endl;
	return -a;
}

void firstClause()
{
	int64_t a, b, c, answer;
	std::cout << std::endl << "������� ��� �����: ";
	std::cin >> a >> b >> c;
	if (a + b + c == a || a + b + c == b || a + b + c == c) {
		answer = procNumSeq(a + b + c);
	}
	else {
		answer = procNumSeq(a ? a : b, c ? c : b);	
	}
	std::cout << "�����: " << answer;
}

void secondClause()
{
	double fBound, sBound, result;
	std::cout << std::endl << "���� �1 �.5: �� 2-� ��������� (����� ���������) �� �������������� ��� ���������� �������� ���������" << std::endl;
	std::cout << "������� 2 ����� (double): ";
	std::cin >> fBound >> sBound;
	laba1(fBound, sBound);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	uint16_t flag;
	std::cout << "����� 1: 1" << std::endl << "����� 2: 2" << std::endl;
	std::cin >> flag;

	if (flag == 1) 
		firstClause();
	else if (flag == 2)
		secondClause();

	return 0;
}