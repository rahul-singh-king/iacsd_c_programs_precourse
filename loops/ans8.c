#include<stdio.h>
int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
            int flag=0;

    for(int j=2;j<i;j++){
        if(i%j==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("the prime numbers are : %d  \n",i);
    }
    }
    return 0;
}