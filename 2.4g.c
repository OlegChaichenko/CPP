#include <stdio.h>
#include <math.h>

float task24g(float x) {
	return(((x * x * x) * (x * x + 1) * (x * x * x * x - x * x + 1)) + 1);
}
int main()
{
	
	float x;
	printf("x=");
	scanf("%f", &x);
	printf("task24g(%f)=%f\n", x, task24g(x));

}