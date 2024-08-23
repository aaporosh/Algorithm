#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long int n,C1,C2,C3,total=0;
        cin >> n;
        C1=7,C2=13;

        if(n == 1){
            cout << C1 << endl;
            continue;
        }else if(n== 2){
            cout << C2 << endl;
            continue;
        }
        for (int i = 3; i <= n; ++i) {
        C3 = C1 + C2 + (9 * i * i - i * i * i - 14 * i - 1);
        total += C3;
        C1 = C2;
        C2 = C3;
        }
        cout << total << endl;
    }
    
}