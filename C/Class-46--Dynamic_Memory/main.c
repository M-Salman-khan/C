#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Use of malloc
    int *ptr;
    int n;
    printf("Enter the size of array u want : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array : ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array is %d\n", i, ptr[i]);
    }


    // // Use of calloc
    // int *ptr;
    // int n;
    // printf("Enter the size of array u want : ");
    // scanf("%d", &n);

    // ptr = (int *)calloc(n , sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array : ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array is %d\n", i, ptr[i]);
    // }



    // // Use of realloc
    // printf("Enter the size of new array u want : ");
    // scanf("%d", &n);

    // ptr = (int *)realloc(ptr , n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this new array : ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this new array is %d\n", i, ptr[i]);
    // }

    // free(ptr);

    return 0;
}