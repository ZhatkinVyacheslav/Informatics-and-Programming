#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "ru");
	//init
	float a, b, r, S, P;
	int j;
	P = 3.14;

	printf("������� <1> ���� ������ ��������� ������� ������������, <2> ������� ��������������, <3> ������� �����");
	scanf_s("%d", &j);

	//output
	switch (j) {
	case 1:
	{
		printf("������� �������� ������� � ������ ������������ ��������������");
		scanf_s("%f %f", &a, &b);
		S = a * b * 0.5;
		printf("������� ������������ ����� %f", S);
	}
		break;

	case 2:
	{
		printf("������� �������� ������ ���������������");
		scanf_s("%f %f", &a, &b);
		S = a * b;
		printf("������� �������������� ����� %f", S);
	}
		break;

	case 3:
	{
		printf("������� �������� ������� �����");
		scanf_s("%f", &r);
		S = P * r * r;
		printf("������� ����� ����� %f", S);
	}
		break;
	default:
	{
		printf("����� ���� �������� <1>, <2> ��� <3>, �������� ��� ���");
	}
		break;
	}

	_getch();
	return 0;
}