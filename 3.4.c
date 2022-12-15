#include<stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h> 
#include <math.h> 


uint16_t bit(uint8_t x, uint8_t y) {
	return (uint16_t)((uint32_t)x * y);
}

int main(){
unsigned char a, b;
unsigned short c;

printf(" 8-bit  a,b:\n");
int r_s = scanf("%hhu %hhu", &a, &b);
c = bit(a, b);
printf("c=%hu", c);



}