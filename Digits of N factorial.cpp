#include<bits/stdc++.h>
#define int long long
using namespace std;
int fact(int n){
    double x=0,eps=1e-9;
    for(int i=1; i<=n; i++){
        x+=log2(i);
    }
    int res=x+1+eps;
    return res;
}
signed main(){
    int n;    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
