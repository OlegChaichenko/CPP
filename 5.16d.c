#include <stdio.h>
#include <math.h>
 
int main(){
    double epsilon;
    double sum=1;
    double chiselnik=1;
    double znamek=1;
    int x;
    int i=0;
    double dodanok=1;
    printf("x=");
    scanf("%d",&x);
    printf("epsilon=");
    scanf("%lf",&epsilon);
    while(dodanok>epsilon){
        chiselnik*=x;
        znamek*=(i+1);
        i++;
        dodanok=chiselnik/znamek;
        sum+=dodanok;
    }
    printf("e^x=%lf\n",sum);}