//11_12g
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
typedef struct Ihrashka{ 
    char name[20];
    int price;
    int age1;
    int age2;
}Ihrashka;
int readTextFile(const char* fname, Ihrashka* mas){ 
    int price; int age1, age2; char name[20]; 
    int i=0;
    FILE* f = fopen(fname, "rt"); 
    if(f==NULL) return EXIT_FAILURE; 
    do{ 
        fscanf(f,"%s %d %d %d", name, &price, &age1, &age2); 
        mas[i].age1=age1;
        mas[i].age2=age2; 
        strcpy(mas[i].name,name);
        mas[i].price=price;
        strcpy(mas[i].name , name); 
        i++;
    }while(!feof(f)); 
    fclose(f); 
    return i-1;
} 

int main(int argc, char **argv){ 
    const char fname[] = "hello.txt"; 
    int search_cina=108;
    int search_age=5;
    Ihrashka ihr[50]; 
    int k = readTextFile(fname, ihr); 
    int i=0, maxprice=0, maxindex=0;
    int znak=0;
    for(Ihrashka* strt=ihr;strt<&ihr[k]; ++strt){ 
        if (strcmp("konstruktor",strt->name)==0 && (search_cina==strt->price) && (strt->age1==search_age) && (strt->age2==12)){
            printf("takyy konstruktor ye");
            znak=1;
            break;
        }
    }
    if (znak==0){
        printf("takoho konstruktora nemaye");
    }
}
