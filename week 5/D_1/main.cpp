#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    double averge=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        averge+=a[i];
    }
    averge=averge/n;
    cout<<averge<<endl;
    double phi =0;
    for (int i=0;i<n;i++){
        phi+=(a[i]-averge)*(a[i]-averge);
    }
    phi=phi/n;
    cout<<phi;
    return 0;
}
