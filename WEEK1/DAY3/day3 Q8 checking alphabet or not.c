/*
ALGORITHM
1.read a character from the user
2.find whether the character is alphabet or non alphabet
3.if it is an alphabet print it as alphabet else print it as non alphabet.
*/

#include <stdio.h>
int main() 
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    (((ch>=65) && (ch<=90))||((ch>=97)&&(ch<=122)))?printf("alphabet"):printf("non alphabet");
}
