#include<stdio.h>
int main(){
    int day,month,year;
    printf("Enter date followed by month and year: ");
    scanf("%d%d%d",&day,&month,&year);
    printf("\"%d/%d/%d\"",day,month,year);
    printf("\nchanged format is \"day-%d ,month-%d ,year-%d\"",day,month,year);
    return 0;
}