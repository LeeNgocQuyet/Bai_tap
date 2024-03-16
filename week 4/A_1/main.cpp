#include <iostream>
#define N 5
#define M 3
using namespace std;
//int a[];
int b[N] = {1, 2, 3, 4};
//int b_2 [M] = {1, 2, 3, 4}
int c_1[ ] = {1, 2, 3, 4};

int main()
{
    //int a[];
    for (int i=0;i<N;i++) cout<<b[i]<<" ";
    cout<<endl;
    //for (int i=0;i<M;i++) cout<<b_2[i]<<" ";

    int b_3[N] = {1, 2, 3, 4};
    for (int i=0;i<N;i++) cout<<b_3[i]<<" ";
    cout<<endl;

    /*int b_4[M] = {1, 2, 3, 4};
    for (int i=0;i<M;i++) cout<<b_4[i]<<" ";
    cout<<endl;
    */
    for (int i=0;i<4;i++) cout<<c_1[i]<<" ";
    cout<<endl;
    int c_2[ ] = {1, 2, 3, 4};
    for (int i=0;i<4;i++) cout<<c_2[i]<<" ";
    cout<<endl;
    return 0;
}
