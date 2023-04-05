#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "ru");
	//init
	float a, b, r, S, P;
	int j;
	P = 3.14;

	printf("Введите <1> если хотите расчитать площадь треугольника, <2> площаль прямоугольника, <3> площадь круга");
	scanf_s("%d", &j);

	//output
	switch (j) {
	case 1:
	{
		printf("введите значения стороны и высоты треугольника соответственно");
		scanf_s("%f %f", &a, &b);
		S = a * b * 0.5;
		printf("площадь треугольника равна %f", S);
	}
		break;

	case 2:
	{
		printf("введите значения сторон прямоугольников");
		scanf_s("%f %f", &a, &b);
		S = a * b;
		printf("площадь прямоугольника равна %f", S);
	}
		break;

	case 3:
	{
		printf("введите значения радиуса круга");
		scanf_s("%f", &r);
		S = P * r * r;
		printf("площадь круга равна %f", S);
	}
		break;
	default:
	{
		printf("нужно было написать <1>, <2> или <3>, попробуй ещё раз");
	}
		break;
	}

	_getch();
	return 0;
}