#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,n;
    printf("Enter the three digit number: ");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n;
    n=a+b+c;
    printf("The sum of your digit is %d",n);
    getch();
}