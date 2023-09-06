#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define yes puts("YES")
#define no puts("NO")
// mini = min_element(a, a+n)-a;
// minval = *min_element(a, a+n);
const int mod=1e9+7;
using namespace std;
const int N=2e5+5;
int i,j,n,k,x,y;
double eps = 1e-6;  //if we want the accuracy upto 5th decimal places. 1e-6 = 0.000001

double mul(double mid, int n){
    double ans=1;
    for(i=0; i<n; ++i)  ans*=mid;
    return ans;
}

void ac(){
    double x;
    cin>>x>>n;
    // bool vis[n+2];
    // memset(vis, 0, sizeof(vis));

    //To fill the array with a value
    // fill(a, a+n, 4);
    double lo=1,hi=x, mid;
    while(hi-lo>eps){
        mid = (hi+lo)/2;
        if(mul(mid, n)<x) lo=mid;
        else hi=mid;
    }
    cout<<lo<<endl; //You can also print hi. Both will be same upto 5th decimal places.
}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    ac();

    // int tc; cin>>tc;
    // while(tc--){
    //     ac();
    // }
}

