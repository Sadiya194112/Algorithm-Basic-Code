#include<bits/stdc++.h>
using namespace std;
signed main(){
    string s;
    vector<string>v;
    while(getline(cin,s)){
        if(s.empty()) break;
        v.push_back(s);
    }
    for(string &str:v)    cout<<str<<endl;
    return 0;
}

/*
Dhaka University of Engineering & Technology.
Department of Computer Science and Engineering
*/
