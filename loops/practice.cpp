#include<iostream>
//iostream  - cin & cout 
using namespace std;

int main(){
    //1-50 prime no
    cout<<"this program is to print numbers b//w 1-50"<<endl;
    //for(intializer;termination;condition)

    for(int i=2;i<=50;i++){
        bool flag=false;
        for(int j=i;j<=i/2;j--){
            if(i%j==0){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<"this is a prime number:"<<i<<endl;
        }

    }
    return 0;  
    
}
