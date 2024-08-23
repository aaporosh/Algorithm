#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,cigarette;
   
    while(cin>>n>>k){
        cigarette = n;
        while (n>=k)
        {
            cigarette+=n/k;
            n= n/k + n%k;
        }
        cout << cigarette << endl;
    }
}