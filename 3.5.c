#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
	printf("a=");
	scanf("%d", &a);
    printf("b=");
	scanf("%d", &b);

	if (a > b) {
		printf("a>b\n");
	}
	else if (b > a) {
		printf("b>a\n");
	}
	else {
		printf("a==b\n");
    }
}