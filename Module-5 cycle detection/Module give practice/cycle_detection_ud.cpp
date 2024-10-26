#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>vec[N];
bool visit[N];
int parent[N];
bool ans=false;
void bfs(int src){
    queue<int>que;
    visit[src]=true;
     que.push(src);
     while(!que.empty()){
        int pr=que.front();
        que.pop();
        for(int child: vec[pr]){
            if(visit[child]==true && parent[pr]!=child) ans=true;
            if(visit[child]==false){
                visit[child]=true;
                que.push(child);
                parent[child]=pr;
            }
        }
     }
}
int main()
{
    int n, m;
    cin>>n>>m;
    while(m--){
        int a, b;
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    memset(visit, false, sizeof(visit));
    for(int i=0; i<n; i++){
        if(visit[i]==false){
            bfs(i);
        }
    }
    if(ans) cout<<"true\n";
    else cout<<"false\n";
    return 0;
}