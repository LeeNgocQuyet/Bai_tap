#include <bits/stdc++.h>
#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)
using namespace std;
typedef struct bangdiem {
    string name;
    double m,p,e;
    double averge;
    bangdiem (){
        name="";
        m=0;
        p=0;
        e=0;
        averge=0;
    }
    bangdiem (double _m,double _p,double _e){
        m=_m;
        p=_p;
        e=_e;
        averge=(_m+_p+_e)/3;
    }
    void cal(){
        averge=(m+p+e)/3;
    }
}person;
void sort_by_math(person arr[] , int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if (arr[i].m < arr[j].m) SWAP(person,arr[i],arr[j]);
        }
    }
}

void sort_by_phi(person arr[] , int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if (arr[i].p < arr[j].p) SWAP(person,arr[i],arr[j]);
        }
    }
}

void sort_by_eng(person arr[] , int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if (arr[i].e < arr[j].e) SWAP(person,arr[i],arr[j]);
        }
    }
}

void sort_by_aver(person arr[] , int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if (arr[i].averge < arr[j].averge) SWAP(person,arr[i],arr[j]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    bangdiem sv[n];

    for (int i=0;i<n;i++){
        cin>>sv[i].m>>sv[i].p>>sv[i].e;
        sv[i].name = "sinh vien  ";
        sv[i].name[10] = i+1+'0';
        sv[i].cal();
    }
    sort_by_math(sv,n);
    cout<<"sap xep theo diem toan"<<endl;
    for (int i=0;i<n;i++) cout<<sv[i].name<<" ";
    cout<<endl;

    sort_by_phi(sv,n);
    cout<<"sap xep theo diem ly"<<endl;
    for (int i=0;i<n;i++) cout<<sv[i].name<<" ";
    cout<<endl;

    sort_by_eng(sv,n);
    cout<<"sap xep theo diem anh"<<endl;
    for (int i=0;i<n;i++) cout<<sv[i].name<<" ";
    cout<<endl;

    sort_by_aver(sv,n);
    cout<<"sap xep theo diem trung binh"<<endl;
    for (int i=0;i<n;i++) cout<<sv[i].name<<" ";
    cout<<endl;

    return 0;
}
