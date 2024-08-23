#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int result=-200000;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int max = arr[0];
        for(int i=0;i<n-1;i++){
            if(max<arr[i]){
                max=arr[i];
            }
            if(max-arr[i+1] > result){
                result = max-arr[i+1];
            }
        }
        cout << result <<endl;
    }
}