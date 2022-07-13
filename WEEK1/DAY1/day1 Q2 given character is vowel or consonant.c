/*
ALGORITHM:
1.read a character from the user
2.find the character whether it is vowel or consonant and print it
*/


#include <stdio.h>
int main() {
    char ch;
    printf("enter a characater:");
    scanf("%c",&ch);
    if(((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))||((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')))
    printf("vowel");
    else
    printf("consonant");
    return 0;
}
