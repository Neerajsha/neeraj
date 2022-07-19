#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    printf("This is program to check number is Divisible by 5 or not.\n");
    printf("Enter an number: ");
    scanf("%d",&x);
    if (x%5==0)
    {
        printf("Number is divisible by 5.");
    }
    if (x%5)
    {
        printf("Number is not-divisible by 5.");
    }
    getch();
}