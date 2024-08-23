#include<bits/stdc++.h>
using namespace std;

void seclection(int* arr,int size){

    for(int i=0;i<size-1;i++){
       int k=i;
        for(int j =i+1;j<size;j++){

            if(arr[j]<arr[k]){
                k=j;
            }
            swap(arr[i],arr[k]);
        }
    }
    for(int i=0;i<size;i++){
        cout <<arr[i]<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    seclection(arr,n);
}