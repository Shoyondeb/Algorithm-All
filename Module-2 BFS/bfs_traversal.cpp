#include <bits/stdc++.h>
using namespace std;
vector<int>vec[1005];
bool visit[1005];
void bfs(int src){
    queue<int>que;
    que.push(src);
    visit[src]=true;
    while(!que.empty()){
        int parent=que.front();
        que.pop();
        cout<<parent<<" ";
        for(int i=0; i<vec[parent].size(); i++){

            if(visit[vec[parent][i]]==false){
            que.push(vec[parent][i]);
            visit[vec[parent][i]]=true;
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
    int src;
    cin>>src;
    
    bfs(src);
    return 0;
}