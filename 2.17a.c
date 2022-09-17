#include <stdio.h>
#include <math.h>
#define E 2.71828182845904523536
double th(double x) {
   return (pow(E,x)-pow(E,-x))/(pow(E,x)+pow(E,-x));
}
double th_derivative(double x){
    double con=(pow(E,x)+pow(E,-x))/2;
    return 1/pow(con,2);
}

int main()
{
	
	double x,y,z;
    printf("x=");
    scanf("%lf",&x);
    y=th(x);
    printf("%lf\n",y);
    z=th_derivative(x);
    printf("Proizvod=%lf",z);




}