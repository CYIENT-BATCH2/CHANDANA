/*
ALGORITHM-W1D1Q3
1.read a input as radius from the user.
2.calculate the area of the garden.
3.print the area.
*/

#include <stdio.h>
int main() {
    float r,area;
    printf("enter radius of the garden is:");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area of the garden is %f",area);
    return 0;
}
