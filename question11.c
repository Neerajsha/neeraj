#include<stdio.h>
#include<conio.h>

int main(){
    int n1,n2,n3,n4,n5;

    printf("Enter marks of first subject: ");
    scanf("%d",&n1);
    printf("Enter marks of second subject: ");
    scanf("%d",&n2);
    printf("Enter marks of third subject: ");
    scanf("%d",&n3);
    printf("Enter marks of fourth subject: ");
    scanf("%d",&n4);
    printf("Enter marks of fifth subject: ");
    scanf("%d",&n5);
    
    if (n1>=33 && n2>=33 && n3>=33 && n4>=33 && n5>=33)
    {
       printf("Congrats! You are pass.");
    }
    else
        printf("You are fail !");

    getch();
}