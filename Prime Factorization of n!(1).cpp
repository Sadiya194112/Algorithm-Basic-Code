//Linear loop from 1 to N
//Time Complexity: O(n*factorize())

#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

const int N=25;
bool is_prime[N]={0};
vector<int>prime;
int freq_pf[N];     //Frequency of each prime factor upto N
void sieve(){
    int i,j;
    for(i=2; i*i<=N; i++){
        if(is_prime[i]==false){
            prime.push_back(i);
            for(j=i*i; j<=N; j+=i){
                is_prime[j]=true;
            }
        }
    }
//    for(i=0; i<prime.size(); i++)   cout<<prime[i]<<" ";
//    cout<<endl;
}
//For 6!, x=2,3,4,5,6 as 6!=6*5*4*3*2*1
void factorize(int x){
    int i,sqrt_x = sqrt(x);
    //Taking the primes till sqrt of(x) for each x
    for(i=0; i<prime.size() && prime[i]<=sqrt_x; i++){
        if(x%prime[i]==0){
            while(x%prime[i]==0){
                x/=prime[i];
                freq_pf[prime[i]]++;    //Increment frequency of each prime factor
            }
            sqrt_x = sqrt(x);   //when x=3/5/7 then sqrt(x)>1. So, that x is also a prime;

        }
        if(x!=1){ //means x itself is a prime.
            freq_pf[x]++;
        }
    }
}
void factFactorize(int n){
    int i;
    for(i=2; i<=n; i++){
        factorize(i);
    }
    //Print the factorization
    for(i = 0; i < prime.size(); i++ ) {
        printf ( "%d^%d\n", prime[i], freq_pf[prime[i]]);
    }
}
signed main(){
    cout<<"Enter N!: \n";
    int n;
    cin>>n;
    sieve();
    factFactorize(n);
    return 0;
}
