#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a =563;
    int *ptr; //This is a wild pointer
    // *ptr=54; //This is not a good thing to do
    ptr=&a;//ptr is no longer a wild pointer
    printf("The value of a is %d\n", *ptr);
    return 0;
}