#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,p;
    cin >> x >> p;
    int count=0;
    vector<int> arr(x);
    for(int i=0 ; i<x;i++){
        cin >> arr[i];
    }
    for(int i=0;i<x;i++){
        if(arr[i]==p){
           count++;
        }
    }
    if(count == 0){
         cout << "Senti Aunti Ramva is mine" << endl;
    }else{
        cout <<"Senti Aunti Ramva will never be mine"<<endl;
    }
}