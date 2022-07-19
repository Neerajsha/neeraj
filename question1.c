#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("This is program to check number is positive or Non-positive.\n");
    printf("\nEnter an number: ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("Number is positive.");
    }
    if (n<=0)
    {
        printf("Number is Non-positive.");
    }
    
    getch();
}