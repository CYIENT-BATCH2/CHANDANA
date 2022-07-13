/*
ALGORITHM:
1.read the seating numbers of 9 students.
2.check consecutively whether they are in acending or not
3.if not in order sort and print the order
*/


// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,temp;
    printf("enter roll numbers of students:");
    scanf("%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
again:if(n1>n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
        goto again;
    }
    if(n2>n3)
    {
       temp=n2;
        n2=n3;
        n3=temp;  
        goto again;
    }
     if(n3>n4)
    {
       temp=n3;
        n3=n4;
        n4=temp;  
        goto again;
    }
    if(n4>n5)
    {
       temp=n4;
        n4=n5;
        n5=temp; 
        goto again;
    }
    if(n5>n6)
    {
       temp=n5;
        n5=n6;
        n6=temp; 
        goto again;
    }
    if(n6>n7)
    {
       temp=n6;
        n6=n7;
        n7=temp;  
        goto again;
    }
    if(n7>n8)
    {
       temp=n7;
        n7=n8;
        n8=temp; 
        goto again;
    }
    if(n8>n9)
    {
        temp=n8;
        n8=n9;
        n9=temp;
    }
   printf("after sorting %d %d %d %d %d %d %d %d %d",n1,n2,n3,n4,n5,n6,n7,n8,n9); 
}
