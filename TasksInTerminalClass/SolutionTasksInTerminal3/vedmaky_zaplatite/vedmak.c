#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{ 
	setlocale(LC_ALL, "ru");

	//init
	int p, k;
	k = 0;

	printf("¬ведите цену услуг ¬едьмака \n цена=");
	scanf_s("%d", &p);

	//action

	while (p >= 25)
		{
			p = p - 25;
			k = k + 1; 
		}


	while (p >= 10)
		{
			p = p - 10;
			k = k + 1; 
		}


	while (p >= 5)
		{
			p = p - 5;
			k = k + 1;
		}


	while (p >= 1)
		{
			p = p - 1;
			k = k + 1;
		}

	//output

	printf("\n----------------------------------------------------------------------\n");
	printf("минимально возможное количество чеканных монет дл€ оплаты = %d монет", k);

	_getch();
	return 0;
}