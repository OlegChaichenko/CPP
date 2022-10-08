#include <stdio.h>
#include <math.h>

int main(){
    int n , x , y ;
	printf("n=");
    scanf("%d", &n);
    printf("x=");
    scanf("%d", &x);
	printf("y=");
	scanf("%d",&y);
	double sum = 0;
	for (int i = n; i >= 0; i--) {
		sum += pow(x, 2 * pow(2, i)) * pow(y, i);
	}
	printf("%lf", sum);
}