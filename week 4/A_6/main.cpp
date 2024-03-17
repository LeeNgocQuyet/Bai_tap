#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int a[30];
    srand (time(NULL));
    int rand(void);
    for (int i=0;i<30;i++) a[i]=rand()%100+1;
    for (int i=0;i<30;i++) cout<<a[i]<<" ";
    cout<<endl;
    bool swapped = true;
    for (int temp, k = 29; k > 0 && swapped; k--) {
       swapped = false;
       for (int i = 1; i <= k; i++) {
          if (a[i-1] > a[i]) {
             temp = a[i];
             a[i] = a[i-1];
             a[i-1] =  temp;
               swapped = true;
          }
       }
    }
    for (int i=0;i<30;i++) cout<<a[i]<<" ";
    return 0;
}
