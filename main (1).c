#include <stdio.h>
#include <conio.h>

void main(){
    int a,b;
    char op;

    printf("enter the value for a: ");
    scanf("%d",&a);

    printf("enter the value for b: ");
    scanf("%d",&b);

    printf("enter the operator: ");
    scanf("%c",&op);

    switch(op){
    case'+':
        printf("the sum of a & b is %d",a+b);
    case'-':
        printf("the sum of a & b is %d",a-b);
    case'*':
        printf("the sum of a & b is %d",a*b);
    case'/':
        printf("the sum of a & b is %d",a/b);

    }
    getch();
}