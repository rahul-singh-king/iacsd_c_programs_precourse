#include<stdio.h>
void halfpyramid(int);
void pyramid(int);
int main(){
    int size,ch;
    printf("enter the pyramid pattern type you want:\n");
    printf("1.pattern1 = ****\n");
    printf("              ***\n");
    printf("               **\n");
    printf("                *\n");
    printf("2.pattern2 = ********\n");
    printf("              ******\n");
    printf("               ****\n");
    printf("                **\n");
    printf("                *\n");
    printf("enter the choice");
    scanf("%d",&ch);
    printf("enter the pyramid size");
    scanf("%d",&size);
    if(ch==1){
       halfpyramid(size);
    }else{
        pyramid(size);
    }
}

void halfpyramid(int s){

     


        int i=0;
        while(i<=s){//1 5  2 5  3 5 4 5  5 5
           int j=s-1;
           int k=1;
           while(k<i){
              printf(" ");
           }
           while(j<=s-i){
                printf("%s",'*');
                
           }
           
           printf("\n");
          
        




     }


void pyramid(int s){
        printf("ddgdjf");
}