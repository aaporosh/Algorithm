#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n;
    cin >> n>>k;
    int arr[n],count=0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int j=1;j<=n;j++){
        if(arr[j]>=arr[k] && arr[j]!=0){
            count++;
        }
    }
    cout << count << endl;
}