#include <stdio.h>
#include <string.h>
int main()
{
    int a=324;
    float b=62.5;
    void *ptr;
    ptr = &a;
    printf("The value of a is : %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is : %f\n", *((float *)ptr));
    return 0;
}
