#include <stdio.h>


void show(double arr[3][3]) {
  for (int i = 0; i < 3; i++) {
    printf("( ");
    for (int j = 0; j < 3; j++) {
      printf("%lf ", arr[i][j]);
    }
    printf(")\n");
  }
}
int main() {
  int i, j;
  double a;
  double arr[3][3] = { {1.0,2,3},{4,5,6},{7,8,9} };
  printf("i=");
  scanf("%d",&i);
  printf("j=");
  scanf("%d",&j);
  printf("a=");
  scanf("%lf",&a);
  arr[i][j] = a;
  show(arr);
}