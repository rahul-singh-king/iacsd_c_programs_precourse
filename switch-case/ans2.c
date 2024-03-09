#include<stdio.h>
int main(){
    int x,y;
    char ch;
    printf("Enter the two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Enter the operation to perform(+ , -, / , *):");
    scanf(" %c",&ch);
    switch(ch){
        case '+' :printf("addition:%d",x+y);
                  break;
        case '-' :printf("substraction:%d",x-y);
                  break;
        case '*' :printf("multiplication:%d" , x*y);
                  break;
        case '/' :printf("division:%d",(float)x/y);
                  break;
               
    }
    return 0;
}