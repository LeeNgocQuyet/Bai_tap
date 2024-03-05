#include <iostream>

using namespace std;

int main()
{
    int t;
    long long row=9999999,col=9999999;
    cin>>t;
    while (t--){
        long long a,b;
        cin>>a>>b;
        if (row>a) row=a;
        if (col>b) col=b;
    }
    cout<<row*col;
    return 0;
}
