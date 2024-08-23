#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin >>n;
    if(n>=30){
        count = 3;
    }else if(n>=15){
        count = 2;
    }else if(n>=5){
        count = 1;
    }
    cout << count << endl;
}