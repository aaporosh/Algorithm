#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,x;
    cin >> s >>x;
    int c =0;
    while (s != 0)
    {
        s=s/x;
        c++;
    }
    cout << c << endl;  
}