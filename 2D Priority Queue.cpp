#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,i;    cin>>n;
    priority_queue<int> q[n+2];
    for(i=1; i<=n; i++){
        int x,y;  cin>>x>>y;
        q[x].push(y);
    }
    cout<<endl;
    for(i=1; i<=n; i++){
        while(q[i].size()){
            int val = q[i].top();
            q[i].pop();
            cout<<val<<' ';

        }
        cout<<endl;
    }
    return 0;
}
/*
6
1 2
3 4
1 4
3 4
3 5
2 3

1-> 4 2
2-> 3
4-> 5 4 4

*/
