#include <stdio.h>
#include <string.h>
union Student
{
    int id;
    int marks;
    char fvrt_chr;
    char name[34];
}s1;


int main()
{
    //struct Student s1;
    s1.id=1;
    s1.marks=145;
    s1.fvrt_chr='p';
    strcpy(s1.name, "Shubham");
    printf("The id is : %d\n", s1.id);
    printf("The marks is : %d\n", s1.marks);
    printf("The fvrt_chr is : %c\n", s1.fvrt_chr);
    printf("The name is : %s\n", s1.name);
    return 0;
}

