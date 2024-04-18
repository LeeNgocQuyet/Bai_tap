#include <iostream>

using namespace std;
void dequy(int *a,int *x,int left,int right) {
    if (left>right) cout<<"khong";
    else {
        int mid= (left+right)/2;

        if (a[mid]== *x) cout<<mid+1;
        else {
            if (a[mid]< *x) dequy(a,x,mid+1,right);
            if (a[mid]> *x) dequy(a,x,left,mid-1);
        }
   }
}

int main() {
    int arr[] = {1, 2, 4, 6, 8, 10, 12, 17, 19, 20};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int *a=arr;
    int left=0,right=sizeArr;
    int b;
    cin>>b;
    int *x=&b;
    dequy(a,x,left,right);
    return 0;
}
