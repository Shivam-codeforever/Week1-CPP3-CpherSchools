#include<bits/stdc++.h>
using namespace std;
int main(){
    int a= 10;
    int*p = &a;
    int**p1 = &p;
    int***p2 = &p1;

    cout<<a<<endl;
    cout<< p<<endl;
    cout<< p1<<endl;
    cout<< p2<<endl;
    
    cout<< *p<<endl;
    cout<< **p1<<endl;
    cout<< ***p2<<endl;

    return 0;
}