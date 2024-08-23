#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int count;
        for(int i=1;i<=n.size();i++){
            if(n[i]=='1'){
                count++;
            }
        }
        if(count%2==0){
            cout <<"YES"<<endl;
        }
        else
        cout <<"NO"<<endl;
    }
}