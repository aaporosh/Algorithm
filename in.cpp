#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());

    int sum = arr[0]+arr[n-1];

    cout << sum << endl;
}