#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<5;i++){
        for( int j=0;j<i-5;j++){
            cout<<" * ";
        }
       cout<<endl; 
    }
}