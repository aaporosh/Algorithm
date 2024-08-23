#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++){
        cin >> b[i];
    }
    for(int i=0;i<n-2;i++){
        cin >> c[i];
       for(int j=0;j<n;j++){
         if(a[i]==c[j]){
            c[j]=0;
         }
    }
    }  
    for(int i=0;i<n;i++){
        if(c[i]!=0){
            cout<<c[i]<<endl;
        }
    } 
}