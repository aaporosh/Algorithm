#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Size of Array :";
    cin >> n;
    int array[n];
    cout << "Student's Id :" <<endl;
    for(int i =1 ;i<=n;i++){
        cin >> array[i];
    }
    cout << "Array :" << endl;
    
    for(int j=1 ;j<=n;j++){
        cout << array[j] << " ";
   }
}
