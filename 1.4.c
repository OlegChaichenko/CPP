#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
 
    // `time_t` - арифметический тип времени
    time_t now;
 
    // Получить текущее время
    // `time()` возвращает текущее время системы как значение `time_t`
    time(&now);
    FILE* file1W;
    fopen_s(&file1W, "test.txt", "r+a");
    FILE* file2W;
    fopen_s(&file2W, "output2.txt", "wb");
    char line[255];
    /// Берем каждую строку и ищем там даты в формтае задания,меняем их на сегодняшнюю
    while(fgets(line,255,file1W)){
        printf("%s",line);
        if(line[2]=='.'||line[5]=='.'||line[2]=='/'||line[5]=='/'||line[4]=='.'||line[7]=='.'){
            fprintf(file2W, "Today is %s", ctime(&now));
        }else{
            fprintf(file2W, "%s", line);
        }
    }
    fclose(file1W);
    fclose(file2W);
    return 0;
}