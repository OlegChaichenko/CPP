#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int i, n;
	float x, y, sum;
	printf("x=");
	scanf("%f", &x);
	printf("n=");
	scanf("%d", &n);
	y =1;
	sum =1;
	for (i = 1; i <= n; i++) {
		sum *= (x / i); 
		y += sum;
	}

	printf("y=%lf", y);
}