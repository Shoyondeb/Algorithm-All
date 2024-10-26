#include <bits/stdc++.h>
using namespace std;
vector<int>vec[1005];
bool visit[1005];
int level[1005];
void bfs(int src){
    queue<int>que;
    que.push(src);
    level[src]=0;
    visit[src]=true;
    while(!que.empty()){
        int parent=que.front();
        que.pop();
        for(int child:vec[parent]){
            if(visit[child]==false){
                que.push(child);
                level[child]=level[parent]+1;
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
    int src;
    cin>>src;
    memset(visit, false, sizeof(visit)); 
    memset(level, -1, sizeof(level));
    bfs(src);
    for(int i=0; i<n; i++){
        cout<<i<<" "<<level[i]<<"\n";
    }
    return 0;
}