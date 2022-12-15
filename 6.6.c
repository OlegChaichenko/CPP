#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main() {
    int i = 0;
    	for (; i < 9; i++) {
		    unsigned tmp = i;
	}
	
	    for (; i < 9; i++) {
		  unsigned tmp = i;
	}

	i = 0;
	uint8_t r = 1;

	for (; i < (1<<1<<8); i++) {
		unsigned tmp = i;
		uint8_t y = (tmp & (tmp - 1)) == 0;
		
		if (r == tmp) {
			printf("power of 2");
			r *= 2;

			if (y == 1) {
				printf(" and y too\n");
			}
			else {
				printf(" wrong ");
			}
		}
		else {
			if (y == 1) {
				printf("hypotese is wrong ");
			}
		}
		
	}

	for (; i < (1 << 1 << 8); i++) {
		unsigned tmp = i;
		uint8_t y = (tmp & (-tmp));

	    int k = 1;
		int j = 0;
		
		while (tmp % k == 0) {
			k << 1; 
			j++;
		}
		if (y != (1 << j)) {
			printf("we are wrong! for %d", i);
}}
}