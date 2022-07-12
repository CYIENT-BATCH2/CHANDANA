#include <stdio.h>
int main() {
  int n,rem,temp,sum=0;
  printf("enter a number:");
  scanf("%d",&n);
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