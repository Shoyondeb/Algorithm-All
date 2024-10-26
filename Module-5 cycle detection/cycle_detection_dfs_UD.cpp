#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>vec[N];
bool visit[N];
bool ans=false;
int parent[N];
void dfs(int i){
    
     visit[i]=true;
     for(int child: vec[i]){
        if(visit[child]==true && parent[i]!=child) ans=true;
        if(visit[child]==false){
            parent[child]=i;
        dfs(child);
        }
     }
}
int main()
{
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
    vec[a].push_back(b);
    vec[b].push_back(a);
    }
    memset(visit, false, sizeof(visit));
    memset(parent, -1, sizeof(parent));
    for(int i=0; i<n; i++){
        if(visit[i]==false){
            dfs(i);
        }
    }
    if(ans)cout<<"Found Cycle\n";
    else cout<<"Not Found Cycle\n";
    return 0;
}