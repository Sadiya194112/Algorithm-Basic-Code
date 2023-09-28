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

int i,j,n,k,x;
int Case=1;
void ac(){
    cin>>n;
    vector<set<int>>st;  //Like 2d array of 2d set

    for(i=0; i<n; i++){
        cin>>k; //Length of each set
        set<int>temp;
        for(j=0; j<k; j++){
            cin>>x;
            temp.insert(x);
        }
        st.pb(temp);
    }
    for(auto ar:st){
        for(auto v:ar)  cout<<v<<' ';
        cout<<endl;
    }
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
Input:
1
4
4 1 2 3 4
3 2 5 6
3 3 5 6
3 4 5 6

Output:
1 2 3 4
2 5 6
3 5 6
4 5 6
*/






