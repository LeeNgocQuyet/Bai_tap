#include <iostream>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100;// lỗi ở dòng này do p2 v
    //vì bộ nhớ được trỏ tới bởi p2 đã bị delete
    cout << *p2;
    delete p2;
    return 0;
}
