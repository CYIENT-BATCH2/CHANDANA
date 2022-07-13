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