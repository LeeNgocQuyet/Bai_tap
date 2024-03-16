#include <iostream>
#define N 5
#define M 3
using namespace std;
//char a_1[];
char b_1[N] = "abcd";
//char b_2[M] = "abcd";
char c_1[ ] = "abcd";

int main()
{
    //char a_2[];
    for (int i=0;i<N;i++) cout<<b_1[i]<<" ";
    cout<<b_1;
    cout<<endl;

    cout<<sizeof(c_1)<<endl;

    char c_2[ ] = "abcd";
    cout<<sizeof(c_2);
    return 0;
}
