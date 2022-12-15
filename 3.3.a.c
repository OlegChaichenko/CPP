#include <stdio.h>
#include <math.h>


int main(){
    int a, b, c;
	unsigned long long res;
	printf("a, b, c: ");
	int all = scanf("%d,%d,%d", &a, &b, &c);

    if (abs(a) < pow(2, 10) && abs(b) < pow(2, 10) && abs(c) < pow(2, 10)) {
        res = (unsigned long long) a * b * c;
		printf("R=%llu\n", res);
	}



}