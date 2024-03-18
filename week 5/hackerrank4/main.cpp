#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    set<int>::iterator itr;
    int t;
    cin>>t;
    int x,y,z;
    while (t--){
        cin>>x>>y;
        if (x==1)  s.insert(y);
        if (x==2) s.erase(y);
        if (x==3) {itr=s.find(y);if (itr==s.end()) cout<<"No";
            else cout<<"Yes";cout<<endl;}

    }
    return 0;
}
