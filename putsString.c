#include<stdio.h>
int main()
{
    char s[35];
    printf("enter name");
    gets(s);
    puts(s);
    printf("your name is:%s",s);
    return 0;
}