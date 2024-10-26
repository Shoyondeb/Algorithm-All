#include <bits/stdc++.h>
using namespace std;
vector<int>vec[10005];
bool visit[10005];
int parent[1005];
bool ans=false;
void bfs(int src){
    queue<int>que;
    visit[src]=true;
    que.push(src);
    while(!que.empty()){
        int par=que.front();
        que.pop(); 
        for(int child: vec[par]){
            if(visit[child]==true && parent[par]!=child ) ans=true;
            if(visit[child]==false){
                que.push(child);
                visit[child]=true;
                parent[child]=par;
                
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
    for(int i=0; i<n; i++){
        if(visit[i]==false){
            bfs(i);
        }
    }
    if(ans){
        cout<<"Found Cycle\n";
    }else{
        cout<<"Not Found\n";
    }
    return 0;
}