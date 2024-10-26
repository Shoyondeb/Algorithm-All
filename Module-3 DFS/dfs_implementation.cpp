#include <bits/stdc++.h>
using namespace std;
vector<int>vec[1005];
bool visit[1005];
void dfs(int src){
     cout<<src<<" ";
     visit[src]=true;
     for(auto integer:vec[src]){
        if(visit[integer]==false){
            dfs(integer);
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
    int src;
    cin>>src;
    dfs(src);
    return 0;
}