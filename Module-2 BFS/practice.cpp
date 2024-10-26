//bfs traversal

// #include <bits/stdc++.h>
// using namespace std;
// vector<int>vec[1005];
// bool visit[1005];
// void bfs(int src){
//     queue<int>que;
//     que.push(src);
//     visit[src]=true;
//     while(!que.empty()){
//         int parent=que.front();
//         que.pop();
//         cout<<parent<<" ";
//         for(int child:vec[parent]){
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
//     int src;
//     cin>>src;
//     memset(visit, false, sizeof(visit));
//     bfs(src);

//     return 0;
// }

//Level tracking with pair
// #include <bits/stdc++.h>
// using namespace std;
// vector<int>vec[1005];
// bool visit[1005];
// void bfs(int src, int desti){
//     bool check=false;

//     queue<pair<int, int>>que;
//     que.push({src, 0});
//     visit[src]=true;
//     while(!que.empty()){
//         pair<int, int>p=que.front();
//         que.pop();
//         int parent=p.first;
//         int level=p.second;
//         if(parent==desti){
//             cout<<level<<endl;
//             check=true;
//         }
//         for(int child: vec[parent]){
//             if(visit[child]==false){
//                 que.push({child, level+1});
//                 visit[child]=true;
//             }
//         }
//     }
//     if(check)cout<<"Found\n";
//     else cout<<"Not Found\n";
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
//     int src, desti;
//     cin>>src>>desti;
//     bfs(src, desti);
    
//     return 0;
// }

//Printing path
// #include <bits/stdc++.h>
// using namespace std;
// vector<int>vec[1005];
// bool visit[1005];
// int level[1005];
// int parent[1005];
// void bfs(int src ){
//     queue<int>que;
//     que.push(src);
//     visit[src]=true;
//     level[src]=0;
//     while(!que.empty()){
//         int par=que.front();
//         que.pop();
//         for(int val:vec[par]){
//             if(visit[val]==false){
//                 que.push(val);
//                 parent[val]=par;
//                 level[val]=level[par]+1; 
//                 visit[val]=true;
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
//     int src,desti;
//     cin>>src>>desti;
//     memset(visit,false, sizeof(visit));
//     memset(level, -1, sizeof(level));
//     memset(parent, -1, sizeof(parent));
//     bfs(src);
//     int x=desti;
//     while(x!=-1){
//         cout<<x<<" ";
//         x=parent[x];
//     }

//     return 0;
// }


//Printing path
#include <bits/stdc++.h>
using namespace std;
bool visit[1005];
vector<int>vec[1005];
int level[1005];
int parent[1005];
void bfs(int src){
    queue<int>que;
    que.push(src);
    visit[src]=true;
    level[src]=0;
    while(!que.empty()){
        int par=que.front();
        que.pop();
        for(int child:vec[par]){
            if(visit[child]==false){
                que.push(child);
                visit[child]=true;
                level[child]=level[par]+1;
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
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    int src, desti;
    cin>>src>>desti;
    bfs(src);
    int x=desti;
    while(x!=-1){
        cout<<x<<" ";
        x=parent[x];
    }
    
    
    return 0;
}