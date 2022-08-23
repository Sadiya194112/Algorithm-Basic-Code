#include<bits/stdc++.h>
using namespace std;
const int N=10;
int l[N],i,j;
int LIS(int a[], int n){
    for(i=0; i<n; i++)  l[i]=1;
    for(i=1; i<n; i++){
        for(j=0; j<i; j++){
            if(a[i]>a[j] && l[i]<=l[j])     l[i] = l[j]+1;
        }
    }
    sort(l, l+n);
    return l[n-1];
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";  cin>>n;
    int a[n+3];
    for(int i=0; i<n; i++)  cin>>a[i];

    int res = LIS(a, n);
    cout<<res<<endl;

    return 0;
}
