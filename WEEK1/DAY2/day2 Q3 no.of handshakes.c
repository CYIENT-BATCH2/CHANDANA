/*
ALGORITHM:
1.read the number no.of students from the user.
2.calculate the number of handshakes done in the classes.
3.print the total number of handshakes. 
*/

#include <stdio.h>
int main() {
  int n;
  printf("enter no.of students:");
  scanf("%d",&n);
  printf("total no.of handshakes are %d",n*(n-1));
}
