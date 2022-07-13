/*
ALGORITHM:
1.read the phone number of the user 
2.calculate sum of digits of that phn number
3.print the final sum
*/


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
