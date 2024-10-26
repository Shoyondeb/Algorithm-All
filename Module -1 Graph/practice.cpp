//adjacency matrix
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, e;
//     cin>>n>>e;
//     int matrix[n][n];
//     memset(matrix, 0, sizeof(matrix));

//     while(e--){
//         int a, b;
//         cin>>a>>b;
//         matrix[a][b]=1;
//         matrix[b][a]=1;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//adjecency matrix
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,e;
//     cin>>n>>e;

//     vector<int>vec[n];
//     while(e--){
//         int a, b;
//         cin>>a>>b;
//         vec[a].push_back(b);
//         vec[b].push_back(a);
//     }
//     for(int i=0; i<n; i++){
//         for(int child: vec[i]){
//             cout<<child<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//list edge
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin>>n>>e;
    vector<pair<int,int>>lst;
    while(e--){
        int a, b;
        cin>>a>>b;
        lst.push_back({a,b});
    }
     for(pair<int,int>v: lst){
        cout<<v.first<<" "<<v.second<<endl;
     }
    return 0;
}