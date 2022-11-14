#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    double array[100];
    for (int i=0;i<n;i++){
        printf("array[%d]=",i);
        scanf("%lf",&array[i]);
    }
    double min=array[0];
    for(int o=1;o<n-1;o++){
        if(array[o]<min){
            min=array[o];
        }
    }
    printf("min=%lf\n",min*min);
    double min2=array[0]*array[0];
    for(int w=1;w<n-1;w++){
        if(array[w]*array[w]<min2){
            min2=array[w]*array[w];
        }
    }
    printf("min2=%lf\n",min2);
    printf("res=%lf",min*min-min2);
}
