#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int top=0;
    int left=0;
    int right=7;
    int bottom=7;
    for (int i=1;i<8;i++){
        for(int j=1;j<8;j++){
            int dist=min(i,min(j,min(8-i,8-j)));
            cout<<5-dist;
        }
        cout<<endl;
    }
    return 0;
}