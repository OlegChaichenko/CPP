#include <stdio.h>
#include <math.h>

int main(){
    int n ;
    printf("n=");
    scanf("%d",&n);
	double sqr = sqrt(2);
	for (int i = 1; i < n; i++) {
		sqr = sqrt(sqr + 2);
	}
	printf("A)=%lf\n", sqr);

	unsigned t, i;
	float sq, k;
    printf("t=");
    scanf("%d",&t);
	k = 3 * t;
	sq = sqrt(k);
	for (i = 2; i < t; i++) {
		k -= 3;
		sq = sqrt(k + sq);}
	printf("%f", sq);
}