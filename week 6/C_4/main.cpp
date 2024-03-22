#include <bits/stdc++.h>

using namespace std;

int check(int i,int j,bool **arr){
    int dem=0;
    if (arr[i-1][j-1]) dem++;
    if (arr[i-1][j]) dem++;
    if (arr[i-1][j+1]) dem++;
    if (arr[i][j-1]) dem++;
    if (arr[i][j+1]) dem++;
    if (arr[i+1][j-1]) dem++;
    if (arr[i+1][j]) dem++;
    if (arr[i+1][j+1]) dem++;
    return dem;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    bool **bomb;
    bomb = new bool*[m+2];
    for (int i=0;i<=m+1;i++){
        bomb[i]= new bool[n+2];
    }

    for (int i=0;i<=n+1;i++){
        for (int j=0;j<=m+1;j++){
            bomb[i][j]=0;
        }
    }
    char x;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>x;
            if (x=='*') bomb[i][j]=1;
        }
    }

    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (bomb[i][j]) cout<<"* ";
            else cout<<check(i,j,bomb)<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < m; i++) {
        delete[] bomb[i];
    }
    delete[] bomb;
    return 0;
}
