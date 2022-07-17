#include<stdio.h>
#include<conio.h>
int main(){
    float rs,usd=76.23;
    printf("This is the program to convert rupees in USD.\n");
    printf("Enter amount in INR: ");
    scanf("%f",&rs);
    rs=rs/usd;
    printf("In USD you have $%.2f",rs);
    getch();
}