#include<stdio.h>
void namste();
void bonjour();
int main()
{
printf(" enter i for indian and f for french:");
char ch;
scanf("%c",&ch);
if(ch=='i'){
    printf("namste");

}else{
    printf("bonjour");
}
    return 0;
}
void namste(){
printf("namste\n");}

void bonjour(){
printf("bonjour\n");}