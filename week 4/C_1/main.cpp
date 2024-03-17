#include <iostream>
#define N 10000
using namespace std;
bool seen[N];
int main()
{
    int a[N];
    for (int i=0;i<N;i++) {cin>>a[i];if (seen[a[i]]==1) {cout<<"yes";return 0 ;} seen[a[i]]=1;}
    cout<<"no";
    return 0;
}
