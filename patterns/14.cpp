#include <iostream>
using namespace std;
int main(){
   
    for(int i=0;i<5;i++){
         char a='A';
        for( int j=0;j<=i;j++){
            
            cout<<a<<" ";
            a=a+1;

        }
       cout<<endl; 
    }
    return 0;
}