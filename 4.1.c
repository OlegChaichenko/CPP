#include <stdio.h>
#include <math.h>

int main(){
    int i,n;
	float x,y;
	printf("x=");
	scanf("%f", &x);
	printf("n= ");
	scanf("%d", &n);

	y = x;

	for (i = 0; i < n; i++) {
		y = sin(y);
	}

	printf("y=%f", y);
}