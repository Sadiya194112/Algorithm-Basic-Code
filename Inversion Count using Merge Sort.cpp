#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Merge(ll ar[], int l, ll mid, int r){
    ll inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    ll a[n1], b[n2];

    for(int i=0; i<n1; ++i) a[i]=ar[l+i];
    for(int i=0; i<n2; ++i) b[i]=ar[mid+i+1];

    int i=0,j=0,k=l;
    while(i<n1 and j<n2){
        if(a[i]<=b[j]){
            ar[k]=a[i];
            k++,i++;
        }
        else{
            ar[k]=b[j];
            inv+=n1-i;
            k++,j++;
        }
    }
    while(i<n1){
        ar[k]=a[i];
        k++,i++;
    }
    while(j<n2){
        ar[k]=b[j];
        k++,j++;
    }
    return inv;
}
ll mergeSort(ll ar[], int l, int r){
    ll inv=0;
    if(l<r){
        ll mid=(l+r)/2;
        inv+=mergeSort(ar, l, mid);
        inv+=mergeSort(ar, mid+1, r);
        inv+=Merge(ar, l, mid, r);
    }
    return inv;
}
void ac(){
    ll n;   cin>>n;
    ll ar[n+1];
    int i;
    for(i=0; i<n; ++i)  cin>>ar[i];
    cout<<mergeSort(ar, 0, n-1)<<endl;
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
