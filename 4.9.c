#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int n;
	float r;
	r = 1;
	int z = 0;
	printf("n=");
	scanf("%d", &n);
    while (r < n) {
		r*= 2;
		z++;
	}
	printf("m=%d", z);
}