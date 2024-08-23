#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin >> n >> h;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //sort(arr.begin(),arr.end(),greater<int>());

    int rem = 0;
    for(int i=n-1;i>=0;--i){
    if(h==0){
        break;
    }else{
        rem=rem + h/arr[i];
        h = h % arr[i];
    }
    }
    if(rem>1){
    cout << rem <<" pins"<< endl;}
    else{
       cout << rem <<" pin"<< endl; 
    }
}
/*4 90
1 2 7 11
90/11 = 8
90%11 = 2
90 -88 = 2
2/7 =0 
*/