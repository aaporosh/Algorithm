#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin >> n>> e;
    vector<int> g[n+1];

    for(int i=0;i<=e;i++){
        int x,y;
        cin >> x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
    queue<int> q;
    int source =1;
    q.push(source);
    vector<bool> vi(n+1);

    vi[source] = 1 ;
    while(!q.empty()){
        int v= q.front();
        cout << v << " ";
        q.pop();
        for(int u: g[v]){
            if(vi[u] == false){
                vi[u] = true;
                q.push(u);
            }
        }
    }
    return 0;
}