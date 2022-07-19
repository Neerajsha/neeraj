#include<stdio.h>
#include<conio.h>

int main(){
    int cp,sp,prft,percent;
    printf("Enter the cost price of Product: ");
    scanf("%d",&cp);
    printf("Enter the selling price of Product: ");
    scanf("%d",&sp);

    prft=sp-cp;

    percent=(prft*100)/sp;

    if (percent>0)
    {
        printf("your Profit percentage on product is %d %% ",percent);
    }
    else
        printf("your loss percentage on product is %d %% ",percent);
    
    getch();
}