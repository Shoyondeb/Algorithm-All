// // Cycle detect with bfs in Undirected graph
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// int parent[N];
// bool ans=false;
// void bfs(int src){
//     queue<int> que;
//     que.push(src);
//     visit[src]=true;
//     while(!que.empty()){
//         int front= que.front();
//         que.pop();
//         for(int child:vec[front]){
//             if(visit[child]==true && child!=parent[front]){
//                 ans=true;
//             }
//             if(visit[child]==false){
//                 visit[child]=true;
//                 que.push(child);
//                 parent[child]=front;
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
//     memset(visit, false, sizeof(visit));
//     memset(parent, -1, sizeof(parent));
//     for(int i=0; i<n; i++){
//         if(visit[i]==false){
//             bfs(i);
//         }
//     }
//     if(ans)cout<<"Cycle detected\n";
//     else cout<<"Cycle Not detected\n";
//     return 0;
// }

//undirected cycle detection with dfs
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// int parent[N];
// bool ans=false;
// void dfs(int src){
//     visit[src]=true;
//     for(int child:vec[src]){
//         if(visit[child]==true && child!=parent[src]) ans=true;
//         if(visit[child]==false){
//         parent[child]=src;
//         dfs(child);
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
//     memset(visit, false, sizeof(visit));
//     memset(parent,-1, sizeof(parent));
//     for(int i=0; i<n; i++){
//         if(visit[i]==false) dfs(i);
//     }
//     if(ans) cout<<"Cycle detected\n";
//     else cout<<"Cycle not detected\n";
//     return 0;
// }


//directed cycle detection with dfs
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// bool patharray[N];
// bool ans=false;
// void dfs(int src){
//     visit[src]=true;
//     patharray[src]=true;
//     for(int child:vec[src]){
//         if(patharray[child]==true) ans=true;
//         if(visit[child]==false)
//         dfs(child);
//     }
//     patharray[src]=false;
// }
// int main() 
// {
//     int n, e;
//     cin>>n>>e;
//     while(e--){
//         int a,b;
//         cin>>a>>b;
//         vec[a].push_back(b);
//     }
//     memset(visit, false, sizeof(visit));
//     memset(patharray, false, sizeof(patharray));
//     for(int i=0; i<n; i++){
//         if(visit[i]==false) dfs(i);
//     }
//     if(ans) cout<<"Cycle detected\n"; 
//     return 0;
// }