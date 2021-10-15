#include<stdio.h>;
#include<math.h>;

int main() {
	//init
	float x, y, z, mean;
	int f;

	printf("Input 3 number with which you want to work");
	scanf_s("%f %f %f", &x, &y, &z);

	printf("Input nuber <1> if you need the arifmetic mean, <2> mean sqyares of number, <3> mean of the modules of these numbers, <4> mean of the roots of theese numbers");
	scanf_s("%d", &f);

	//output

	met: 
	switch (f) {
	
	case 1:
			mean = (x + y + z) / 3;
			printf("arifmetic mean of the number is %f", mean);	
	break;
	

	case 2: 
			mean = (pow(x, 2) + pow(y, 2) + pow(z, 2)) / 3;
			printf("the mean of the squares of these numbers is %f", mean);		
	break;


	case 3: 
			mean = (fabs(x) + fabs(y) + fabs(z)) / 3;
			printf("the mean of the roots of numbers is %f", mean);
	break;


	case 4:
			mean = (sqrt(x) + sqrt(y) + sqrt(z)) / 3;
			printf("the mean of the sqrt of numbers %f", mean);
	break;


	default:
			printf("You was must input only number <1>, <2>, <3> or <4>, try again please");			
		break;
	}

	_getch();
	return 0;
}