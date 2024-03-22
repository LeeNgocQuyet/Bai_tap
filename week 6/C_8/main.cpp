#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int t[n];
    for (int i=0;i<n;i++){
        cin>>t[i];
    }
    sort(t,t+n);
    int sum=0,time=0;
    for (int i=1;i<n;i++){
        time+=t[i-1];
        sum+=time;
    }
    cout<<sum;
    return 0;
}
