//  Write a program to print greater between two numbers. Print one number of both are 
// the same.

#include<stdio.h>
#include<conio.h>
int main(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    (n1>=n2)?printf("greater number is %d",n1):printf("greater number is %d",n2);
    getch();
}