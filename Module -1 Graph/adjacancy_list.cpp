#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin>>n>>e;
    vector<int>arr[n];
    while(e--){
        int a, b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for(int i=0; i<arr[1].size(); i++){
        cout<<arr[1][i]<<" ";
    }
    return 0;
}