#include<stdio.h>

int main(){
    int hour,minute;
    printf("Enter hours and minutes:");
    scanf("%d %d",&hour,&minute);
    printf("\"%d:%d\" converted to \"%d-Hours and %d-minutes\"",hour,minute,hour,minute);
    return 0;
}