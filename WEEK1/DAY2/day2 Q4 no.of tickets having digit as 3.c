/*
ALGORITHM:
1.read the no. of tickets from the user as input
2.read the ticket numbers also
3.count the tickets which are having digit as 3.
*/


#include <stdio.h>
int main() {
  int rem,n,i,count=0;
  printf("enter no.of tickets:");
  scanf("%d",&n);
  int a[n];
  printf("enter ticket numbers:");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
      while(a[i])
      {
          rem=a[i]%10;
          if(rem==3)
          {
              count=count+1;
              break;
          }
          else
          a[i]=a[i]/10;
      }
  }
  printf("total no.of tickets having the digit as '3' are %d",count);
}
