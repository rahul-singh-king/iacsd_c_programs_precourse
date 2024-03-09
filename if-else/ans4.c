#include<stdio.h>
int main(){
    char c;
    printf("enter the lowercase character:");
    scanf("%c",&c);
    if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u'){
        printf("vowels");
    }else{
        printf("consonants");

    }
    return 0;
}