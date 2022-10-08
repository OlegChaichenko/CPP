#include <stdio.h>
#include <math.h>

int main()
{
	
	float x,y,z;
    int i=0;
    printf("x:");
    scanf("%f", &x);
    printf("y:");
    scanf("%f", &y);
    printf("z:");
    scanf("%f", &z);
    printf("%f,%f,%f\n",x,y,z);
    // а)Разные
    if(x!=y){
        i++;
    }
    if(x!=z){
        i++;
    }
    if(z!=y){
        i++;
    }
    printf("Різних=%d\n",i);
    //б)Однакових
    int u=0;
    if(x==y){
        u++;
    }
    if(x==z){
        u++;
    }
    if(z==y){
        u++;
    }
    if(u==1){
        printf("Однакових=%d\n",u+1);
    }else{
        printf("Однакових=%d\n",u);
    }
    //в)
    int average=(x+y+z)/3;
    int t=0;
    if(x>average){
        t++;
    }
    if(z>average){
        t++;
    }
    if(y>average){
       t++;
    }
    printf("Більших за сер арифметичне=%d\n",t);
    //г)
    float a;
    int r=0;
    printf("a=");
    scanf("%f",&a);
    if(x>a){
        r++;
    }
    if(z>a){
       r++;
    }
    if(y>a){
       r++;
    }
    printf("Більших за a=%d\n",r);
    




}