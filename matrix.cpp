#include<bits/stdc++.h>
using namespace std ;

int main(){
    int arr[5][5], result=0;

    for(int i=0; i<5 ; i++){
        for(int j=0;j<5 ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i =0; i<5 ; i++){
        for(int j=0;j<5 ; j++){
            if(arr[i][j] == 1){
                result= abs(i-2)+abs(j-2) ;
            }
            if(j==5){
            j=0;
        }
        }
    
    }
    cout << result << endl;
}