#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n,sum=0;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    for(int i=0;i<n;i+=2){
        sum = sum + (arr[i+1]-arr[i]);
    }
    cout << sum ;

}


/*5 10 2 3 14 5 

2 3 5 5 10 14

(2 3 ) (5 5 ) (10 14)

1 + 0 + 4
5 */