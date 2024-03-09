#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if((x % 5 == 0) && ( x % 7 == 0)){
        printf("true");
    }else{
        printf("False");
    }
    return 0;
}