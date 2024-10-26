 //Cycle detection of undirected graph with bfs

//  #include <bits/stdc++.h>
//  using namespace std;
//  const int N=1e5+5;
//  vector<int>vec[N];
//  bool visit[N];
//  int parent[N];
//  bool ans=false;
// void bfs(int par){
//     visit[par]=true;
//     queue<int>que;
//     que.push(par);
//     while(!que.empty()){
//         int prnt=que.front();
//         que.pop();
//         for(int child: vec[prnt]){
//             if(visit[child]==true && parent[prnt]!=child){
//                 ans=true;
//             }
//             if(visit[child]==false){
//             visit[child]=true;
//             que.push(child);
//             parent[child]=prnt;
//             }
//         }
//     }
// }
//  int main()
//  {
//      int n, e;
//      cin>>n>>e;
//      while(e--){
//         int a, b;
//         cin>>a>>b;
//         vec[a].push_back(b);
//         vec[b].push_back(a);
//      }
//      memset(visit, false, sizeof(visit));
//      memset(parent, -1, sizeof(parent));
//      for(int i=0; i<n; i++){
//         if(visit[i]==false){
//             bfs(i);
//         }
//      }
//      for(int i=0; i<n; i++){
//         cout<<parent[i]<<" ";
//      }
//      if(ans)cout<<"Cycle Detected\n";
//      else cout<<"Cycle not Detected\n";
//      return 0;
//  }


// //Cycle detection of undirected graph with dfs
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// bool visit[N];
// vector<int>vec[N];
// int parent[N];
// bool ans=false;
// void dfs(int src){
//     visit[src]=true;
//     for(int child:vec[src]){
//         if(visit[child]==true && child!=parent[src]) ans=true;
//         if(visit[child]==false){
//             parent[child]=src;
//            dfs(child);
//         }
//     }
// }
// int main()
// {
//     int n, e;
//     cin>>n>>e;
//     while(e--){
//         int a,b;
//         cin>>a>>b;
//         vec[a].push_back(b);
//         vec[b].push_back(a); 
//     }
//     for(int i=0; i<n; i++){
//         if(visit[i]==false){
//             dfs(i);
//         }
//     }
//     if(ans) cout<<"Cycle Detected\n";
//     else cout<<"Cycle Not Detected\n";
//     return 0;
// }


//Cycle detection of undirected graph
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>vec[N];
bool visit[N];
bool patharray[N];
bool ans;
void dfs(int src){
    visit[src]=true;
    cout<<src;
    patharray[src]=true;
    for(int child: vec[src]){
        if(patharray[child]==true) ans=true;
        if(visit[child]==false){
           dfs(child);
        }
    }
    patharray[src]=false;
}
int main()
{
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        vec[a].push_back(b);
    }
    ans=false;
    memset(visit, false, sizeof(visit));
    memset(patharray, false, sizeof(patharray));
    for(int i=0; i<n; i++){
        if(visit[i]==false){
           dfs(i);
        }
    }
    if(ans==true)cout<<"Cycle Detected\n";
    else cout<<"Cycle Not Detected\n";
    return 0;
}