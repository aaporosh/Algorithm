#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,rem=0;
    cin >> x;

    for(int i=5 ; i>=1 ; i--){
        rem = rem + x/i ;
        x = x%i;
    }
    
    cout << rem << endl;
}