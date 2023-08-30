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
int i,j,n;

/*Sieve produces all primes not greater than n. Here n=500.
  If the array contains maximum value=200000 so the value doesn't
  contain 2 primes greater than 500. Ex: 501*501=251001 which is
  greater than 200000.
*/
bool vis[501];
vector<int>prime;

void sieve(){
    for(i=2; i<=500; i++){
        if(!vis[i]){
            prime.pb(i);
            for(j=i*i; j<=500; j+=i) vis[j]=1;
        }
    }
    for(i=0; i<prime.size(); i++) cout<<prime[i]<<' ';
    cout<<endl;
}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    sieve();

/*    int tc; cin>>tc;
    while(tc--){
        ac();
    }*/
}
