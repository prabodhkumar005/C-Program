#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(n%2==0){
        printf("even number",n);
    } else{
        printf("odd number");
    }
    return 0;
}