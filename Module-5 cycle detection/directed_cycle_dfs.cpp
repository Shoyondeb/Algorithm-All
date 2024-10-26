#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>vec[N];
bool visit[N];
bool patharray[N];
bool ans=false;
void dfs(int src){
     
    visit[src]=true;
    patharray[src]=true;
    for(int child:vec[src]){
        if(patharray[child]) ans=true;
        if(visit[child]==false){
            dfs(child);
        }
    }
    patharray[src]=false;
}
int main()
{
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        vec[a].push_back(b);
    }
    memset(visit, false, sizeof(visit));
    memset(patharray, false, sizeof(patharray));
    for(int i=0; i<n; i++){
        if(visit[i]==false){
            dfs(i);
        }
    }
    if(ans) cout<<"Cycle Found";
    else cout<<"Not Found\n";
    return 0;
}