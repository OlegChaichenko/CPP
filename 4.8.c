#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int z, n;
	float x;
	x = 1;
	z = 0;
	printf("n= ");
	scanf("%d", &n);
	while (x < n) {
		x *= 4;
		z++;
	}
    printf("z=%d", z - 1);
}