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
int i,j,n,k,x,y,l;

void ac(){
    cin>>n;
    // bool vis[n+2];
    // memset(vis, 0, sizeof(vis));

    //To fill the array with a value
    // fill(a, a+n, 4);

    vector<int>a(n);
    for(i=0; i<n; i++)  cin>>a[i];

    int curr=0,mxSum=0;
    for(i=0; i<n; i++){
        if(curr<0) curr=0;
        curr+=a[i];
        mxSum = max(mxSum, curr);
    }
    cout<<mxSum<<endl;

}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    int tc; cin>>tc;
    while(tc--){
        ac();
    }
}
/*
Input:
    1
    8
    -5 -1 5 -3 -1 2 3 6

Output: 6

*/

