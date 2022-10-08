#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("n=");
	scanf("%d", &n);
    int sum = 1;
	if (n % 2 == 0) {
		int i = 2;
		for (i; i <= n; i += 2) {
			sum *= i;
		}
	}
	else {
		int i = 1;
		for (i; i <= n; i += 2) {
			sum *= i;
		}
	}

	printf("resul= %d", sum);
}