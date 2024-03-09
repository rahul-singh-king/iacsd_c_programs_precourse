//Accept dimensions of a cylinder and print the surface area and volume 
//. Define a constant variable pi=3.14.
//7. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) 

#include<stdio.h>
int main(){
    int radius,height,c,k,f;
    float area,volume;
    const float pi=3.14;
    printf("enter the dimensions of the cylinder:");
    scanf("%d %d",&radius,&height);
    area= pi*2*radius*radius + pi*2*radius*height;
    volume=pi*radius*radius*height;
    printf("surface area of the cylinder is %f and volume of the cylinder is %f",area,volume);
    return 0;
    }