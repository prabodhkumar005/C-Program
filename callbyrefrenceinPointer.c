#include<stdio.h>
void swap(int* x,int* y);
void swap(int *x,int *y)
{
int a=*x;
int b=*y;
int temp;
temp=a;
a=b;
b=temp;
printf("after swapping the valus is %dand %d",a,b);
}

int main()
{
int a=2;
int b=3
swap(&a,&b)
printf("the value of a is %sd",a);
printf("the value of b is %d",b);
return 0;
}