#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

signed main(){

    priority_queue<int, vector<int>, greater<int>>pq;

    int n,x,i;  cin>>n;
    for(i=0; i<n; i++){
        cin>>x;
        pq.push(x);
    }
    while(!pq.empty()){
        int p;
        p = pq.top();
        cout<<p<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
}
