#include<stdio.h>
int main(){
    int num1,den1,num2,den2;
    char ch;
    printf("enter the two numbers:");
    scanf("%d %d %d %d",&num1,&den1,&num2,&den2);
    printf("enter the choice of operation(+,-,*):");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+':printf("addition: %d" ,(num1*den2+num2*den1)/den1*den2);
        break;
    case '-':printf("substraction: %d" ,(num1*den2-num2*den1)/den1*den2);
        break;
    case '*':printf("multiplication: %d" ,(num1 * num2) / (den1 * den2));
        break;
    default: printf("bye bye");
    break;
    }
    return 0;
    
}