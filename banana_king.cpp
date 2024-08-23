#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int c = abs(arr[i + 1] - arr[i]);
        
        if (arr[i + 1] > arr[i]) {
            if (p < c) {
                cout << "No" << endl;
                return 0;
            }
            p -= c;
        } else {
            p += c;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
