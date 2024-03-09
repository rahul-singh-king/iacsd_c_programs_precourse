#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the two numbers:");
    scanf("%d %d",&x,&y);
    if(x==y){
        printf("they are equal");
    }
    if(x<y){
        printf("x is less than y");

    }
    printf("The quotient is %d and the remainder is %d",x/y,x%y);
    printf("now accept a number:");
    scanf("%d",&z);
    if(x>y){
        if(y<z && y<x){
            printf("third number does lie between the two given numbers");
        }else{
            printf("no third number lies outside the domain");
        }

    }else{
         if(x<z && z<y){
            printf("third number does lie between the two given numbers");
        }else{
            printf("no third number lies outside the domain");
        }

    }
    return 0;
}