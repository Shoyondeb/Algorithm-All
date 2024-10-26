// //dfs traversal
// #include <bits/stdc++.h>
// using namespace std;
// vector<int>vec[100];
// bool visit[100];
// void dfs(int sr){
//     cout<<sr<<" ";
//     visit[sr]=true;
//     for(int child: vec[sr]){
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
//     int sr;
//     memset(visit, false, sizeof(visit));
//     cin>>sr;
//     dfs(sr);
//     return 0;
// }

//dfs on 2D grid
#include <bits/stdc++.h>
using namespace std;
int n, m;
bool visit[100][100];
vector<pair<int,int>>pp={{0,1},{0,-1},{-1,0},{1,0}};
bool check(int sr,int sc){
     if(sr<0 ||sr>=n ||sc<0 ||sc>=m)
        return false;
     return true;
}
void dfs(int sr, int sc){
    cout<<sr<<" "<<sc<<endl;
    visit[sr][sc]=true;
    for(int i=0; i<4; i++){
        int a=sr+pp[i].first;
        int b=sc+pp[i].second;
        if( check(a,b)==true && visit[a][b]==false){
            dfs(a,b);
        }
    }
}
int main()
{
    cin>>n>>m;
    char a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int sr, sc;
    cin>>sr>>sc;
    memset(visit, false, sizeof(visit));
    dfs(sr,sc);
    return 0;
}