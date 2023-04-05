#include <stdio.h>
#include <math.h>

int main() {
	//init
	float x1, x2, y1, y2, r1, r2;

	printf("input characteristic 1st circles (in form x, y, r)");
	scanf_s("%f %f %f", &x1, &y1, &r1);

	printf("input characteristic 2nd circles (in form x, y, r)");
	scanf_s("%f %f %f", &x2, &y2, &r2);

	float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	//outpoot
	if (d == r1 + r2)
	{
		printf("krugi peresekautsa v 1-oy tochke");
	}
	else
	{
		if (d < r1 + r2)
		{
			if (d == 0 && r1 == r2)
			{
				printf("krugi sovpadaut");
			}
			else
			{
				if (d == 0 && (r1<r2 || r1>r2))
				{
					printf("odin krug v drugom");
				}
				else
				{
					if (d != 0)
					{
						printf("krugi peresekautsa v 2 tochkah");
					}
				}
			}
		}
		else
			if (d > r1 + r2)
			{
				printf("krugi ne svyazani");
			}
	}

	_getch();
	return 0;
}