#include<stdio.h>

void star(int s);
void character(int s);
void number(int s);
int main(){
    int size,ch;
    printf("enter the choice of what pattern you want:");
    printf("\n1.star pattern *");
    printf("\n2.character pattern A,B,C");
    printf("\n3.number pattern 1,2,3");
  
    printf("\nenter the size:");
    scanf("%d",&size);
    printf("\nenter the choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1: star(size);
                break;
        case 2: character(size);
                break;
        case 3: number(size);
                break;
        default: printf("enter a valid choice");
                break;
    }
    
return 0;
}
void star(int s){
for(int i=1;i<=s;i++){
        for(int j=1;j<=i;j++){
           printf("%c",'*');
        }
        printf("\n");
    }
}
void character(int s){
for(int i=65;i<=s+655;i++){
        for(char j=65;j<=i;j++){
           printf("%c",j);
        }
        printf("\n");
    }
}
void number(int s){
for(int i=1;i<=s;i++){
        for(int j=1;j<=i;j++){
           printf("%d",j);
        }
        printf("\n");
    }
}