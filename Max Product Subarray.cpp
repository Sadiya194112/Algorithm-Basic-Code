#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;  cin>>n;
    int a[n+3],i,j;
    for(i=1; i<=n; i++){
        cin>>a[i];
    }
    int mx=INT_MIN,ans=1;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            ans = ans*a[j];
            mx = max(mx, ans);
        }
        ans=1;
    }
    cout<<mx<<endl;
    return 0;
}
