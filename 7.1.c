#include <stdio.h>

int main(){
  int array[5] = { 1,2,3,4,5 };

  float a;
  printf("a=");
  scanf("%f", &a);

  int count = 0;

  for (int i = 0; i < 5; i++) {
    if (array[i] < a) {
      count++;
    }
  }

  printf("%d", count);

  return 0;
}