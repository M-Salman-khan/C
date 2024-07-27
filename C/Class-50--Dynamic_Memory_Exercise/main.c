// Dynamic Memory Allocation
// ABC Pvt Ltd. manages employee records of other companies.
// Employee Id can be of any length and it can contain any character
// For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
// Then, you have to take employee id as an input and display it on screen.
// Store the employee id in a character array which is allocated dynamically.
// You have to create only one character array dynamically
// EXAMPLE:
// Employee 1:
// Enter no of characters in your eId
// 45
// Dynamically allocate the character array.
// take input from user

// Employee 2:
// Enter no of characters in your eId
// 4
// Dynamically allocate the character array.
// take input from user

// Employee 3:
// Enter no of characters in your eId
// 9
// Dynamically allocate the character array.
// take input from user

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int chars, i=0;
    char *ptr;
    while (i<3)
    {
        /* code */
        printf("Enter no of characters in your E_Id of %d employee : \n", i+1);
        scanf("%d", &chars);
        ptr = (char *)malloc((chars+1) * sizeof(char));
        printf("Enter the E_id  of %d employee : \n", i+1);
        scanf("%s", ptr);
        printf("the E_id is : %s\n", ptr);
        free(ptr);
        i++;
    }
    

    // char *ptr;
    // int n;
    // printf("Enter no of characters in your E_Id : ");
    // scanf("%d", &n);
    // ptr = (char *)malloc((n+1) * sizeof(char));

    // printf("Enter the E_id : ");
    // scanf("%s", ptr);
    // printf("the E_id is : %s", ptr);
    // free(ptr);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array is %d\n", i, ptr[i]);
    // }

    return 0;
}