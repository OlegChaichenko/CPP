#include <stdio.h>
#include <math.h>

int solve(double a, double b, double c) {
	double D = b * b - 4 * a * c;
	double x1, x2;

	if (fabs(a) < 0.000001) {
		if (fabs(b) < 0.0000001) {
			if (fabs(c) < 0.0000001) {
				printf("Бесконечность");
				return -1;
			}
			printf("-");
			return 0;
		}
		printf("1 корень");
		x1 = -c / b;
		printf("x1 = %lf\n", x1);
		return 1;
	}

	if (D < 0) {
		printf("нет корней\n");
		return 0;
	}
	else if (fabs(D)<0.000000001) {
		printf("один корень ");
		x1 = -b / 2 / a;
		printf(" x1 = %lf\n", x1);
		return 1;
	}
	else {
		printf("два корня ");
		x1 = (-b - sqrt(D)) / 2 / a;
		x2 = (-b + sqrt(D)) / (2 * a);
		printf("x1 = %lf, x2 = %lf\n", x1, x2);
	}
	return 2;
}

int main()
{
	double a, b, c;

	printf("a=");
	scanf_s("%lf", &a);
	printf("b=");
	scanf_s("%lf", &b);
	printf("c=");
	scanf_s("%lf", &c);


	printf("%d",solve(a, b, c));
}