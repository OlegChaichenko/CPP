#include <stdio.h>
#include <math.h>
#define PI 3.14
#define E 2.71828182845904523536

int main()
{
    float x1 = pow(10, -4);
    double x2 = 24.33e5; 
    double x3 =PI;
	double y1 = E; 
	double y2= sqrt(5);
	double y3 = log(100);
	printf("%.4f %.4f %.4f %.4f %.4f %.4f",x1,x2,x3,y1,y2,y3 );
    
}