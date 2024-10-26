#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>vec[N];
bool visit[N];
bool patharray[N];
bool ans=false;
void dfs(int pr){
    visit[pr]=true;
    patharray[pr]=true;
    for(auto child:vec[pr]){
        if(patharray[child]==true){
            ans=true;
        }
        if(visit[child]==false){
           dfs(child);
        }
    }
    patharray[pr]=false;

}

int main()
{
    int n, m;
    cin>>n>>m;
    while(m--){
        int a, b;
        cin>>a>>b;
        vec[a].push_back(b);
    }
    memset(visit, false, sizeof(visit));
    memset(patharray, false, sizeof(patharray));
    for(int i=0; i<n; i++){
        if(visit[i]==false){
            dfs(i);
        }
    }
    if(ans) cout<<"true\n";
    else cout<<"false\n";
    return 0;
}