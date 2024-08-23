#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n>>m;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i] == m){
            c++;
        }
    }
    if(c>0){
        cout << "I know! Nobody will get it" <<endl;
    }else{
        cout <<"Really! I did not know that!"<<endl;
    }
}