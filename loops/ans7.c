#include<stdio.h>
int main(){
    int choice,rad,l,b,breadth,height;
    while (choice!=4)
   {
    printf("enter the choice:\n");
    printf("1.Compute area of a circle\n");
    printf("2.Compute area of a rectangle\n");
    printf("3.Compute area of a triangle\n");
    printf("4.Exit\n");
    printf("choice:");
    scanf("%d" , &choice);
        if(choice==1){
            printf("enter the radius of the circle:");
            scanf("%d",&rad);
            printf("the area of the circle is:%f",3.14*rad*rad);
            printf("\n");

        }else if(choice==2){
            printf("enter the length & breadth of the rectangle:");
            scanf("%d %d",&l,&b);
            printf("the area of the rectangle is:%d ",l*b);
            printf("\n");

        }else if(choice==3){
            printf("enter the breadth & height of the triangle:");
            scanf("%d %d",&breadth,&height);
            printf("the area of the triangle is:%f",0.5*breadth*height);
            printf("\n");
        }else if(choice==4){
            
        }else{
            printf("Enter a valid choice");
        }
   }
    return 0;
   
}