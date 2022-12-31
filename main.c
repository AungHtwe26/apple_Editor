#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strLib.h"
int main() {

    char COMMAND[100] = {"\0"};
    char Line[100]    = {"\0"};
    char text[100]    = {"\0"};
    char page[1000][100];
    system("cls");
    system("color 0A");
    printf("\t\tSAE][\n");
    while(1)
    {
        printf("]");
        gets(text);
        split_k(Line,COMMAND,text);             //separate Line and command
        puts(Line);
        puts(COMMAND);
        strcpy_k(page[s2i_k(Line)],COMMAND); //store command
        clr_k(Line, strlen_k(Line));                //clear Line
        clr_k(COMMAND, strlen_k(COMMAND));          //clear COMMAND

    }
    return 0;
}

