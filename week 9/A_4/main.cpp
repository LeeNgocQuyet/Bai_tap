#include <iostream>

using namespace std;
int* p = new int;
void giaiphong(){
    int a = 10;

    *p = a;
    cout<<"*p= "<<*p<<endl;
}
int main() {
    giaiphong();
    //biến a đã xóa sau khi giaiphong() kết thúc
    //con trỏ p trỏ tới vùng không xác định -> lỗi
    cout<<"*p= "<<*p;
    delete p;
    return 0;
}
