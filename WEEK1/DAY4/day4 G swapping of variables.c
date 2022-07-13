/*
ALGORITHM:
1.read two numbers from the user
2.take one more variable as temp for swapping
3.swap the numbers using third variable and print it
4.swap the variables without using third variable and print it
*/


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,temp;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    /*with using third variable*/
    printf("with using third variable:\n");
    {
    temp=a;
    a=b;
    b=temp;
    }
    printf("after swapping:a=%d b=%d\n",a,b);
    printf("without using third variable:\n");
    {
    a=a+b;
    b=a-b;
    a=a-b;}
    printf("after swapping:a=%d b=%d\n",a,b);
    return 0;
}
