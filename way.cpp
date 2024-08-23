#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++) {
        if (str[i].length() <= 10) {
            cout << str[i] << endl;
        } else {
            cout << str[i][0] << str[i].length() - 2 << str[i].back() << endl;
        }
    }
    return 0;
}
