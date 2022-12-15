#include <stdio.h>
#include <stdint.h>
#include <math.h>

void zad(unsigned char n) {
	long long unsigned m = 1UL << n;
	printf("Res: %llu", m);
}

int main() {
    unsigned char n;

	printf("N= ");
	scanf("%hhu", &n);
    zad(n);
}