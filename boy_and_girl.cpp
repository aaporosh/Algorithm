#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> str ;
    for(int i=0 ;i<s.size();i++){
        str.insert(s[i]);
    }
    if(str.size() %2== 0){
        cout <<  "CHAT WITH HER!" << endl ;
    }else{
        cout << "IGNORE HIM!"  << endl ;
    }
}