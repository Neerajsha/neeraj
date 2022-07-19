//  Write a program to check whether a given number is an even number or an odd 
// number without using % operator.

#include<stdio.h>
#include<conio.h>
int main(){
    int x,number;
    printf("Enter number: ");
    scanf("%d",&x);
    number=x&1;
    if(number==1)
        printf("odd number");
    else
        printf("Even number");
    getch();
}