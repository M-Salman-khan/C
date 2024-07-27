#include <stdio.h>
#include <string.h>
#include <math.h>
#define PI 3.14

int EuclideanDistance(int x1, int x2, int y1, int y2) {
    int gdistance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    int result = (int)sqrt(gdistance); // Cast to int to match return type
    return result;
}

float AreaOfCircle(int x1, int x2, int y1, int y2, int (*fptr)(int, int, int, int)) {
    int radius = fptr(x1, x2, y1, y2);
    return PI * radius * radius; // M_PI is defined in header file
}

int main() {
    int x1, x2, y1, y2;
    printf("Enter the value of x1: ");
    scanf("%d", &x1);
    printf("Enter the value of x2: ");
    scanf("%d", &x2);
    printf("Enter the value of y1: ");
    scanf("%d", &y1);
    printf("Enter the value of y2: ");
    scanf("%d", &y2);

    int (*fptr)(int, int, int, int);
    fptr = &EuclideanDistance;
    int d = fptr(x1, x2, y1, y2);
    printf("Euclidean distance: %d\n", d);

    float area = AreaOfCircle(x1, x2, y1, y2, fptr);
    printf("Area of the circle: %f\n", area);

    return 0;
}
