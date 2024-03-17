#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <int> vec;
    int n,a;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    return 0;#include <cmath>
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
    sort(vec.begin(),vec.end());
    for (int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
