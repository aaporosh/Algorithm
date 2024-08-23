#include<bits/stdc++.h>
using namespace std;

const int n = 25e2 +10;
vector<int> arr(n);

int lis(int a){
    int ans = 1 ;
    for(int i=0;i<a;i++){
        if(arr[a]  >= arr[i]){
            ans = max(ans, lis(i)+1);
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int game =0;
    for(int i=0;i<n;i++){
        game = max(game , lis(i));
    }

    cout << game << endl;
}