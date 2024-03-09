#include<stdio.h>
int main(){
    char c;
    printf("enter the character:");
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("it is a lowercase character");
    }else{
        printf("it is an uppercase character");
    }
    return 0;
}