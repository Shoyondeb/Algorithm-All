// //Adjacency Matrix
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, e;
    

//     cin>>n>>e;int matrix[n][n];
//     memset(matrix, 0, sizeof(matrix));
//     while(e--){
//         int a, b;
//         cin>>a>>b;
//         matrix[a][b]=1;
//         matrix[b][a]=1;
//     }
//     for(int i=0; i<n ; i++){
//         for(int j=0; j<n; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//adjacency list
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, e;
//     cin>>n>>e;
//     vector<int>vec[n];
//     while(e--){
//         int a, b;
//         cin>>a>>b;
//         vec[a].push_back(b);
//         vec[b].push_back(a); 
//     }
//     for(int i=0; i<n; i++){
//     for(int child: vec[i]){
//         cout<<child<<" ";
//     }
//     cout<<endl;
//     }
//     return 0;
// }

//Edge list
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> vec;
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        vec.push_back({a, b});
    }
    for(auto vls: vec){
        cout<<vls.first<<" "<<vls.second<<endl;
    }
    return 0;
}