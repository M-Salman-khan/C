#include <stdio.h>

int func_1(int b1)
{
    static int myvar = 0;
    printf("The value of myvar is : %d\n", myvar);
    myvar++;
    // printf("The value of inside the func is : %d\n",b);//adress is diffrent
    // return b*10;
}
int main()
{
    int b = 84;
    // printf("The value of outside the func is : %d\n", b);//adress is diffrent
    int val = func_1(b);
    val = func_1(b);
    int *ptr = &val;
    // printf("The value of func_1 is %d\n", val);
    return 0;
}