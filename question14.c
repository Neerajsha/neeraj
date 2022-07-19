#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    printf("This is program to check given number is divisible by either 7 or 3.\n");
    printf("\nEnter any number: ");
    scanf("%d",&x);
    if (x%7==0 || x%3==0)
    {
        printf("Entered number is divisible by either 7 or 3.");
    }
    else
        printf("Number is not divisible by neither 7 nor 3.");

    getch();
    
}