#include <iostream>
using namespace std;
int main(){
    
    for( int i=1;i<6;i++){
         char a='A';
        
        for( int j=1;j<=6-i;j++){
            cout<<a;
            a=a+1;
        }
       cout<<endl; 
    }
}