#include<stdio.h>
int sum(int a,int b);
int main()
{int a,b;
printf("enter 1st number:");
scanf("%d",&a);
printf("enter 2nd number:");
scanf("%d",&b);
int s=sum(a,b);
printf("sum is:%d\n",s);
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}