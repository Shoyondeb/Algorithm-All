#include <bits/stdc++.h>
using namespace std;
vector<int>vec[1005];
bool visit[1005];
int level[1005];
int parent[1005];
void bfs(int src, int desti){
    queue<int>que;
    que.push(src);
    level[src]=0;
    visit[src]=true;
    while(!que.empty()){
        int par=que.front();
        que.pop();
        for(int child: vec[par]){
             if(visit[child]==false){
                que.push(child);
                level[child]=level[par]+1;
                parent[child]=par;
                visit[child]=true;
             }
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
    int src, desti;
    cin>>src>>desti;
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    memset(parent,-1, sizeof(parent));
    
    bfs(src, desti);
    int x=desti;
    stack<int>st;
    while(x!=-1){
        st.push(x);
        x=parent[x];
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}