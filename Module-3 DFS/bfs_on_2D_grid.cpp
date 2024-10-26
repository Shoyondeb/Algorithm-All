// #include <bits/stdc++.h>
// using namespace std;
// bool visit[20][20];
// int n, m;
// int level[20][20];
// vector<pair<int,int>>place={{0,1},{0,-1},{-1, 0}, {1,0}};
// bool check(int r, int c){
//     if(r<0 ||r>=n || c<0 || c>=m){
//         return false;
//     }
//     return true;
// }
// void bfs(int si, int sj){
//     queue<pair<int,int>>que;
//     que.push({si, sj});
//     level[si][sj]=0;
//     visit[si][sj]=true;
//     while(!que.empty()){
//         pair<int, int>par=que.front();
//         que.pop();
//         cout<<par.first<<" "<<par.second<<endl;
//         for(int i=0; i<4; i++){
//             int a=par.first+place[i].first;
//             int b=par.second+place[i].second;
//         if(check(a, b)==true &&visit[a][b]==false){ 
//             que.push({a,b});
//             visit[a][b]=true;
//             level[a][b]=level[par.first][par.second]+1;
//            }
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
//     cin>>r>>c;
//     bfs(r, c);
//     cout<<level[1][2]<<endl;
//     return 0;
// }

// Again practice
 #include <bits/stdc++.h>
 using namespace std;
 int r, c;
 bool visit[100][100];
 int level[100][100];
 vector<pair<int,int>>vec={{0,1},{0,-1},{-1,0},{1,0}};
 bool check(int a, int b){
    if(a<0 ||a>=r ||b<0||b>=c)return false;
    return true;

 }
 void bfs(int sr, int sc){
    queue<pair<int, int>>pp;
    visit[sr][sc]=true;
    level[sr][sc]=0;
    pp.push({sr, sc});
    while(!pp.empty()){
        pair<int, int>pq=pp.front();
        int a=pq.first;
        int b=pq.second;
        cout<<a<<" "<<b<<endl;
        pp.pop();
         
        for(int i=0; i<4; i++){
            int f=a+vec[i].first;
            int s=b+vec[i].second;
            if(check(f,s)==true && visit[f][s]==false){
                pp.push({f,s});
                visit[f][s]=true;
                level[f][s]=level[a][b]+1;
            }
        }
    }
 }
 int main()
 {
    cin>>r>>c;

     char arr[r][c];
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
     }
     int sr, sc;
     cin>>sr>>sc;
     bfs(sr, sc);
     cout<<endl<<level[3][0];
     return 0;
 }