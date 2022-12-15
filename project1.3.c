#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//переводим строки в числа и меняем их
bool isdigit(char *Num){  // проверка число ли это строчка
  double Res=atof(Num);
  if(Res!=0){
    return true;
  }else if(stricmp(Num, "0")==0){
      return true;
  }

  return false;
} 

int main(){
    FILE *file=fopen("1.3.txt","r+a");
    FILE* file1W;
    fopen_s(&file1W, "testOleg12212.txt", "wb");
    char line[255];
    char c=',';
    double number = 0;
    while(fgets(line,255,file)){
        if(isdigit(line)==true){
           int arrLen = sizeof line/ sizeof line[0];
           int index = -1;
           for (int i = 0; i < arrLen; i++) {
               if (line[i] ==c) {
                 index = i;
                 break;}}
           //printf("%d\n",index);
           if(index!=-1){
               line[index]='.';
               number=atof(line);
               //printf("(%.4lf)\n",number);
               fprintf(file1W, "(%.4lf)\n", number);
            }else{
               number=atof(line);
               fprintf(file1W, "(%.4lf)\n", number);
        }
    }}
    fclose(file);}
