#include<stdio.h>
#include<math.h>
#include<locale.h>
#include <time.h>


#define SIZE size

int main()
{
	setlocale(LC_ALL, "ru");

	int size, sd, i, n;
	float* mass;

	printf("������� ����� ��������� � �������: ");
	scanf_s("%d", &size);
	srand(time(0));

	mass = (float*)malloc(size * sizeof(float));
	

	printf("�������������� ������ :");
	for (i = 0; i < size; i++)
	{
		mass[i] =rand() % 200-100;
		printf("%0.1f  ", mass[i]);
	}

	printf("\n����� ������ :");
	for (i = size-1; i > -1; i--)
	{		
		printf("%0.1f  ", mass[i]);
	} 

	printf("\n������� �� ������� ����� �������� �����:");
	scanf_s("%d", &sd);
	printf("\n����� �� %d ������ :", sd);
	for (i = 0; i < size; i++)
	{
		n = i + sd;
		if (n > size)
		{
			n = 0 + (n - size);
		}
		printf("%0.1f  ", mass[n]);
	}

	printf("\n����� ���������� �������: ");
	for (i = size - 1; i > -1; i--)
	{
		n = i + sd;
		if (n > size)
		{
			n = 0 + (n - size);
		}
		printf("%0.1f  ", mass[n]);
	}
	


	


	_getch();
	return (0);
}


