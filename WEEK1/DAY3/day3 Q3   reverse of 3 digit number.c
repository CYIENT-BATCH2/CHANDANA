/*
ALGORITHM:
1.read  no.. from user 
2.seperating digit by modulus.
3.adding that digit with multiplication of 10 to previous.
4.storing in to variable ,
5. and printing 
*/
#include <stdio.h>

int main() 
{
    int n,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("after reversing %d",sum);
  
}
