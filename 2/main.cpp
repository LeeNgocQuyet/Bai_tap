#include <iostream>

using namespace std;

void cre(int n,int m){
    for (int i=0;i<n;i++){
        cout<<" ";
    }
    for (int j=0;j<m;j++){
        cout<<"*";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cre(i,n-i);
    }
    return 0;
}
