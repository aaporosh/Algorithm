#include<bits/stdc++.h>
using namespace std;

int gc(int n,int m){
    if(n==0){
        return m;
    }
    return gc(m%n,n);
}
int main(){
   int a,b;
   cin >> a >>b;
   cout << gc(a,b);
}