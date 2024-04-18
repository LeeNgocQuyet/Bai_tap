#include <iostream>

using namespace std;
struct lowcopy{
    int arr[5];
    void creat(){
        for (int i=0;i<5;i++){
            arr[i]=i;
        }
    }
    void print(){
        cout<<"&arr= "<<&arr<<endl;
        for (int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    lowcopy a;
    a.creat();
    lowcopy b=a;
    a.print();
    b.print();
    return 0;
}
