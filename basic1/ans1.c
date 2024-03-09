#include<stdio.h>
int main(){
    float radius;
    printf("enter the circumfrence: ");
    scanf("%f",&radius);
    printf("circumfrence is %f and area is %f ", 2 * 3.14* radius,3.14*radius*radius);
    return 0;
}