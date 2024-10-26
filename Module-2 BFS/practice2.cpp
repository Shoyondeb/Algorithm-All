//level tracking
#include <bits/stdc++.h>
using namespace std;
const int N=1005;
vector<int>vec[1005];
bool visit[N];
int patharray[N];
int level[N];
void bfs(int src){
    queue<int>que;
    que.push(src);
    level[src]=0;
    visit[src]=true;
    while(!que.empty()){
        int parent=que.front();
        que.pop();
        for(auto child:vec[parent]) {
            if(visit[child]==false){
                visit[child]=true;
                patharray[child]=parent;
                level[child]=level[parent]+1;
                que.push(child);
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
    memset(patharray, -1, sizeof(patharray));

    int src,desti;
    cin>>src>>desti;
    bfs(src);
cout<<"Level of the nodes:\n";
for(int i=0; i<n; i++){
    cout<<i<<"-"<<level[i]<<endl;
}
cout<<"Path of the destination\n";
while(desti!=-1){
    cout<<desti<<" ";
    desti=patharray[desti];
}
    return 0;
}