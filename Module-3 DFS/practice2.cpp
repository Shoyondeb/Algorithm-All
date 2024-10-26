// //dfs implementation
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>vec[N];
// bool visit[N];
// void dfs(int src){
//      cout<<src<<" ";
//      visit[src]=true;
//      for(int child:vec[src]){
//         if(visit[child]==false){
//            dfs(child);
//         }
//      }
// }
// int main()
// {
//     int n,e;
//     cin>>n>>e;
//     while(e--){
//         int a,b;
//         cin>>a>>b;
//         vec[a].push_back(b);
//         vec[b].push_back(a);
//     }
//     memset(visit, false, sizeof(visit));
//     dfs(0);
//     return 0;
// }

//dfs on 2D grid
// #include <bits/stdc++.h>
// using namespace std;
// vector<pair<int,int>>pr={{0,1},{-1,0},{-1,0},{1,0}};
// int n,m;
// bool visit[100][100];
// bool check(int a, int b){
//     if(a<0 || a>=n ||b<0 ||b>=m) return false;
//     else return true;
// }
// void dfs(int src1, int src2){
//     cout<<src1<<" "<<src2<<endl;
//     visit[src1][src2]=true;
//     for(int i=0; i<4; i++){
//         int a=src1+pr[i].first;
//         int b=src2+pr[i].second;
//         if(check(a,b)==true && visit[a][b]==false){
//             dfs(a,b);
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
//     int src1, src2;
//     cin>>src1>>src2;
//     dfs(src1, src2);
    
//     return 0;
// }


//bfs on 2D grid
// #include <bits/stdc++.h>
// using namespace std;
// int n, m;
// vector<pair<int,int>>pr={{0,1},{0,-1},{1,0},{-1,0}};
// bool visit[1000][1000];
// bool check(int a, int b){
//     if(a<0 || b<0 || a>=n || b>=m){
//         return false;
//     }
//     return true;
// }
// void bfs(int a, int b){
//     queue<pair<int,int>>q1;
//     visit[a][b]=true;
//     q1.push({a,b});
//     while(!q1.empty()){
//         pair<int,int>p1=q1.front();
//         q1.pop();
//         cout<<p1.first<<" "<<p1.second<<endl;
//         int a1=p1.first;
//         int b1=p1.second;
//     for(int i=0; i<4; i++){
//         int a2=a1+pr[i].first;
//         int b2=b1+pr[i].second;
//         if(check(a2, b2)==true && visit[a2][b2]==false){
//             q1.push({a2,b2});
//             visit[a2][b2]=true;
//         }
//       }
//    }
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
//     memset(visit,false, sizeof(visit));
//     int s1, s2;
//     cin>>s1>>s2;
//     bfs(s1,s2);
//     return 0;
// }

//dfs implementation
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>myvec[N];
bool visit[N];
void dfs(int src){
    visit[src]=true;
    cout<<src<<" ";
    for(int child:myvec[src]){
        if(visit[child]==false){
            dfs(child);
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
        myvec[a].push_back(b);
        myvec[b].push_back(a);
    }
    dfs(0);
    return 0;
}