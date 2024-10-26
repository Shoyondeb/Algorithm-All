#include <bits/stdc++.h>
using namespace std;
class pairr{
    public:
    int first, second;
    void make_pair(int a, int b){
        first=a;
        second=b;
    }
};
int main()
{
    pairr p;
    p.make_pair(9,3);  
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}