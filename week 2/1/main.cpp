#include <iostream>
#include <math.h>

using namespace std;

bool snt(int n){
    if (n<2) return 0;
    for (int i=2;i<sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if (snt(n)) cout<<"yes";
    else cout<<"no";
    return 0;
}
