#include <stdio.h>



void show(int arr[3][3]) {
  for (int i = 0; i < 3; i++) {
    printf("( ");
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]);
    }
    printf(")\n");
  }
}

int main() {
  int N, M;
  int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
  printf("N=");
  scanf_s("%d",&N);
  printf("M=");
  scanf_s("%d",&M);
  show(arr);
  printf("Izmeneno\n");
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (arr[i][j] == M){
            arr[i][j] = N;}
      }
    }
  show(arr);
  
  return 0;
}