#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for (int i=0 ;i<n;i++){
        cin>> arr[i];
    }
    int m ;
    cin >> m;
    while(m--){
        int r ;
        cin >> r;
        int count=0;
        for (int i =0;i<n;i++){
            if(arr[i]==r){
                count ++;
            }
        }
        cout << r << ":" <<count << endl;
    }
}