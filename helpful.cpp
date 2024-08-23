#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    cin >> s;
	string t;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] != '+') t.push_back(s[i]);
	}
	sort(t.begin(),t.end());
	for(int i = 0; i < t.size(); ++i){
		cout << t[i];
		if(i == t.size()-1) cout << "\n";
		else cout<<"+";
	}
}
