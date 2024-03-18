#include <iostream>

using namespace std;
int dem[10];

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
        dem[a[i]]++;
    }
    for (int i=0;i<=9;i++) cout<<dem[i]<<" ";
    return 0;
}
