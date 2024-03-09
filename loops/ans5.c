#include<stdio.h>
int main(){
    int x;
    printf("enter the number:");
    scanf(" %d",&x);
    for(int i = 2; i<x;i++){
        if(x%i==0){
            printf("the factors are: %d \n",i);
        }
    }
    return 0;
}