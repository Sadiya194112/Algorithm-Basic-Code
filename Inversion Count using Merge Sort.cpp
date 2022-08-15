#include<iostream>
#define ll long long
using namespace std;
ll Merge(int ar[], int l, int mid, int r){
    ll inv=0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];

    for(int i=0; i<n1; ++i) a[i]=ar[l+i];
    for(int i=0; i<n2; ++i) b[i]=ar[mid+1+i];
    int i,j,k;
    i=j=0, k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){ //No inversion
            ar[k]=a[i];
            i++, k++;
        }
        else{
            ar[k]=b[j];
            inv+=n1-i;  //No of inversion with b[j]
            j++,k++;
        }
    }
    while(i<n1){
        ar[k]=a[i];
        i++,k++;
    }
    while(j<n2){
        ar[k]=b[j];
        j++,k++;
    }
    return inv;
}

ll mergeSort(int ar[], int l, int r){
    ll inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=mergeSort(ar, l, mid);
        inv+=mergeSort(ar, mid+1, r);
        inv+=Merge(ar, l, mid, r);
    }
    return inv;
}
int main(){
    int n;  cin>>n;
    int ar[n+2];
    for(int i=0; i<n; ++i)  cin>>ar[i];
    cout<<mergeSort(ar, 0, n-1);
    cout<<endl;
    for(int i=0; i<n; ++i)  cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}
