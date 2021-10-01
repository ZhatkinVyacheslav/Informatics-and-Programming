#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	

	setlocale(LC_ALL, "ru");
	int number, work = 1, isError = 0, c;

	while (work) {

		printf("Ща заинвёрснем число ");

		do
		{
			if (isError) printf("Неправильный ввод числа, попробуй ещё");

			printf("\n Введите число");
			scanf_s("%d", &number);

			if (number == 0)
			{
				work = 1;
				break;
			}
			isError = (number < 0);

	
				while (number > 10)
				{
					if (number > 10)
					{
						c = number % 10;
						printf("%d", c);
						number = number / 10;
					}
				} printf("%d\n", number);

		} while (isError);

	}

	_getch();
	return 0;
}