#include<stdio.h>
int main(){
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(ch>= 'a' && ch<='z'){
        printf("%c",ch-32);
    }else{
        printf("%c",ch+32);
  
    }
    return 0;
}