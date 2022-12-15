#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int rec(int k, int n) {
    
    for (int i = 1; i <= k; i++) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = 3 * n + 1;
        }
    }

    return n;
}

int main(){
    int n,k;
    printf("n=");
    scanf("%d",&n);
    printf("k=");
    scanf("%d",&k);
    //b
    int N=1000;
    int max=0;
    for (int j = 1; j < N; j++) {
        int con =1000;
        int kol = 1;
        while (con != 1) {
            kol++;
            con = rec(kol, j);
            
            if (kol > 100000) {
                printf("Nepravda");
                break;
            }
        }
       if (kol > max) {
            max = kol;
       }
    }
    printf("%d\n",max);
}