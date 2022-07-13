/*
ALGORITHM-

1.read  no.. from user 
2.seperating digit by modulus.
3.adding that digit with multiplication of 10 to previous.
4.storing in to variable ,
5. and printing .
*/





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
