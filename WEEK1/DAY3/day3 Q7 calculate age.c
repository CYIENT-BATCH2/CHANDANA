/*ALGORITHM:
1.read a character from the user
2.find whether the character is alphabet or non alphabet
3.if it is an alphabet print it as alphabet else print it as non alphabet.
*/
#include <stdio.h>
int main() 
{
    int year,month;
    float age,yrd,md;
    printf("enter the year");
    scanf("%d",&year);
    printf("enter the month");
    scanf("%d",&month);
    yrd=(2022-year)*12;
    md=(7-month);
    age=(yrd+md)/12;
    printf("age of the person is %f:",age);
}
