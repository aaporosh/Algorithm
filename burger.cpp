#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    for(int i=1;i<=t;i++){
        int b,p,f;
        cin >>b>>p>>f;
        int h,c;
        cin>> h>>c;
        int bun = b/2;
        int profit=0;
        int beef = min(bun,p);
        int chicken = min(bun,f);
         if(h>c){
            profit = profit + (h*beef);
            bun=bun-beef;
            if(bun<f){
            profit = profit + (c*bun);}
            else{
             profit = profit + (c*chicken);}
         }
         else{
            profit = profit + (c*chicken);
            bun=bun-chicken; 
            if(bun<p){
            profit = profit + (h*bun);}
            else
            profit = profit + (h*beef);
         }
       
       cout <<profit<<endl;
    }
}
