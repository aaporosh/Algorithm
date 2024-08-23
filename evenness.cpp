#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin  >> arr[i];
    }
    int  count=0,flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
        else
        flag++;

        if(count>flag){
            if(arr[i]%2 !=0){
                cout<<i+1;
            }
        }
        else
        if(arr[i]%2 ==0){
            cout<<i+1;
        }
    }
    
}