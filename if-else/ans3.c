#include<stdio.h>
int main(){
    int salary=300000;
    if (salary<150000){
        printf("tax=0");
    }else if(salary>150000 && salary<300000){
        printf("tax=20%");
    }else{
        printf("tax=30%");
    }
}