#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    printf("The number is %d and without last digit is %d",x,x/10);
    getch();
}