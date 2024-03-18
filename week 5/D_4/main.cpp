#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int line=1;
    vector <int> pas;
    while (n--){
        pas.push_back(1);
        vector<int> new_pas;
        new_pas.resize(pas.size());
        new_pas[0]=1;
        for (int i=1;i<pas.size();i++){
            new_pas[i]=pas[i]+pas[i-1];
        }
        for (int i=0;i<new_pas.size();i++) cout<<pas[i]<<" ";
        pas=new_pas;
        cout<<endl;
    }
    return 0;
}
