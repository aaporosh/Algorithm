#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int a,b;
        cin >> a>>b;
        int sum=16+ abs(b-a)*4;
        int add = sum+(a*4) +3;

        cout << "Case " <<i<<": "<<add<<endl;
    }
}