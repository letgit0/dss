#include <iostream>
using namespace std;
int main(){
   char a='A';
    for(int i=0;i<5;i++){
         
        for( int j=0;j<=i;j++){
            
            cout<<a<<" ";
            

        }
       cout<<endl;  a=a+1;
    }
    return 0;
}