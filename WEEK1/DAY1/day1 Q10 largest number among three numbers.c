/*
ALGORITHM:
1.read three inputs from the user.
2.find the largest number among those three inputs.
3.print the largest number.
*/

#include <stdio.h>
int main() {
 int a,b,c;
 printf("enter three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 if((a>b)&&(a>c))
 printf("a is big:");
 if((b>c)&&(b>>a))
 printf("b is big");
 if((c>a)&&(c>b))
 printf("c is big");
}
