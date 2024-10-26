//UD cycle detection with bfs

// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// int parent[N];
// bool ans;
// void bfs(int src){
//     queue<int>que;
//     visit[src]=true;
//     que.push(src);
//     while(!que.empty()){
//         int front=que.front();
//         que.pop();
//         for(int child:vec[front]){
//             if(visit[child]==true && child!=parent[front]) ans=true;
//             if(visit[child]==false ){
//                 parent[child]=front;
//                 que.push(child);
//                 visit[child]=true;
//             }
//         }
//     }
// }
// int main()
// {
//     int n,e;
//     cin>>n>>e;
//     while(e--){
//         int a, b;
//         cin>>a>>b;
//         vec[a].push_back(b);
//         vec[b].push_back(a);
//     }
//     int src;
//     ans=false;
//     memset(visit,false,sizeof(visit));
//    for(int i=0; i<n; i++){
//     if(visit[i]==false) bfs(i);
//    }
//     if(ans) cout<<"Cycle Detected\n";
//     else cout<<"Cycle not Detected\n";
//     return 0;
// }


//UD Cycle detection with dfs
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// int parent[N];
// bool ans;
// void dfs(int src){
//     visit[src]=true;
//     for(int child: vec[src]){
//         if(visit[child]==true && child!=parent[src]) ans=true;
//         if(visit[child]==false){
//             parent[child]=src;
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
//     for(int i=0; i<n ; i++){
//         if(visit[i]==false){
//             dfs(i);
//         }
//     }
//     if(ans) cout<<"Cycle detected\n";
//     else cout<<"Cycle Not Detected\n";
//     return 0;
// }


//Cycle detection on directed graph
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// bool patharray[N];
// bool ans;
// void dfs(int src){
//      visit[src]=true;
//      patharray[src]=true;
//      for(int child: vec[src]){
//         if(patharray[child]==true)ans=true;
//         if(visit[child]==false){ 
//             dfs(child);
//         }
//      }
//      patharray[src]=false;
// }
// int main()
// {
//     int n, e;
//     cin>>n>>e;
//     while(e--){
//         int a, b;
//         cin>>a>>b;
//         vec[a].push_back(b); 
//     }
//     memset(visit, false, sizeof(visit));
//     ans=false;

//     for(int i=0; i<n; i++){
//         if(visit[i]==false){
//             dfs(i);
//         }
//     }
//     if(ans) cout<<"Directed cycle detected\n";
//     else cout<<"Not Detected\n";
//     return 0;
// }