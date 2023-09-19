#include<bits/stdc++.h>
#define int long long
#define pb push_back
// #define ff first
// #define ss second
#define pi acos(-1.0)
#define yes puts("YES")
#define no puts("NO")
// mini = min_element(a, a+n)-a;
// minval = *min_element(a, a+n);
const int mod=1e9+7;
using namespace std;

int i,j,n,m,q,t;
void ac(){
    cin>>n>>m>>q;
    map<int, multiset<int>>mp;
    for(i=0; i<n; i++){
        int x,y;    cin>>x>>y;
        mp[y].insert(x);
    }

    for(auto &[key, val]:mp){
        cout<<key<<"-> ";
        for(auto v : val) cout<<v<<' ';
        cout<<endl;
    }
/*    for(auto &ele:mp){
        cout<<ele.first<<"-> ";
        for(auto val : ele.second) cout<<val<<' ';
        cout<<endl;
    }*/
/*    auto it = mp.begin();
    while(true){
        auto &prices = it->second;
        cout<<it->first<<"-> ";
        for(auto pp:prices){
            cout<<pp<<' ';
        }
        cout<<endl;
        if(it==mp.end()) break;
        it++;
    }*/

}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    ac();
}
/*
input:
7 3 30
5 1
7 2
3 3
4 3
12 2
5 1
6 1

Output:
1-> 5 5 6
2-> 7 12
3-> 3 4
*/

