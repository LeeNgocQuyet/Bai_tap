#include <iostream>

using namespace std;
int count_even(int *arr, int n) {
  int count = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] % 2 == 0) {
      ++count;
    }
  }
  return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int *a= arr;
    cout<<count_even(a, 5)<<endl;
    cout<<count_even((a+sizeArr - 5), 5)<<endl;
    return 0;
}
