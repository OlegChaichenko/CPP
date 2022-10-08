#include <stdio.h>
#include <math.h>

int main(){
   unsigned i, n;
   float x, pow123;

   printf("n=");
   scanf("%u", &n);

   printf("x=");
   scanf("%f", &x);

	float y = 1;
	pow123 = 1;

	for (i = 0; i < n; i++) {
		pow123 *= x;
		printf("%lf\n", pow123);
		y += pow123;
	}

	printf("y=%f", y);
}