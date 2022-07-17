#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    printf("Enter an number: ");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("new number is %d",x);
    getch();
}