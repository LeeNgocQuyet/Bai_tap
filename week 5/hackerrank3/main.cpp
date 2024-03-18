    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    using namespace std;


    int main() {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        vector<int> vec;
        int n,a;
        cin>>n;
        for (int i=0;i<n;i++){
            cin>>a;
            vec.push_back(a);
        }
        int q;
        cin>>q;
        while (q--){
            int x,y;
            cin>>x;
            y=lower_bound(vec.begin(),vec.end(),x)-vec.begin();
            if (vec[y]!=x) cout<<"No";
            else cout<<"Yes";
            cout<<" "<<y+1<<endl;
        }

        return 0;
    }
