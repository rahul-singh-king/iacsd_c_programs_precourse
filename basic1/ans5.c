#include<stdio.h>
int main(){
    int num1,num2,temp,choice;
    printf("Enter the two numbers:\n");
    printf("number1:");
    scanf("%d",&num1);
    printf("number2:");
    scanf("%d",&num2);
    printf("enter the way you want to interchange data\n1.swap \n2.arithmatic operation");
    scanf("%d",&choice);
    switch(choice){
        case 1: temp=num1;
        num1=num2;
        num2=temp;
        printf("The two numbers after exhange is number1:%d and number2: %d ",num1,num2);
        break;
        case 2: num1= num1+num2;
                num2= num1-num2;
                num1 = num1 - num2;
                printf("The two numbers after exhange is number1:%d and number2: %d ",num1,num2);
                break;
    }
    return 0;
}