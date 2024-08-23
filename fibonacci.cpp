#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    int a=1,b=2;
    if(n==1) cout<<1<<endl;
    else if(n==2) cout<<2<<endl;
    else{
    for(int i=2;i<n;++i){
        s=a*b;
        a=b;
        b=s;
    }
    cout << s <<endl;}
}