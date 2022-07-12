#include <stdio.h>
int main() {
  int num,sum=0,rem;
  printf("enter a number:");
  scanf("%d",&num);
  while(num)
  {
   rem=num%10;
   sum=sum*10+rem;
   num=num/10;
  }
  while(sum)
  {
      rem=sum%10;
      printf("%c",rem+64);
      sum=sum/10;
  }
}