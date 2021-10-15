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

	printf("¬ведите число элементов в массиве: ");
	scanf_s("%d", &size);
	srand(time(0));

	mass = (float*)malloc(size * sizeof(float));
	
	/*
	printf("¬ведите на сколько будет совершЄн сдвиг:");
	scanf_s("%d", &sd);
	*/


	printf("первоначальный массив :");
	for (i = 0; i < size; i++)
	{
		mass[i] =rand() % 200-100;
		printf("%0.1f  ", mass[i]);
	}

	printf("\nинвЄрс массив :");
	for (i = size-1; i > -1; i--)
	{		
		printf("%0.1f  ", mass[i]);
	} 

	


	_getch();
	return (0);
}


