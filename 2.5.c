#include <stdio.h>
#include <math.h>
double Rosenbrock2d(double x, double y) {
    double z = x * x - y;
    return 100 * z * z + (x - 1) * (x - 1);
}

int main()
{
	
	double x,y,c;
    printf("x=");
    scanf_s("%lf", &x);
    printf("y=");
    scanf_s("%lf", &y);
    c=Rosenbrock2d(x,y);
    printf("%lf",c);

}