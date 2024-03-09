#include<stdio.h>
int main(){
    float radius;
    float area,circumfrence,volume;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=3.14 * radius * radius;
    circumfrence= 2 *3.14 * radius;
    volume=3.14 * radius *radius*radius* 4/3;
    printf("area is %f , circumfrence is %f , volume of sphere is %f",area,circumfrence,volume);
    return 0; 
}