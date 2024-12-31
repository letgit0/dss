#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=5-i;j>0;j--){
            cout<<" ";
        }
        char b='A';
        for(int k=1;k<2*i;k++){
            cout <<b;
            if(k>=i){
                b=b-1;
            }
            else {
                b=b+1;
            }
        }
       
      cout<<endl;
    }
    return 0;
    }
    