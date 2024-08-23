#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int value;
    cin>> value;
    int low=0,high=n-1,mid;
    while(high-low>1){
        mid=(high+low)/2;
        if(a[mid] < value){
            low = mid +1;
        }else{
            high = mid; 
        }
    }
    if(a[low]== value){
        cout<< "Found " <<low << endl;
    }
    else if (a[high]==value){
         cout<< "Found " <<high << endl;
    }else{
        cout<< "Not Found";
    }
    
}