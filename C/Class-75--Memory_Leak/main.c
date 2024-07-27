#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a,i=0;
    int *i2;
    while (i<4666)
    {
        printf("Hello world !\n");
        i2=malloc(4666668*(sizeof(int)));
        if (i%100==0)
        {
            getchar();
        }
        free(i2);
        i++;
    }
    
    return 0;
