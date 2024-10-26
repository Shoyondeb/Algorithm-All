//Adjacency matrix;

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
//     if(matrix[0][1]==1)cout<<"Found\n";
//     return 0;
// }

//Adjacency matrix and list
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin>>n>>e;
    int matrix[n][n];
    memset(matrix,0,sizeof(matrix));
    vector<int>vec[n];
    while(e--){
        int a, b;
        cin>>a>>b;
        matrix[a][b]=1;
        vec[a].push_back(b);
    }
    cout<<"Adjacency List\n";
    for(int i=0; i<n; i++){
        if(vec[i].size()==0) continue;
        for(int j=0; j<vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Adjacency Matrix:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}