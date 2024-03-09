#include<stdio.h>
int main(){
    int num,sum=0;
    do{
        printf("enter the number:");
        scanf(" %d",&num);
        sum = sum + num;

    }while(num>=0);
    printf("the sum is: %d",sum-num);
    return 0;
}