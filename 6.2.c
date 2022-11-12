#include <stdio.h>
#include <stdint.h>
#include <math.h>

void zad(int n, unsigned m) {

	int res = n | (1 << m);

	printf("r=%d", res);
}

int main() {
    int n;
	unsigned m;
	printf("n=");
	scanf("%d", &n);
    printf("m=");
	scanf("%u", &m);
	zad(n,m);
}