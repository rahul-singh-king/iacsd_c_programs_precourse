#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c) != 180){
        printf("this is not a triangle");

    }
    else{
        printf("Yes it is a triangle");
    }
    return 0;
}