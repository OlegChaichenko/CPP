#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
	printf("x y: ");
	scanf_s("%lf %lf", &x, &y);
	printf("ari => %lf\n", (x + y) / 2);
	printf("har => %lf\n", 2 / (1 / x + 1 / y));
}