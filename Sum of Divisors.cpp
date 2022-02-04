#include<iostream>
using namespace std;

//Sum of divisors

void divisor_sum(){
    int n,sum=0;
    cin>>n;
    for(int i=1; i*i<=n; i++){
        if(n%i != 0)    continue;

        sum+=i;
        if(n/i != i)    sum+=n/i;
    }
    cout<<sum<<endl;
}


int main(){
    int t=1;
    for(int i=1; i<=t; i++){
        divisor_sum();
    }
    return 0;
}
