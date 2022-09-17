#include <stdio.h>
#include <math.h>

float task25b(float x, float y) {
	return(x*x*y*y+pow(x,3)*pow(y,3)+pow(x,4)*pow(y,4));
}
int main()
{
	
	float x,y,z;
	printf("x=");
	scanf("%f", &x);
    printf("y=");
	scanf("%f", &y);
    z=task25b(x,y);
	printf("%f",z);

}