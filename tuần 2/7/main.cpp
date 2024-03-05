#include <iostream>

using namespace std;

int main()
{
    int a,b;b=-1;
    do {
        cin>>a;
        if (b!=a) cout<<a<<" ";
        b=a;

    } while (a!=-1);
    return 0;
}
