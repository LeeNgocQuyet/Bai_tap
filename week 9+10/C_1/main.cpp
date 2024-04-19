#include <iostream>

using namespace std;
int strlen(const char *s){
    int i=0;
    while (s[i]!=NULL){
        i++;
    }
    return i;
}
char* reverse (const char* a){
    char* s=new char;
    int len=strlen(a);
    for (int i=0;i<len;i++){
        s[i]=a[len-i-1];
    }
    s[len]='\0';

    return s;
}
char* delete_char (const char* a,const char c){
    char* s=new char;
    int len=strlen(a);
    int vt=0;
    for (int i=0;i<len;i++){
        if (a[i]!=c) {s[vt]=a[i];vt++;}
    }
    s[vt]='\0';
    return s;
}
char* pad_right(const char* a,const int n){
    int len=strlen(a);
    char* s=new char;
    for (int i=0;i<len;i++){
        s[i]=a[i];
    }
    if (len>=n) return s;

    for (int i=len;i<n;i++){
        s[i]=' ';
    }
    s[n]='\0';
    return s;
}
char* pad_left(const char* a,const int n){
    int len=strlen(a);
    char* s=new char;
    for (int i=0;i<len;i++){
        s[i]=a[i];
    }
    if (len>=n) return s;
    char* res=new char[n];
    for (int i=n-len;i<n;i++){
        res[i]=s[i-n+len];
    }
    for (int i=0;i<n-len;i++){
        res[i]=' ';
    }
    res[n]='\0';
    return res;
}
char* truncate(const char* a,const int n){
    int len=strlen(a);
    char* s=new char;
    for (int i=0;i<len;i++){
        s[i]=a[i];
    }
    if (len<=n) return s;
    s[n]='\0';
    return s;
}
char* trim_left(const char* a){
    int t=0;
    int len=strlen(a);
    while (a[t]==' '){
        t++;
    }
    char *s=new char;
    for (int i=t;i<len;i++){
        s[i-t]=a[i];
    }
    s[len-t]='\0';
    return s;
}

char* trim_right(const char* a){
    char *s=new char;
    int len=strlen(a);
    for (int i=0;i<len;i++){
        s[i]=a[i];
    }
    int t=len-1;
    while (s[t]==' '){
        t--;
    }
    s[t+1]='\0';
    return s;
}
int main()
{
    const char* s="  abcde  ";
    cout<<reverse(s)<<endl;
    cout<<delete_char(s,'c')<<endl;
    cout<<pad_right(s,10)<<endl;
    cout<<pad_left(s,10)<<endl;
    cout<<truncate(s,5)<<endl;
    cout<<trim_left(s)<<endl;
    cout<<trim_right(s);
    return 0;
}
