#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , p;
    cin >> n >> p;
    vector<int> vect(n);
    for(int i=0;i<n;i++){
        cin >> vect[i];
    }
    int j=0;
    sort(vect.begin(),vect.end());

    for(int i=n-1;i>=0;--i){
        if(p==0){
            break;
        }else{
            while(p>=vect[i]){
            p=p % vect[i];
            j++;}}
    }
    if(j>1){
        cout << "Tami will be back after "<< j<< " days" <<endl;}
    else{
       cout << "Tami will be back after "<< j<< " day" <<endl; 
    }
}