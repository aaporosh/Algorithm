#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int>& a , const pair<int,int>& b){
    return a.second < b.second;
}

int main(){
    int n;
    cin >>n;
    int sum = 0; 
    vector<pair<int,int>> vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    
    sort(vec.begin(), vec.end(), comp);

    for(int i = 0; i < 3 && i < n; i++){
        sum += vec[i].second;
    }

    if(sum < 150){
        cout << "Counseling Support Required" << endl;
    } else {
        cout << "Counseling Support Not Required" << endl;
        for(int i = 0; i < 3 && i < n; i++){
            cout << vec[i].second << " ";
        }
    }
    return 0;
}
