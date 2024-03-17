#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    bool res=1;
    cin>>s;
    for (int i=0;i<=s.size()/2;i++){
        if (s[i]!=s[s.size()-1-i]) res=0;
    }
    if (res) cout<<"yes";
    else cout<<"no";
    return 0;
}
