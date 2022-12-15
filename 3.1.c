#include <stdio.h>
#include <math.h>

int main(){
    int n;
	printf("n=");
	scanf("%d", &n);
	int a = n % 10;
	int b = (n / 10) % 10;
	int c = n / 100;
	printf("Одиниці=%d,Десятки= %d,Сотні= %d\n", a, b, c);
	printf("Сума: %d\n", a+b+c);
	printf("Обернене: %d\n", a*100+b*10+c);
}