#include<stdio.h>
#include<conio.h>
int main(){
    int n,count=0,result=0;
    printf("Enter an number: ");
    scanf("%d",&n);
    result=n & 1;
    count++;
    if(result==1)
    {
        printf("%d",count);
    }
    n=n>>1;

    result=n&1;
    count++;
    if(result==1)
    {
        printf("%d",count);
    }
    n=n>>1;
    result=n&1;
    count++;
    if(result==1)
    {
        printf("%d",count);
    }
    n=n>>1;
    result=n&1;
    count++;
    if(result==1)
    {
        printf("%d",count);
    }
    n=n>>1;
    result=n&1;
    count++;
    if(result==1)
    {
        printf("%d",count);
    }
    n=n>>1;

    getch();
}