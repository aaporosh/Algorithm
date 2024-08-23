#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >>k;
    for(int i=1 ;i<=k;i++){
        int n;
    cin >> n;
    int m=n;
    int temp=0;
    while(n!=0){
        int last_digit = n%10;
        temp = temp*10 + last_digit;
        n=n/10;
    }
    if(m==temp){
        cout << "Case " <<i<<": Yes" <<endl;
    }
    else 
    cout <<"Case " <<i<<": No"<<endl;
    }
}