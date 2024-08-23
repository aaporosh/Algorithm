#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin  >> arr[i];
        if(arr[i]==1){
            count++;
        }
        else{
            flag++;
        }
    }
    if(count>flag){
        cout<<"Changed";
    }
    else
    cout<<"Remains";
}