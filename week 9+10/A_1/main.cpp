#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* s1, const char* s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int len = len1 + len2 + 1;
    char* result = new char[len];
    strcpy(result, s1);
    strcpy(result + len1, s2);
    return result;
}
int main()
{
    const char* s1= "Hello";
    const char* s2= "World";
    cout<<concat(s1,s2);

    return 0;
}
