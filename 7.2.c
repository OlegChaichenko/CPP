#include <stdio.h>

int main() {
  int array[4] = { 5,112,4,3 };

  for (int i = sizeof(array) / sizeof(int) - 1; i != -1; i--) {
    printf("%d\n",array[i]);
  }

}