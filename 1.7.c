#include <stdio.h>
#include <math.h>

int main()
{
    double x;
	printf("x=");
	scanf("%lf", &x);

	int x1 = x;
	int x2 = floor(x);
	int x3 = ceil(x);
	int x4 = round(x);

	printf("%d %d %d %d", x1, x2, x3, x4);
}