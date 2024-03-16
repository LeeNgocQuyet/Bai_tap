#include <iostream>
#include <string>
using namespace std;
char daytab[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};

char daytab_2[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};

char daytab_3[2][12] = {
  {31,30,31,30,31,31,30,31,30,31},
  {31,30,31,30,31,31,30,31,30,31}
};

char daytab_4[2][12] = {
  31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};

char daytab_5[] = {
  31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};


int main()
{
    for (int i=0;i<2;i++){
        for (int j=0;j<12;j++){
            cout<<daytab[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<12;j++){
            cout<<daytab_2[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0;i<2;i++){
        for (int j=0;j<12;j++){
            cout<<daytab_3[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0;i<2;i++){
        for (int j=0;j<12;j++){
            cout<<daytab_4[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
