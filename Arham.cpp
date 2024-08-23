#include <bits/stdc++.h>
using namespace std;
const int n=25e2+10;
vector<int> arr(n);

int lis(int i){
    int ans = 1;
    for(int j=0;j<i;++j){
        if(arr[i] > arr[j]){
            ans = max(ans,lis(j)+1);
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int toy = 0;
    for(int i = 0; i < n; i++) {
        toy = max(toy,lis(i));
    }
    cout << toy << endl;
    
    return 0;
}
