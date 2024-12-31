#include <iostream>
using namespace std;
int main(){
    for(int i=4;i>0;i--){
        for( int j=i;j>=1;j--){
            cout<<"*";
        }
        for(int k=(4-i)*2;k>0;k--){
            cout<<" ";
        }
         for( int j=1;j<=i;j++){
            cout<<"*";
        }
        
       cout<<endl; 
    }
    for(int i=1;i<5;i++){
        for( int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<(4-i)*2;k++){
            cout<<" ";
        }
         for( int j=i;j>=1;j--){
            cout<<"*";
        }
        
       cout<<endl; 
    }
    return 0;
}