#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],mn=999999,mx=-999999,dem=0,sum=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
        if (a[i]%2==0) sum+=a[i];
        else dem++;
    }
    cout<<mn<<endl<<mx<<endl<<sum<<endl<<dem;
    return 0;
}
