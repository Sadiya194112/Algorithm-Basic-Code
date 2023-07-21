#include<bits/stdc++.h>
#define int long long
#define f first
#define s second
#define endl "\n"
using namespace std;
int n,m,h,x,i,j,sc,sum,p;
void ac(){
    int idx=-1;
    cin>>n>>m>>h;
    vector<vector<int>>a(n,vector<int>(m));
    vector<vector<int>>ps(n,vector<int>(m));
    map<int,pair<int,int>>mp;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++)  cin>>a[i][j];
    }
    for(i=0; i<n; i++){
        sort(a[i].begin(), a[i].end());
    }
    //Prefix sum on 2D sorted array
    for(i=0; i<n; i++){
        ps[i][0]=a[i][0];
        for(j=1; j<m; j++) ps[i][j]=ps[i][j-1]+a[i][j];
    }
//    cout<<endl;
//    for(i=0; i<n; i++){
//        for(j=0; j<m; j++)  cout<<ps[i][j]<<' ';
//        cout<<endl;
//    }
    //Lower bound on 2D prefix sum array
    for(i=0; i<n; i++){
        idx = lower_bound(ps[i].begin(), ps[i].end(),h)-ps[i].begin();

        if(ps[i][idx]==h)  sc=idx+1, p=ps[i][idx];
        else if(ps[i][idx]>h) sc=idx, p=ps[i][idx-1];
        else sc=m, p=ps[i][m-1];
        mp[i] = make_pair(sc,p);
    }
    cout<<endl;
    for(auto &entry:mp) cout<<"mp["<<entry.f<<"] = "<<entry.s.f<<' '<<entry.s.s<<"\n";

}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
/*
Input:
3 3 120
20 15 110
90 90 100
40 40 40

Output:
mp[0] = 2 35
mp[1] = 1 90
mp[2] = 3 120
*/
