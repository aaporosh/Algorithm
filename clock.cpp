#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int l1,l2;
        l1 = (c-a)*(d-b);
        l2 = (c-b)*(d-a);

        if(l1<0 &&  l2 < 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
}