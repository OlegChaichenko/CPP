#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    printf("x=");
	scanf("%lf", &x);
    printf("y=");
	scanf("%lf", &y);
	printf("%lf %lf", x - y, x * y);
}