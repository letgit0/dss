#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<4;i++){
        for( int j=0;j<=i;j++){
            cout<<"*";
        }
       cout<<endl; 
    }
    for(i=0;i<5;i++){
        for( int j=0;j<5-i;j++){
            cout<<"*";
        }
       cout<<endl; 
    }
    return 0;
}