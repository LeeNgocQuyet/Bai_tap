#include <iostream>

using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    //lỗi do delete là giải phóng bộ nhớ của con trỏ khai báo bằng new char[]
    //nhưng ở đây c được trỏ tới a chứ không phải new char[]
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
    return 0;
}
