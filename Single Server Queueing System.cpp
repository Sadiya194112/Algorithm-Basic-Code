#include<bits/stdc++.h>
using namespace std;
int att[10],st[10],cat[10],cdt[10],ql[10],idt[10],clk[10],nat[10],ndt[10];
int NAT,NDT,CLK,i,j,k,N,diff,p,q;

void L1(){
    CLK=NDT; clk[k]=CLK;
    cdt[j+1] = cdt[j]+st[j+1];
    NDT =  cdt[j+1]; ndt[q]=NDT;
    j=j+1;  k++,q++;
}
void L2(){
    CLK = NAT; clk[k]=CLK;
    NAT = cat[i+1]; nat[p]=NAT;
    cdt[j+1] = cat[i]+st[j+1];
    NDT = cdt[j+1]; ndt[q]=NDT;
    j++, i++; k++,p++,q++;
}

signed main(){
    int n;  cin>>n; p=q=k=1;

    for(i=1; i<=n; i++)  cin>>att[i]; cat[1]=att[1];
    for(i=1; i<=n; i++)  cin>>st[i];
    for(i=2; i<=n; i++) cat[i]=cat[i-1]+att[i];
    cout<<endl;

    i=2,j=1;
    //p for nat, q for ndt, k for clk
    NAT=cat[2], nat[p]=cat[2], NDT=cdt[1]=st[1], ndt[q]=NDT; CLK=0; clk[k]=CLK;
    p++,q++,k++;
    N=n;


    do{
        if(i<=N){
                diff=NAT-NDT;

                if(diff<0){
                    CLK=NAT; clk[k]=CLK;
                    NAT=cat[i+1]; nat[p]=NAT;
                    ql[i]=i-j;
                    i=i+1; k++,p++;
                }
                else if(diff>0){
                    if(i-j>1){
                        L1();
                    }
                    else{
                        idt[i]=diff;    L2();
                    }
                }
                else if(diff==0){
                    ql[i] = ql[i-1];    L2();
                }
        }
        if(i>N) L1();

    }while(j<n);

    for(i=1; i<=n; i++)     cout<<nat[i]<<' ';  cout<<endl;
    for(i=1; i<=n; i++)     cout<<ndt[i]<<' ';  cout<<endl;
    for(i=1; i<=n; i++)     cout<<clk[i]<<' ';  cout<<endl;
    for(i=1; i<=n; i++)     cout<<cdt[i]<<' ';  cout<<endl;
    for(i=1; i<=n; i++)     cout<<ql[i]<<' ';  cout<<endl;
    for(i=1; i<=n; i++)     cout<<idt[i]<<' ';  cout<<endl;


    return 0;

}
