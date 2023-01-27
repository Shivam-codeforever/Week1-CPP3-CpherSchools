#include<bits/stdc++.h>
using namespace std;

int increment(int a){ // call by value
    a++;
    return a;
}

int increment(int &a){ // call by reference
    a++;
    return a;
}

int main(){
    
    cout<<increment(3);
    return 0; // return any integer
}