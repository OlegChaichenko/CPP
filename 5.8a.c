#include <stdio.h>
#include <math.h>
 
int main(){
    double epsilon;
    double sum=1;
    double chiselnik=1;
    double znamek=1;
    double k;
    int x;
    int i=0;
    double dodanok=1;
    printf("x=");
    scanf("%d",&x);
    printf("epsilon=");
    scanf("%lf",&epsilon);
    while(dodanok>epsilon){
        chiselnik*=x;
       // printf("%lf\n",chiselnik);
        znamek*=(i+1);
        i++;
        //printf("%lf\n",znamek);
        dodanok=chiselnik/znamek;
        sum+=dodanok;
        //printf("%lf\n",dodanok);
    }
    k=pow(2.718,x);
    printf("За допомогою циклу=%lf\n",sum);
    printf("Вбудована=%lf",k);
    


} 