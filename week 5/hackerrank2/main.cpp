#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      vector <string> vec;
    int n;string a;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    int t,x,y;
    cin>>t;
    cin>>x>>y;
    vec.erase(vec.begin()+t-1);
    vec.erase(vec.begin()+x-1,vec.begin()+y-1);

    //sort(vec.begin(),vec.end());
    cout<<vec.size()<<endl;
    for (int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
