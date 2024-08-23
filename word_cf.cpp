#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,u;
    cin >> s;
    int c=0,f=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            c++;
        }else{
            f++;
        }
    }
    u.resize(s.length());
    for(int i=0;i<s.length();i++){
        if(c>f){
            u[i] = toupper(s[i]);
        }else{
            u[i]= tolower(s[i]);
        }
    }
    cout << u << endl;
}