#include<stdio.h>
#include<conio.h>

int main()
{
    int radius;
    float area_circle,pi=3.14;

    printf("Enter the radius: ");
    scanf("%d",&radius);
    area_circle= pi*radius*radius;
    printf("Area of circle is %.2f having the radius %d",area_circle,radius);
    getch();
}