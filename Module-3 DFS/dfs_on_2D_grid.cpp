// #include <bits/stdc++.h>
// using namespace std;
//  int n, m;
// bool visit[20][20];
// vector<pair<int , int>>vec={{0,1},{0,-1},{-1,0},{1,0}};
// bool validity(int ir, int jc){
//     if(ir<0 ||ir>=n || jc<0 ||jc>=m) return false;
//     return true;
// }
// void dfs(int r, int c){
//     cout<<r<<" "<<c<<endl;
//     visit[r][c]=true;
//     for(int i=0; i<4; i++){
//         int ir=r+vec[i].first;
//         int jc=c+vec[i].second;
//         if(validity(ir, jc)==true &&visit[ir][jc]==false){
//             dfs(ir, jc);
//         }
//     }

// }
// int main()
// {
   
//     cin>>n>>m;
//     char a[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>a[i][j];
//         }
//     }
//     int r, c;
//     memset(visit, false, sizeof(visit));
//     cin>>r>>c;
//     dfs(r, c);

//     return 0;
// }


//dfs on 2D grid
#include <bits/stdc++.h>
using namespace std;
int n,m;
bool visit[100][100];
vector<pair<int,int>>vec={{0,1},{-1,0},{0,-1},{1,0}};
bool check(int a, int b){
    if(a<0 ||a>=n|| b <0 ||b>=m){
        return false;
    }return true;
}
void dfs(int sr, int sc){
     cout<<sr<<" "<<sc<<endl;
     visit[sr][sc]=true;
     for(int i=0; i<4; i++){
        int a=vec[i].first+sr;
        int b=vec[i].second+sc;
        if(check(a,b)==true && visit[a][b]==false){
            dfs(a, b);
        }
     }
}
int main()
{
    cin>>n>>m;
    char arr[n][m];
    for(int i=0; i<n; i++)    {
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int sr, sc;
    cin>>sr>>sc;
    dfs(sr, sc);

    return 0;
}