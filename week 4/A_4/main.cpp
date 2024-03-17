#include <iostream>

using namespace std;

int main()
{
    char a[]="abcd";
    cout<<a[-1]<<endl;
    cout<<a[4]<<endl;
    a[4]='h';
    cout<<a<<endl;
    char c[3][5] ={ {'a','b','c','d','e'},{'f','g','h','i','k'},{'l','m','n','p','q'}};
    for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}
