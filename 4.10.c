#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    double a = 1;
	while (1 + a != 1) {
		a = a / 2;
	}
	printf("%.20lf", a);
}