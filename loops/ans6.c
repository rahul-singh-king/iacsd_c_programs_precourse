#include<stdio.h>
int main(){
    int num1,num2;
    printf("the two numbers are:");
    scanf(" %d %d", &num1,&num2);
    int small=(num1>=num2?num2:num1);
    for(int i=small;i>=1;i--){
        if(num1%i==0 && num2%i==0){
            printf("the gcd is %d",i);
            break;
        }
    }
    return 0;
       
}