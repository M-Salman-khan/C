#include <stdio.h>

int table(int n){
    
    // for (int i = 1; i < 11; i++)
    // {
    //     printf("%d X %d = %d\n", n,i, i*n );
    // }
    int i=1;
    do
    {
        printf("%d X %d = %d\n", n,i, i*n );
        i++;
    } while (i<11); 
}

int counting(){
    
}


int main()
{
    int num, index = 0;
    int n;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index++;
    } while (index < num);


    //Table exercise
    printf("Enter a number you want to show table : ");
    scanf("%d", &n);
    table(n);
    return 0;
}


