#include <stdio.h>

int main() {
  int n;
  printf("enter no.of students:");
  scanf("%d",&n);
  printf("total no.of handshakes are %d",n*(n-1));
}