#include <iostream>
using namespace std;
int main()
{
    char a = 'E';
    char b = 'E';
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            cout << a;
            a = a + 1;
        }
        b=b-1;  a=b;
        cout<<endl;
    }
    return 0;
}