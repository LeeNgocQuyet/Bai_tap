#include <iostream>

using namespace std;
struct Point{
    int x, y;
    void print(Point p) {
        cout<<p.x<<" "<<p.y;
    }
};
int main()
{
    Point p;
    cout<<"&p  = "<<&p<<endl<<"&p.x= "<<&p.x<<endl<<"&p.y= "<<&p.y;
    return 0;
}
//Nhận xét : địa chỉ của p và x (trong p) là như nhau
