#include <iostream>

using namespace std;
struct Point{
    int x, y;
    void passByValue(int _x,int _y){
        x=_x;
        y=_y;
        cout<<"&x ="<<&x<<endl<<"&_x ="<<&_x<<endl;
    }
    void passByRefer(int *_x,int *_y){
        x=*_x;
        y=*_y;
        cout<<"&x ="<<&x<<endl<<"&_x ="<<_x<<endl;
    }
};
int main()
{
    Point p;
    int c=1,d=2;
    int *a=&c;int *b=&d;
    cout<<"&c= "<<&c<<" &d= "<<&d<<endl;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    p.passByValue(c,d);
    p.passByRefer(a,b);
    return 0;
}
