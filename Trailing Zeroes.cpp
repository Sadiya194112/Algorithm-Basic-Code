//Calculating Trailing Zeroes of n!
#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n,i,cnt=0;      cin>>n;
    for(i=5; i<=n; i*=5){
        cnt += (n/i);
    }
    cout<<cnt<<endl;
    return 0;
}
