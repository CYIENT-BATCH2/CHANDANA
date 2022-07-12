#include <stdio.h>
int main() {
 float celsius,farenheit;
 int choice;
if(choice==1)
{
 printf("enter celsius:");
 scanf("%f",&celsius);
 farenheit=(1.8*celsius)+32;
 printf("%f",farenheit); 
}
if(choice==2)
{
  printf("enter farenheit");
  scanf("%f",&farenheit);
  celsius=((farenheit-32)*5)/9;
printf("%f",celsius);
}