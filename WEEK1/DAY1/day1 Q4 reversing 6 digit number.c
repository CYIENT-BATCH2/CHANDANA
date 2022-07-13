/*
ALGORITHM:
1.read a 6 digit number from the user.
2.check whether the number is having zero as digit or not
3.if it is not having zero as digit,then reverse that number.
*/

#include <stdio.h>
int main() {
    int n,rem,sum=0,temp=0;
    printf("enter a 6-digit number:");
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        if(rem==0)
        {
        temp=1;
        printf("it includes zero");
        break;
        }
        else{
            sum=sum*10+rem;
            n=n/10;
        }
        
    }
   if(temp==0)
   printf("after reversing the number %d",sum);
}
