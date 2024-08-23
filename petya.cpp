#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int count = 0;

    for (int i = 0; i < a.length(); i++) {
        
        if (tolower(a[i]) == tolower(b[i])) {
            continue; 
        } else if (tolower(a[i]) < tolower(b[i])) {
            count = -1;
            break;
        } else {
            count = 1; 
            break;
        }
    }

    if (count != 0) {
        cout << count << endl;
    } else {
        cout << "0" << endl; 
    }
}
