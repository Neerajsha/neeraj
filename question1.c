#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    printf("The unit digit of number %d is %d",x,x%10);
    getch();
}