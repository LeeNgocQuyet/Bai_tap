#include <iostream>

using namespace std;

int count_symmetry(int a,int b){
    int count=0;
    for (int i=a;i<=b;i++){
        string s =to_string(i);
        bool res=1;
        for (int i=0;i<=s.size()/2;i++){
            if (s[i]!=s[s.size()-1-i]) res=0;
        }
        if (res) count++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        cout<<count_symmetry(a,b)<<endl;
    }
    return 0;
}
