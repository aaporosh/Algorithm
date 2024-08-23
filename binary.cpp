#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int element;
    cin >> element;
    int low = 0, high = n - 1, mid;
    mid = (low + high) / 2;
    while(low <= high){
        if(arr[mid] < element){
            low = mid + 1;
             }
        else if(arr[mid] == element){
            cout << "found " << mid+1;
            break;
         }
        else 
        high = mid - 1; 
        mid = (low + high) / 2;
    }
    if(low>high){
    cout << "-1";}
}
