#include <stdio.h>
int main() {
 long int n;
 int rem,sum=0;
 printf("enter phone number of user:");
 scanf("%ld",&n);
 while(n)
 {
     rem=n%10;
     sum+=rem;
     n=n/10;
 }
 printf("sum is %d",sum);
}