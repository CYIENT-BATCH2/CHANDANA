/*
ALGORITHM:
1.read a character from the user as input.
2.find the ASCII value of the character and print it.
*/

#include <stdio.h>
int main() {
  char ch;
  printf("enter a character:");
  scanf("%c",&ch);
  printf("ASCII value of %c is %d",ch,ch);
}
