#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int n,x,y,d;
        cin >>n>>x>>y>>d;
        int count=1e9;
        if(abs(y-x)%d==0){
            cout<<abs(y-x)/d <<endl;
            continue;
        }
        if(abs(n-y)%d==0){
            int total = (n-x)/d; 
            if((n-x)%d!=0) total += 1; 
            total += (n-y)/d; 
            count = min(count, total);
        }
        if((y-1)%d==0){
            int total = (x-1)/d; 
            if((x-1)%d!=0) total += 1; 
            total += (y-1)/d; 
            count = min(count, total);
        }
        if(count==1e9) cout << -1 << endl;
        else cout << count << endl;
    }
}