#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("The sum is %d\n", sum(1, 2)); // Testing the function
    int (*fptr)(int, int);                // int m hoga koi fptr naam k func jisme do int argument pass hoge
    fptr = &sum;                          // fptr sum ko point kr rha h
    int d = fptr(4, 6);                   // calling a function
    printf("The value is %d\n", d);
    return 0;
}