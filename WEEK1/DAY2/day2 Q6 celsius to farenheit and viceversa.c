/*
ALGORITHM:
1.read choice from the user to convert celsius to farenheit or farenheit to celsius
2.if user choice is celsius to farenheit,read the temparature in celsius and convert it into farenheit.
3. if user choice is farenheit to celsius,read the temparature in farenheit and convert it into celsius.
*/


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
