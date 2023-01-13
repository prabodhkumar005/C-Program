#include<stdio.h>
int cube(int n);
int main()
{int n;
printf("enter the number:");
scanf("%d",&n);
printf("cube of%dis %d",n,cube(n));

    return 0;
}
int cube(int n){
int p;
p=n*n*n;
return p;}
