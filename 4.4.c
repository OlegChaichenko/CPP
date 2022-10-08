#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double x;
    printf("n=");
    scanf("%d",&n);
    printf("x=");
    scanf("%lf",&x);
    double sum = 0;
	
	for (int i = 1; i <= n; i++) {
		sum += i * pow(x, i);
	}

	printf("resul =%lf", sum);
}