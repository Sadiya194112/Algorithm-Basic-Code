
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

int i,j,n,x,y,t;
void ac(){
    cin>>n;
    int cnt[33]={0};

    for(i=0; i<n; i++){
        cin>>x;
        for(j=0; j<32; j++){
            if((x&1)==1) cnt[j]++;  //if jth bit of x is 1 then increment cnt[j] by 1.
            x = (x>>1);
        }
    }
    for(i=0; i<32; i++) cout<<cnt[i]<<' ';
    cout<<endl;

}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    // ac();

    int tc; cin>>tc;
    while(tc--){
        ac();
    }
}
 /*
 input:
 1
 4
 1 2 3 4
 Output:
 2 2 1 0 0 0 0 0 ........
 */

