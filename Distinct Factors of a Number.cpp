#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,cnt=0;    cin>>num;
    for(int i=1; i*i<=num; i++){
        if(num%i==0){
            cnt++;
            if(i!=num/i)    cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
