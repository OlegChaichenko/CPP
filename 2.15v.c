#include <stdio.h>
#include <math.h>

float task25v(float x, float y) {
	return(x+y+x*x+y*y+pow(x,3)+pow(y,3)+pow(x,4)+pow(y,4));
}
int main()
{
	
	float x,y,z;
	printf("x=");
	scanf_s("%f", &x);
    printf("y=");
	scanf_s("%f", &y);
    z=task25v(x,y);
	printf("%f",z);

}