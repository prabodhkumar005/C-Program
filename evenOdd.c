#include<stdio.h>
int even(int n);
int main()
{int n;
printf("enter a number:");
scanf("%d",&n);
printf("your numberis%d",even(n),n);

    return 0;
}
int even(int n){
    if(n%2==0){
        printf("even number");
    }
    else{
        printf("odd number");
    }
}