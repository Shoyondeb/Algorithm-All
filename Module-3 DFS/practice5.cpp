// #include <bits/stdc++.h>
// using namespace std;
// int n, m;
// vector<int>vec[1005];
// char arr[1005][1005];
// bool result=false;
// vector<pair<int,int>>dir={{1,0},{-1,0},{0,-1},{0,1}};
// bool check(int a, int b){
//     if(a<0 || a>=n || b<0 ||b>=m) return false;
//     return true;
// }
// bool visit[1005][1005];
// void dfs(int i, int j){
//      visit[i][j]=true;
//      for(int k=0; k<4; k++){
//         int a=dir[k].first+i;
//         int b=dir[k].second+j;
//         if(arr[a][b]=='B') result=true;
//         if(check(a,b)==true && (arr[a][b]=='.'||arr[a][b]=='B') && visit[a][b]==false){
//             dfs(a,b);
//         }
//      }
// }
// int main()
// {
//     cin>>n>>m;
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             visit[i][j]=false;
//         }
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j]=='A'){
//                 dfs(i, j);
//             }
//         }
//     }
//     if(result) cout<<"Found\n";
//     else cout<<"Not found\n";

//     return 0;
// }

//BFS on component
#include <bits/stdc++.h>
using namespace std;
vector<int>vec[1005];
bool visit[1005];
void bfs(int i){
     visit[i]=true;
     queue<int>que;
     que.push(i);
     while(!que.empty()){
        int a=que.front();
        cout<<a<<" ";
        que.pop();
        for(int child: vec[a]){
            if(visit[child]==false){
            que.push(child);
            visit[child]=true;
            }
        }

    }
}
int main()
{
    int n, e;
    cin>>n>>e;
    while(e--){
       int a,b;
       cin>>a>>b;
       vec[a].push_back(b);
       vec[b].push_back(a);
    }
    memset(visit, false, sizeof(visit));
    for(int i=0; i<n; i++){
        if(visit[i]==false){
            bfs(i);
        }
    }
    return 0;
}