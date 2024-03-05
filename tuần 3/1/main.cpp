#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
struct Student {
    int age,standard;
    string first_name,last_name;
    Student (){

    }
    Student (int _age,string _first_name,string _last_name,int _standard){
        age=_age;
        first_name=_first_name;
        last_name=_last_name;
        standard=_standard;
    }

};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
