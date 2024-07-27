#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[30]="Welcome to New File !";
    //****** Reading a file ****** 
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("%s",string);


    //****** Writing a file ****** 
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);
    return 0;
}