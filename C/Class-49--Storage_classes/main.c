#include <stdio.h>

// Extern storage class

// int myfunc(int a, int b)
// {
//     int sum;
//     // sum = a + b;
//     return sum;
// }
// int sum=443;
// int main()
// {
//     // Declaration - Telling the compiler about the variable (No space reserved)
//     // Defination - Declaration + space reservation
//     // int sum;
//     sum = myfunc(5, 7);
//     printf("The sum is %d\n", sum);
//     return 0;
// }

// Static storage class

int myfunc(int a, int b)
{
    static int my_var;
    my_var++;
    printf("The number is %d\n", my_var);
    // sum = a + b;
    return my_var;
}
// int my_var=443;
int main()
{
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Defination - Declaration + space reservation
    // int sum;
    int my_var = myfunc(5, 7);
    my_var = myfunc(5, 7);
    my_var = myfunc(5, 7);
    my_var = myfunc(5, 7);
    // printf("The sum is %d\n", my_var);
    return 0;
}