#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void ac(){
    int n,i;    cin>>n;
    int a[n+2],ps[n+2];
    for(i=0; i<n; i++)  cin>>a[i];
    ps[0]=a[0];

    for(i=1; i<n; i++) ps[i] = ps[i-1]+a[i];
    map<int,int> m;
    for(i=0; i<n; i++){
        m[ps[i]]++;
    }
    int ans=0;
    for(auto &[x,y] : m){
        ans += (y*(y-1))/2;
    }
    cout<<ans<<endl;

}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
