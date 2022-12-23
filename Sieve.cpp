#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
vector<bool> isPrime(N, true);


int main(){
    isPrime[0] = isPrime[1] = false;
    int i,j;
    vector<int> v;
    for(i=2; i<N; i++){
        if(isPrime[i]==true){
            v.push_back(i);
            for(j=2*i; j<N; j+=i){
                isPrime[j]=false;
            }
        }
    }
    for(i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
//    cout<<v.size()<<endl;

    return 0;

}
