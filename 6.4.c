#include <stdio.h>
#include <stdint.h>
#include <math.h>

void zad(uint32_t n) {
	printf("%x\n", n);
	uint32_t first8bit = n & 0xFF;//8xFF
	uint32_t last8bit = n >> 24;
	uint32_t m = ((n << 8) >> 16) << 8;
	m |= (first8bit << 24);
	m |= last8bit;

	printf("%u", m);
}

int main() {
    uint32_t n;
	printf("n=");
    scanf("%u", &n);
	zad(n);
}