#include <stdio.h>
#include <math.h>

int main()
{
	
	float a, b, c;
    printf("a  = ");
    scanf("%f", &a);
    printf("b  = ");
    scanf("%f",&b);
    printf("c  = ");
    scanf("%f",&c);
    double S = sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
    printf("S = %f", S);

}