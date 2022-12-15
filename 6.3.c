#include <stdio.h>
#include <stdint.h>
#include <math.h>

void zad(uint64_t m,uint8_t j) {
	m = m & ~(1 << j);
	printf("m=%llu", m);
}

int main() {
    uint64_t m;
	uint8_t j;
	printf("m=");
	scanf("%llu", &m);
	printf("j=");
	scanf("%hhu", &j);
	zad(m,j);
}