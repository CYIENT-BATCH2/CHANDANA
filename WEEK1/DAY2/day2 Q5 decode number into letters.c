/*
ALGORITHM:
1.read a message in the form of digits from the user.
2.extract digit by digit and find the ASCII value of the character.
3.decode each character and print it.
*/


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
