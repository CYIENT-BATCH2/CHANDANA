// Online C compiler to run C program online
/*
1. read a function named as G_Msg_SteeringInformation_Byte with size iof three elements
2. calculate values  of array to function 
3.print all elements of an array using function

*/
#include <stdio.h>
void fun(unsigned char G_Msg_SteeringInformation_Byte[],int n);
int main() {
    unsigned char G_Msg_SteeringInformation_Byte[3];
    G_Msg_SteeringInformation_Byte[0]=3;
    G_Msg_SteeringInformation_Byte[1]=241;
    G_Msg_SteeringInformation_Byte[2]=0;
    fun(G_Msg_SteeringInformation_Byte,3);
    return 0;
}
void fun(unsigned char G_Msg_SteeringInformation_Byte[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%u ",G_Msg_SteeringInformation_Byte[i]);
    }
}
