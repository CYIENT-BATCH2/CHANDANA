/*
ALGORITHM:
1.read two inputs from the user.
2.apply AND,OR,LOGICAL NOT gates for those inputs and print it
*/

#include <stdio.h>
int main() {
 int n1,n2; 
 char ch;
 printf("enter two inputs:");
 scanf("%d %d",&n1,&n2);
 printf("enter operator\n");
 scanf("%c",&ch);
 printf(" AND gate output:%d\n",n1&&n2);
 printf("OR gate output:%d\n",n1||n2);
 printf("output of n1 is %d n2 is %d\n",!n1,!n2);
}
