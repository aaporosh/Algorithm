#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end(),greater<int>());

    cout << "Shortlisted Candidates :"<< endl;

    for(int i=0;i<3;i++){
         cout << arr[i] << " ";
    }
}