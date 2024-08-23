#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    for(int i=1;i<=t;i++){
        int n,x,y,d;
        cin >>n>>x>>y>>d;
        int count=-1,flag=-1;

         if(abs(y-x)%d==0){
             cout<< abs(y-x)/d <<endl;
             continue;
         }
         else if((y-1)%d==0){
             flag=ceil((double)(y-1)/d )+ ceil((double)(x-1)/d);
          }
         else if((n-y)%d==0){
             count= ceil(double(n-x)/d) +ceil(double(n-y)/d);
         }


        if(count >=0 && flag>=0){
            count = min(count,flag);
        }
        else{
            count =  max(count,flag);
        }
        
        cout << count <<endl;
    }
}