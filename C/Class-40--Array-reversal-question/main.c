#include <stdio.h>

void arrayRev(int arr[])
{
    for (int i = 0; i < 7 / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
        // swap arr[i]=arr[6-i]
    }
}
void printarr(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value at index %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 5, 95};
    printf("Before revresing array : \n");
    printarr(arr);

    arrayRev(arr);
    printf("\nAfter revresing array : \n");
    printarr(arr);

    return 0;
}