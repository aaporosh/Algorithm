#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n,can=0 ,j;
    cin >> n;
    int arr[n] , a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
        arr[i]=a[i];
    }

    sort(a, a+n,greater<int>());

    for(int i=0;i<n;i++){
        can =can + (a[i]*i+1);
    }

    cout << can << endl;
   
    for(int i=0 ;i<n;i++){
    for(int j=0 ; j<n ;j++){
        if((a[i] == arr[j])&&(arr[j]!=0)){
            cout << j+1 << " ";
            arr[j]=0;
            break;
        }
    }}cout << endl;

}

/*3 
20 20 10

(20*0+1)+ (20*1 +1) + (10*2+1)

1+21+21

43*/