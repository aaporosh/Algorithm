#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n, t = 0;
    cin >> n;
    int team[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> team[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int count = 0; 
        for(int j = 0; j < 3; j++){
            if(team[i][j] == 1){
                count++;
            }
        }
        if(count >= 2){ 
            t++;
        }
    }
    cout << t << endl;
}
