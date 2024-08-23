#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<string> str(n);

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < str.size(); i += 2) { 
        if (str[i] == str[i + 1]) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
