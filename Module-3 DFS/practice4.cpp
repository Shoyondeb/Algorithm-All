// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// void dfs(int src){
//     visit[src]=true;
//     cout<<src<<" ";;
//     for(auto child:vec[src]){
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
//     for(int i=0; i<n; i++){
//         if(visit[i]==false){
//             dfs(i);
//         }
//     }
//     return 0;
// }

//bfs on 2D grid
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<pair<int,int>>pr={{0,1},{0,-1},{1,0},{-1,0}};
// bool visit[100][100];

// int n, m;
// char arr[100][100];
// bool check(int a, int b){
//     if(a<0 ||a>=n ||b<0 ||b>=m) return false;
//     return true;
// }
// void bfs(int si, int sj){
//     queue<pair<int,int>>que;
//     que.push({si,sj});
//     visit[si][sj]=true;
//     while(!que.empty()){
//         pair<int,int>pr1=que.front();
//         int a=pr1.first;
//         int b=pr1.second;
//         if(arr[a][b]=='B'){
//             cout<<"Found path\n";
//             break;
//         }
//         que.pop();
//         for(int i=0; i<4; i++){
//             int a1=a+pr[i].first;
//             int b1=b+pr[i].second;
//             if(check(a1,b1)==true && visit[a1][b1]==false && (arr[a1][b1]=='.'|| arr[a1][b1]=='B')){
//                 que.push({a1,b1});
//                 visit[a1][b1]=true;
//             }
//         }
//     }
// }
// int main()
// {
    
//     cin>>n>>m;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//     memset(visit, false, sizeof(visit));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j]=='A' && visit[i][j]==false){
//                     bfs(i, j);
//             }
//         }
//     }
    
//     return 0;
// }

//dfs on 2D grid
#include <bits/stdc++.h>
using namespace std;
int n,m;
char arr[100][100];
bool visit[100][100];
vector<pair<int,int>>pr={{0,1},{0,-1},{1,0},{-1,0}};
bool check(int a, int b){
    if(a<0 || a>=n|| b<0 ||b>=m) return false;
    return true;
}
bool ans=false;

void dfs(int si, int sj){
     visit[si][sj]=true;
     if(arr[si][sj]=='B')ans=true;
     for(int i=0;i<4; i++){
        int a= si+pr[i].first;
        int b=sj+pr[i].second;
        if(check(a,b)==true && visit[a][b]==false && (arr[a][b]=='.' || arr[a][b]=='B')){
           dfs(a,b);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(visit[i][j]==false && arr[i][j]=='A'){
                dfs(i, j);
            }
        }
    }
    if(ans) cout<<"Path Found\n";
    else cout<<"Path Not found\n";
    return 0;
}