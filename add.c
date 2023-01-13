#include<stdio.h>
int main()
{
    int first,second,*p,*q,sum;
    printf("enter first number:");
    scanf("%d",&first);
    printf("enter second number:");
    scanf("%d",&second);
   p=&first;;
   q=&second;
    sum= *p + *q;
    printf("sum of entered numbers is%d",sum);
    return 0;
}