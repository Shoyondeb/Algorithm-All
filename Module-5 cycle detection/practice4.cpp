//Cycle detection with bfs
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// bool cycle;
// int parent[N];
// void bfs(int source){
//     visit[source]=true;
//     queue<int>que;
//     que.push(source);
//     while(!que.empty()){
//         int p=que.front();
//         que.pop();
//         for(auto child:vec[p]){
//             if(visit[child]==true && parent[p]!=child){
//                 cycle=true;
//             }
//             if(visit[child]==false){
//                 visit[child]=true;
//                 que.push(child);
//                 parent[child]=p;
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
//     int source;
//     cycle=false;
//     cin>>source;
//     bfs(source);
//     if(cycle){
//         cout<<"Cycle detected\n";
//     }else{
//         cout<<"No cycle existing\n";
//     }
//     return 0;
// }

//cycle detection with dfs
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// int parent[N];
// bool cycle;
// void dfs(int source){
//      visit[source]=true;
//      for(auto child:vec[source]){
//         if(visit[child]==true && parent[source]!=child){
//             cycle=true;
//         }
//         if(visit[child]==false){
//             parent[child]=source;
//             dfs(child);
//         }
//      }
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
//     cycle=false;
//     int source;
//     cin>>source;
//     dfs(source);
//     if(cycle){
//         cout<<"Cycle Found\n";
//     }else{
//         cout<<"Cycle Not Found\n";
//     }
//     return 0;
// }

//cycle detection with DG in dfs
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>vec[N];
bool cycle;
bool visit[N];
bool path_array[N];
void dfs(int source){
     visit[source]=true;
     for(auto child:vec[source]){
        if(path_array[child]==true){
            cycle=true;
            return;
        }
        if(visit[child]==false){
            path_array[child]=true;
            dfs(child);
        }
        path_array[child]=false;
     }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        vec[a].push_back(b);
    }
    memset(visit,false, sizeof(visit));
    memset(path_array, false, sizeof(path_array));
    cycle=false;
    int source;
    cin>>source;
    dfs(source);
    if(cycle){
        cout<<"Cycle Found\n";
    }else{
        cout<<"Cycle Not Found\n";
    }
    return 0;
}