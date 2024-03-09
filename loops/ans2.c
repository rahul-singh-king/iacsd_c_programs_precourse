#include<stdio.h>
int main(){
    int n,x;
    int result=1;
    printf("Enter the number than its power:");
    scanf(" %d %d",&n,&x);
    for(int i=0;i<x;i++){
            result=result*n;
    }
    printf("the result is %d",result);
    return 0;
}