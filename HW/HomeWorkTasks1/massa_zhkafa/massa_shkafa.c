#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ru");
	// init
	int h, w, d, n;
	float t1, t2, t3, p_dsp, p_dvp, p_d, mass, mass1, mass2, mass3, mass4, mass5;
	t1 = 1.5;
	t2 = 0.5;
	t3 = 1;
	p_dsp =0.7;
	p_dvp =0.9;
	p_d =1.5;


		printf("������� ������ ����� � ����������� �� 180 �� 220 \n h=");
		scanf_s("%d", &h);
		printf("\n ------------------------------\n ");

		printf("������� ������ ����� � ����������� �� 80 �� 120 \n w=");
		scanf_s("%d", &w);
		printf("\n ------------------------------\n ");

		printf("������� ������� ����� � ����������� �� 50 �� 90 \n w=");
		scanf_s("%d", &d);
		printf("\n ------------------------------\n ");

		// action
		if (h >= 180 && h <= 220 && w >= 80 && w <= 120 && d >= 50 && d <= 90)
		{
			mass1 = h * w * t2 * p_dvp; // ����� ������ ������ 
			mass2 = h * d * t1 * p_dsp * 2; // ����� �������
			mass3 = w * d * p_dsp * t1 * 2; //����� ��������� ������
			mass4 = h * w * t3 * p_d * 2; //����� ������ 
			n = (h / 40) - 1; // ���������� �����
			mass5 = w * d * t1 * p_dsp * n; //����� �����
			mass = (mass1 + mass2 + mass3 + mass4 + mass5)/1000;// ����� ����� � �����������
			printf("����� ����� = %f (��)", mass);
		}
		else 
		{
			printf("����������� ������� �������� ������, ������� ��� ������");
		}


	

		_getch();
		return 0;
}