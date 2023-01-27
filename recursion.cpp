#include<bits/stdc++.h>
using namespace std;

int power(int base , int pow){
    if(pow == 0)return 1;
    int ans = power(base, pow-1);

    return ans*base;
}


int main(){
    cout<< power(2,3); // function call
    return 0;
}