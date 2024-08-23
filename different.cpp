#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        string s,r;
        cin >> s;
        if (adjacent_find(s.begin(), s.end(), not_equal_to<char>()) == s.end()) {
        cout<< "NO" << endl;
        }
        else{
        next_permutation(s.begin(), s.end());
        cout<< "YES\n" + s << endl;
        }

    }
    
}