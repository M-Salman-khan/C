#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    printf("The value of arg is : %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The value at index %d is : %s\n",i,argv[i]);
    }
    
    return 0;
}
