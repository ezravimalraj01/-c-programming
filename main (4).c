#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,sum=0;
    
    printf("enter the value for n: ");
    scanf("%d",&n);
    
    while(n>0){
        sum = sum+(n%10);
        n = n/10;
    }
    printf("sum of digits= %d",sum);
}