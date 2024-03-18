#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string,int> name;
    int t;
    cin>>t;
    while (t--){
        int x, z;string y;
        cin>>x;
        if (x==1) {
            cin>>y>>z;
            if (name.find(y)==name.end())
            name.insert(make_pair(y,z));
            else name[y]+=z;
        }
        if (x==2) {
            cin>>y;
            name.erase(y);
        }
        if (x==3) {
            cin>>y;
            cout<<name[y]<<endl;
        }
    }
    return 0;
}



