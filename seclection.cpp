#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index =0;

    for(int i=0;i<n;i++){
         index =i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
				index =j;
                swap(arr[i],arr[index]);
            }         
        }
        cout<<arr[i]<<" ";
    }

}
