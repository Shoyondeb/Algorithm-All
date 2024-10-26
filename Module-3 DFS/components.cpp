// #include <bits/stdc++.h>
// using namespace std;
// vector<int>vec[1005];
// bool visit[1005];
// int level[1005];
// void dfs(int src){
//     cout<<src<<" ";
//     visit[src]=true;
//     for(int child:vec[src]){
//         if(visit[child]==false){
//             dfs(child);
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
//     for(int i=0; i<n; i++){
//         if(visit[i]==false)
//         dfs(i);
//     }
//     return 0;
// }

// // bfs on components
// #include <bits/stdc++.h>
// using namespace std;
// vector<int>vec[1005];
// bool visit[1005];
// int level[1005];
// void bfs(int src){
//     queue<int>que;
//     que.push(src);
//     level[src]=0;
//     visit[src]=true;
//     while(!que.empty()){
//         int front=que.front();
//         que.pop();
//         cout<<front<<" ";
//         for(auto child: vec[front]){
//             if(visit[child]==false){
//                 que.push(child);
//                 visit[child]=true;
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
//     for(int i=0; i<n; i++){
//         if(visit[i]==false){
//             bfs(i);
//             visit[i]=true;
//         }
//     }
//     return 0;
// }

