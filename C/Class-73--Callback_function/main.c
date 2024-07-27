#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b){
    return a+b;
}

void greeting(int (*fptr)(int,int)){
    printf("Good Morning User \n");
    printf("The value of addition is %d\n", fptr(5,6));
}
int main()
{
    int (*fptr)(int, int);
    fptr=sum;
    greeting(fptr);
    return 0;
}