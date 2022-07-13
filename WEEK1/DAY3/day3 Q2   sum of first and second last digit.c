#include <stdio.h>

int main() 
{
    int n,rem1,rem2,sum;
    printf("enter a number:");
    scanf("%d",&n);
    rem1=n/10000;
    rem2=(n/10)%10;
    sum=rem1+rem2;
    printf("SUM is %d",sum);
  
}