#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int level[N];
vector<int>vec[N];
bool visit[N];
int path[N];
void bfs(int src){
    queue<int>que;
    que.push(src);
    visit[src]=true;
    level[src]=0;
    while(!que.empty()){
        int front=que.front();
        cout<<front<<" ";
        que.pop();
        for(int ch: vec[front]){
            if(visit[ch]==false){
                que.push(ch);
                visit[ch]=true;
                level[ch]=level[front]+1;
                path[ch]=front;
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
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    memset(path, -1, sizeof(path));
    int src;
    cin>>src;
    bfs(src);
    cout<<"\nLevels:\n";
    for(int i=0; i<n; i++){
        cout<<i<<"->"<<level[i]<<"\n";
    }
    cout<<"\nPath printing:\n";
    int value;
    cin>>value;
    while(value!=-1){
        cout<<value<<" ";
        value=path[value];
    }
    return 0;
}