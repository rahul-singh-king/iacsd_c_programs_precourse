#include<stdio.h>
int main(){
    int basic_salary;
    float net_salary;
    printf("enter the basic salary:");
    scanf("%d",&basic_salary);
    //PF is 2 % of   basic Tax is 3 % of   basic HRA is 5 %  basic DA is 8 % of basic
    net_salary = basic_salary - (0.02 * basic_salary + 0.03/100* basic_salary )+ (0.05)*basic_salary + (0.08)*basic_salary ;
    printf("The net salary is : %f",net_salary);
    return 0;

}