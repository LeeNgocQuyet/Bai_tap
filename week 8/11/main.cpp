#include <iostream>
#include <cstring>
using namespace std;
struct String{
    int n;
    char *str;
    String(const char *s) {
        n = strlen(s) + 1;
        str = new char[n];
        strcpy(str, s);
    }
    deleteString() {
        delete[] str;
    }
    void print() {
        cout << str << endl;
    }
    void append(const char *s) {
        int new_length = n + strlen(s) + 1;
        char *temp = new char[new_length];
        strcpy(temp, str);
        for (int i=n-1;i<new_length;i++){
            temp[i]=s[i-n+1];
        }
        delete[] str;

        str = temp;
        n = new_length;

    }
};
int main()
{
    String greeting("Hi");
	greeting.append(" there");
	greeting.print();
	greeting.deleteString();
    return 0;
}
