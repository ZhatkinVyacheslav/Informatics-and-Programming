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

	printf("\n¬ведите на сколько будет совершЄн сдвиг:");
	scanf_s("%d", &sd);
	printf("\nсдвиг на %d массив :", sd);
	for (i = 0; i < size; i++)
	{
		n = i + sd;
		if (n > size)
		{
			n = 0 + (n - size);
		}
		printf("%0.1f  ", mass[n]);
	}

	printf("\nинвЄрс сдвинутого массива: ");
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


