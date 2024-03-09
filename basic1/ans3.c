#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5,result;
    printf("enter the marks of all the subjects:");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
    printf("/ntotal:%f  percentage:%f",sub1+sub2+sub3+sub4+sub5,((sub1+sub2+sub3+sub4+sub5)/500) *100);
    return 0;

}