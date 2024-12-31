#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=5-i;j>0;j--){
            cout<<"  ";
        }
        for(int k=1;k<2*i;k++){
            cout <<" b";
        }
       
      cout<<endl;
    }
    return 0;
    }
    