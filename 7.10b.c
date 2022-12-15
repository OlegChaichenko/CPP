#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    int array[1000];
    int arn[100];
    int t=0;
    for (int i=0;i<n;i++){
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }
    for(int e=0;e<n-1;e++){
        //printf("array=%d,+1=%d\n", array[e],array[e+1]);
        arn[t]=array[e]+array[e+1];
        t++;
    }
    int min=arn[0];
    for(int o=1;o<n-1;o++){
        if(arn[o]<min){
            min=arn[o];
        }
    }
    printf("min=%d",min);
        


}