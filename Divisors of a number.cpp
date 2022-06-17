#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    int num;    cin>>num;
    for(int i=1; i*i<=num; i++){
        if(num%i==0){
            v.push_back(i);
            if(i!=num/i)    v.push_back(num/i);
        }
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)   cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}
