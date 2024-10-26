#include <bits/stdc++.h>
using namespace std;
vector<int>vec[1005];
bool visit[1005];
void bfs(int src,int node){
    bool finding=false;
    queue<pair<int, int>>que;
    que.push({src, 0});
    visit[src]=true;
    while(!que.empty()){
        pair<int, int>p=que.front();
        que.pop();
        int parent=p.first;
        int level=p.second;
        if(parent==node){
            cout<<level<<endl;
            finding=true;
        }
        for(int child: vec[parent]){
            if(visit[child]==false){
                que.push({child, level+1});
                visit[child]=true;
            }
        }
    }
    if(finding)cout<<"Found\n";
    else cout<<"Not Found\n";
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
    int src, node;
    cin>>src>>node ;
    bfs(src,node);
    return 0;
}