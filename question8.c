#include<stdio.h>
#include<conio.h>
int main(){
    int x,result;
    printf("Enter number: ");
    scanf("%d",&x);
    result=x&1;
    if(result==1)
        printf("odd number");
    else
        printf("Even number");
    getch();
}