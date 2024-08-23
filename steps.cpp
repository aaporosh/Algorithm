#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        int n,k,count=0;
        cin>>n>>k;
        while(n!=0){
            if (n % k == 0) {
            n /= k;
        } else {
            n--;
        }
        count++;         
        }
        cout<<count;
    }
    
}