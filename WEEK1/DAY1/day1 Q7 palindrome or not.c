/*
ALGORITHM:
1.read a 10 digit number from the  user
2.reverse the number
3.print the reversed number of the original number.
*/


#include <stdio.h>
int main() {
  long int n;
  int rem,temp,sum=0;
  printf("enter a number:");
  scanf("%ld",&n);
  temp=n;
  while(n)
  {
      rem=n%10;
      sum=sum*10+rem;
      n=n/10;
  }
  if(temp==sum)
  printf("palindrome");
  else
  printf("not a palindrome");
}
