#include<stdio.h>
void printtable(int n);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d\n",&n);

    printtable(n);//argument/actual parameter
    return 0;
}
void printtable(int n) //parameter/formel parameter
{
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i*n);
    }
}