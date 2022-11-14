#include <stdio.h>

void parnost(int *par){
    int arr[50], i = 0;
    while(scanf("%d", &arr[i]) && arr[i] != 0){
        if(arr[i] % 2 == 0){
            par[0]++;
        } else {
            par[1]++;
        }
    }
}

int main(){
    int od[2]={0};
    parnost(od);
    printf("парных= %d\n непарных= %d", od[0], od[1]);
}