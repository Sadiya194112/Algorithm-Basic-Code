#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll Pow(ll b, ll p){
    ll ans=1;
    while(p){
        if(p&1) ans = ans*b;
        b = b*b;
        p = p/2;
    }
    return ans;
}
int main(){
    ll a,b;     cin>>a>>b;
    cout<<Pow(a,b)<<endl;
    return 0;
}
