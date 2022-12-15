#include <stdio.h>

void input12(int* array) {
  for (int i = 0; i < 5; i++) {
    printf("a[%d]= ", i);
    scanf("%d", &array[i]);
  }
}

int max12(int* array) {
  int max = array[0];

  for (int i = 0; i < 5; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }

  return max;
}

int main() {

  int array[5];
  input12(array);
  
  printf("max=%d", max12(array));

  return 0;
}