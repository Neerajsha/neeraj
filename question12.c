#include<stdio.h>
#include<conio.h>
int main(){
    char c;
    printf("Enter an charecter: ");
    scanf("%c",&c);

    if (c>='A' && c<='Z')
    {
        printf("Uppercase alphabet.");
    }
    else if (c>='a' && c<='z')
    {
        printf("lowercase alphabet.");
    }
    else
        printf("Invalid ! ");
    
    getch();

}