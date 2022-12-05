#include <stdio.h>
#include <math.h>
#include <string.h>
//Находим в файле строки со ссылками
int main(){
    FILE *file=fopen("test.txt","r+a");
    
    char line[255];
    char *word="https";
    while(fgets(line,255,file)){
        if(strstr(line,word)!=NULL){
            printf("%s",line);
        }
        
    }
    fclose(file);
}