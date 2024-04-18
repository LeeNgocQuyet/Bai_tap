#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1,s2 ;
    cin>>s1>>s2;
    int count = 0;
    int pos = 0;
    while ((pos = s2.find(s1, pos)) != string::npos) {
        count++;
        pos += s1.length();
    }
    cout<< count<<endl;
    return 0;
}
