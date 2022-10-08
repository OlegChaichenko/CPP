#include <stdio.h>
#include <math.h>

int main(){
    int n;
	printf("n=");
	scanf("%d", &n);
    int a = n % 10;
	int b = (n / 10) % 10;
	int c = n / 100;

    if (a != b && a != c && b != c){
	printf("%u\n", 100 * a + 10 * b + c);
	printf("%u\n", 100 * a + 10 * c + b);
	printf("%u\n", 100 * b + 10 * a + c);
	printf("%u\n", 100 * b + 10 * c + a);
	printf("%u\n", 100 * c + 10 * b + a);
	printf("%u\n", 100 * c + 10 * a + b);
    
    }else{

        printf("Не підходить умові");
    }
  

}
    
    
    
    
    
    
