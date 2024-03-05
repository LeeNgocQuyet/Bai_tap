#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=0;j<n;j++){
            if (i+j==n) cout<<n;
            else cout<<(i+j)%(n);
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
