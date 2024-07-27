/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
#include <stdio.h>

struct Driver
{
    char driver_name[50];
    char driver_licence_num[50];
    int driver_km;
};

int main()
{
    struct Driver d1, d2, d3;
    
    // Driver 1
    printf("Enter driver_1's name: \n");
    scanf("%s", d1.driver_name);

    printf("Enter driver_1's licence number: \n");
    scanf("%s", d1.driver_licence_num);

    printf("Enter driver_1's km: \n");
    scanf("%d", &d1.driver_km);

    // Driver 2
    printf("Enter driver_2's name: \n");
    scanf("%s", d2.driver_name);

    printf("Enter driver_2's licence number: \n");
    scanf("%s", d2.driver_licence_num);

    printf("Enter driver_2's km: \n");
    scanf("%d", &d2.driver_km);

    // Driver 3
    printf("Enter driver_3's name: \n");
    scanf("%s", d3.driver_name);

    printf("Enter driver_3's licence number: \n");
    scanf("%s", d3.driver_licence_num);

    printf("Enter driver_3's km: \n");
    scanf("%d", &d3.driver_km);

    // Print Driver 1
    printf("Driver_1's \nname: %s\n", d1.driver_name);
    printf("Driver_1's \nlicence number: %s\n", d1.driver_licence_num);
    printf("Driver_1's \nkm: %d\n", d1.driver_km);

    // Print Driver 2
    printf("Driver_2's \nname: %s\n", d2.driver_name);
    printf("Driver_2's \nlicence number: %s\n", d2.driver_licence_num);
    printf("Driver_2's \nkm: %d\n", d2.driver_km);

    // Print Driver 3
    printf("Driver_3's \nname: %s\n", d3.driver_name);
    printf("Driver_3's \nlicence number: %s\n", d3.driver_licence_num);
    printf("Driver_3's \nkm: %d\n", d3.driver_km);

    return 0;
}

    // printf("Enter driver's km: ");
    // scanf("%d", &driver_km);

    // char driver_licence_num[50];
    // printf("Enter driver's licence number: ");
    // scanf("%49s", driver_licence_num);

    // printf("Enter driver's name: ");
    // scanf("%49s", driver_name);

    // int exit;
    // printf("Want to quit? Press 1: ");
    // scanf("%d", &exit);

    // if (exit == 1) {
    //     break;
    // }

    // // Clear input buffer
    // while (getchar() != '\n');

    // printf("Driver's km: %d\n", driver_km);
    // printf("Driver's licence number: %s\n", driver_licence_num);