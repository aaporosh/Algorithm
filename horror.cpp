#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int n,k;
        cin >> n;
        int max = 0;
        for(int j=1;j<=n;j++){
            cin >> k;
            if(max < k){
                max = k;
            }
        }
       cout << "Case " <<i<<": "<<max<<endl;
    }
}