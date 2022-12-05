#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    FILE* file;
    FILE* file1W;
    fopen_s(&file1W, "output.txt","wb");
    fopen_s(&file, "test.txt","r");
    char line[255];
    while (fgets(line, 255, file)) {
        if (line[2] == '.' && line[5] == '.') {
            int len = strlen(line) - 1;
            if (len == 8) {
                //printf("%c",line[3]);
                if (line[3] == '0') {
                    if (line[4] == '1') {
                        fprintf(file1W, "%c%c year,jan,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '2')
                    {
                        fprintf(file1W, "%c%c year,feb,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '3')
                    {
                        fprintf(file1W, "%c%c year,march,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '4')
                    {
                        fprintf(file1W, "%c%c year,april,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '5')
                    {
                        fprintf(file1W, "%c%c year,may,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '6')
                    {
                        fprintf(file1W, "%c%c year,june,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '7')
                    {
                        fprintf(file1W, "%c%c year,july,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '8')
                    {
                        fprintf(file1W, "%c%c year,august,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '9')
                    {
                        fprintf(file1W, "%c%c year,setem,%c%c\n", line[6], line[7], line[0], line[1]);
                    }

                }
                else {
                    if (line[4] == '0') {
                        fprintf(file1W, "%c%c year,oct,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '1')
                    {
                        fprintf(file1W, "%c%c year,novem,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '2')
                    {
                        fprintf(file1W, "%c%c year,dec,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                }


            }
            else {
                if (line[3] == '0') {
                    if (line[4] == '1') {
                        fprintf(file1W, "%c%c%c%c year,jan,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '2')
                    {
                        fprintf(file1W, "%c%c%c%c year,feb,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '3')
                    {
                        fprintf(file1W, "%c%c%c%c year,march,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '4')
                    {
                        fprintf(file1W, "%c%c%c%c year,april,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '5')
                    {
                        fprintf(file1W, "%c%c%c%c year,may,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '6')
                    {
                        fprintf(file1W, "%c%c%c%c year,june,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '7')
                    {
                        fprintf(file1W, "%c%c%c%c year,july,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '8')
                    {
                        fprintf(file1W, "%c%c%c%c year,august,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '9')
                    {
                        fprintf(file1W, "%c%c%c%c year,setem,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }

                }
                else {
                    if (line[4] == '0') {
                        fprintf(file1W, "%c%c%c%c year,oct,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '1')
                    {
                        fprintf(file1W, "%c%c%c%c year,novem,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '2')
                    {
                        fprintf(file1W, "%c%c%c%c year,dec,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                }
            }
        }
        //printf("%c",line[2]);
        if (line[2] == '/' && line[5] == '/') {
            int len2 = strlen(line) - 1;
            if (len2 == 8) {
                //printf("%c",line[3]);
                if (line[3] == '0') {
                    if (line[4] == '1') {
                        fprintf(file1W, "%c%c year,jan,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '2')
                    {
                        fprintf(file1W, "%c%c year,feb,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '3')
                    {
                        fprintf(file1W, "%c%c year,march,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '4')
                    {
                        fprintf(file1W, "%c%c year,april,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '5')
                    {
                        fprintf(file1W, "%c%c year,may,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '6')
                    {
                        fprintf(file1W, "%c%c year,june,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '7')
                    {
                        fprintf(file1W, "%c%c year,july,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '8')
                    {
                        fprintf(file1W, "%c%c year,august,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '9')
                    {
                        fprintf(file1W, "%c%c year,setem,%c%c\n", line[6], line[7], line[0], line[1]);
                    }

                }
                else {
                    if (line[4] == '0') {
                        fprintf(file1W, "%c%c year,oct,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '1')
                    {
                        fprintf(file1W, "%c%c year,novem,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                    else if (line[4] == '2')
                    {
                        fprintf(file1W, "%c%c year,dec,%c%c\n", line[6], line[7], line[0], line[1]);
                    }
                }


            }
            else {
                if (line[3] == '0') {
                    if (line[4] == '1') {
                        fprintf(file1W, "%c%c%c%c year,jan,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '2')
                    {
                        fprintf(file1W, "%c%c%c%c year,feb,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '3')
                    {
                        fprintf(file1W, "%c%c%c%c year,march,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '4')
                    {
                        fprintf(file1W, "%c%c%c%c year,april,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '5')
                    {
                        fprintf(file1W, "%c%c%c%c year,may,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '6')
                    {
                        fprintf(file1W, "%c%c%c%c year,june,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '7')
                    {
                        fprintf(file1W, "%c%c%c%c year,july,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '8')
                    {
                        fprintf(file1W, "%c%c%c%c year,august,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '9')
                    {
                        fprintf(file1W, "%c%c%c%c year,setem,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }

                }
                else {
                    if (line[4] == '0') {
                        fprintf(file1W, "%c%c%c%c year,oct,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '1')
                    {
                        fprintf(file1W, "%c%c%c%c year,novem,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                    else if (line[4] == '2')
                    {
                        fprintf(file1W, "%c%c%c%c year,dec,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                    }
                }
            }
        }
        if (line[4] == '.' && line[7] == '.') {
            if (line[5] == '0') {
                if (line[6] == '1') {
                    fprintf(file1W, "%c%c%c%c year,jan,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '2')
                {
                    fprintf(file1W, "%c%c%c%c year,feb,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '3')
                {
                    fprintf(file1W, "%c%c%c%c year,march,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '4')
                {
                    fprintf(file1W, "%c%c%c%c year,april,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '5')
                {
                    fprintf(file1W, "%c%c%c%c year,may,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '6')
                {
                    fprintf(file1W, "%c%c%c%c year,june,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '7')
                {
                    fprintf(file1W, "%c%c%c%c year,july,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '8')
                {
                    fprintf(file1W, "%c%c%c%c year,august,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '9')
                {
                    fprintf(file1W, "%c%c%c%c year,setem,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }

            }
            else {
                if (line[6] == '0') {
                    fprintf(file1W, "%c%c%c%c year,oct,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '1')
                {
                    fprintf(file1W, "%c%c%c%c year,novem,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
                else if (line[6] == '2')
                {
                    fprintf(file1W, "%c%c%c%c year,dec,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                }
            }
        }
	}
    fclose(file);
	fclose(file1W);

}
