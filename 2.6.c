#include <stdio.h>
#include <math.h>
double len2(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
double heron(double a, double b, double c) {
   return sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
}

int main()
{
	
	double x1, y1, x2, y2, x3, y3;

    printf("x1 y1:");
    scanf_s("%lf %lf", &x1, &y1);
    printf("x2 y2:");
    scanf_s("%lf %lf", &x2, &y2);
    printf("x3 y3:");
    scanf_s("%lf %lf", &x3, &y3);

    double a = len2(x1, y1, x2, y2);
    double b = len2(x2, y2, x3, y3);
    double c = len2(x3, y3, x1, y1);

    printf("S => %f", heron(a, b, c));

}