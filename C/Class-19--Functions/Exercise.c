#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printstar(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <row-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printstar(a);
    return 0;
}