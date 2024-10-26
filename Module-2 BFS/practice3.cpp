// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// int level[N];
// void bfs(int src){
//     visit[src]=true;
//     queue<int>que;
//     que.push(src);
//     level[src]=0;
//     while(!que.empty()){
//         int front=que.front();
//         cout<<front<<" ";
//         que.pop();
//         for(int child: vec[front]){
//             if(visit[child]==false){
//                 visit[child]=true;
//                 que.push(child);
//                 level[child]=level[front]+1;
//             }
//         }
//     }
// }
// int main()
// {
//     int n, e;
//     cin>>n>>e;
    
//     while(e--){
//         int a, b;
//         cin>>a>>b;
//         vec[a].push_back(b);
//         vec[b].push_back(a);
//     }
//     int src;
//     cin>>src;
//     bfs(src);
//     cout<<endl;
//     for(int i=0; i<n; i++){
//         cout<<i<<"-"<<level[i]<<endl;
//     }
//     return 0;
// }

//tracking level with pair
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>vec[N];
bool visit[N];
int path[N];
void bfs(int src, int node){
    queue<pair<int,int>>que;
    que.push({src,0});
    visit[src]=true;
    bool ans=false;
    int lv;
    
    while(!que.empty()){
       pair<int,int>pr=que.front();
       que.pop();
       int front=pr.first;
       int lvl=pr.second;
        if(front==node){
          ans=true;
          lv=lvl;
       }
       for(int child: vec[front]){
        if(visit[child]==false){
           visit[child]=true;
           que.push({child, lvl+1});
           path[child]=front;
        }
       }
    }
    if(ans) cout<<lv<<endl;
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
    cin>>src>>node;
    memset(path, -1, sizeof(path));
    memset(visit,false,sizeof(visit));
    bfs(src, node);
    int x;
    cin>>x;
    while(x!=-1){
        cout<<x<<endl;
        x=path[x];
    }
    return 0;
}