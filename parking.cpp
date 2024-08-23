#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int max=arr[0],min=arr[0];
        for(int j=1;j<n;j++){
            if(max < arr[j]){
                max=arr[j];
            }
            if(min > arr[j]){
                min =  arr[j];
            }
        }
       int distance = (max-min)*2;
       cout << distance << endl;
    }
}