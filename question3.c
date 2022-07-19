#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    printf("This is program to check number is even or odd.\n");
    printf("Enter an number: ");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("Even Number.");
    }
    if (x%2)
    {
        printf("odd Number.");
    }
    getch();
}