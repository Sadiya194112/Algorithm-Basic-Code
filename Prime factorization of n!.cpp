#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

const int N=25;
bool isPrime[N];
vector<int> prime;
void sieve(){
    int i,j;
    for(i=2; i<=N; i++){
        if(isPrime[i]==false){
            prime.push_back(i);
            for(j=i*i; j<=N; j+=i){
                isPrime[j]=true;
            }
        }
    }

}
void factFactorize(int &n){
    int i;
    for(i=0; i<prime.size() && prime[i]<=n; i++){
        int x = n;
        int freq=0;
        while(x/prime[i]){
            freq+=x/prime[i];   //Frequency of each prime factor
            x = x/prime[i];
        }
        printf("%lld^%lld\n", prime[i], freq);
    }
}
signed main(){
    sieve();
    cout<<"Enter n: \n";
    int n;  cin>>n;
    factFactorize(n);
    return 0;
}
