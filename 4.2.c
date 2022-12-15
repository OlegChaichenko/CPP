#include <stdio.h>
#include <math.h>

int main(){
    int i, n;
	printf("n=");
	scanf("%d", &n);

	printf("%d!=", n);
	for (i = n; i > 0; i--) {
		if (i == 1) {
			printf("%d",i);
			break;
		}
		printf("%d*",i);
	}
	printf("\n");

	printf("%d! =", n);
	for (i = 1; i <= n; i++) {
		if (i == n) {
			printf("%d", i);
			break;
		}
		printf("%d*", i);
	}
	printf("\n");
}