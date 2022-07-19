#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    printf("This is program to check given number is divisible by 3 and 2.\n");
    printf("\nEnter any number: ");
    scanf("%d",&x);
    if (x%3==0 && x%2==0)
    {
        printf("Entered number is divisible by both 3 & 2.");
    }
    else
        printf("Number is not divisible by 3 & 2.");

    getch();
    
}