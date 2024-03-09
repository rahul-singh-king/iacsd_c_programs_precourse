#include<stdio.h>
int main(){
    int x;
    printf("Enter the character:");
    scanf(" %d", &x);
    for(int i=x-1;i>1;i--){
        x=x*i;
    }
    printf(" %d",x);
    return 0;
}