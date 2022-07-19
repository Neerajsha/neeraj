#include<stdio.h>
#include<conio.h>
int main(){
    int n1,n2,n3,result=0;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    (n1>n2)?(result+=n1):(result+=n2);
    (result>n3)?printf("greatest is %d",result):printf("greatest is %d",n3);
    getch();

}