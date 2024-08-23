#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,amount=0;
    int result;
    cin >> k >> n >> w;
    for(int i=1 ;i<=w ;i++){
        amount += k*i;
    }
    if(amount>n){
    result = amount  - n;
    }else result = 0;

    cout << result << endl ;
}