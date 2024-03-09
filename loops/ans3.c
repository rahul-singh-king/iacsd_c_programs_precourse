#include<stdio.h>
int main(){
    int n;
    char ch;
    printf("Enter the character:");
    scanf(" %c",&ch);
    printf("enter the number of characters after the above character wanted");
    scanf(" %d",&n);
    for(int i=1;i<=n;i++){
        ch=ch+1;
        printf("the next character is %c \n",ch);
    }
    return 0;
}