#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    int arr[n],ar[n];
    for(int i=0 ; i<n;i++){
        cin>>arr[i]>>ar[i];
    }
    for(int i=0 ; i<n;i++){
        for(int j=0 ; j<i;j++){
            if(arr[i]==ar[j]){
                count+=1;
            }
            if(ar[i]==arr[j]){
                count+=1;
            }
        }
    }
    cout << count<<endl;
    
}