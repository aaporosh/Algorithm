#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Size of Array :";
    cin >> n;
    int array[n];

    for(int i =1 ;i<=n;i++){
        cin >> array[i];
    }
    
    for(int j=1 ;j<=n;j++){
        if(array[j] != 63){
        cout <<"Found in :"<< j<< " ";
        }
   }

}