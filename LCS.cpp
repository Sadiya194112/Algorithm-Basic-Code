#include<bits/stdc++.h>
using namespace std;
const int N=50;
int b[N][N], c[N][N],m,n,i,j;

int LCS(char s1[], char s2[]){
    m = strlen(s1);
    n = strlen(s2);
    for(i=1; i<=m; i++) c[i][0]=0;
    for(j=0; j<=n; j++) c[0][j]=0;
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            if(s1[i]==s2[j]){
                c[i][j] = c[i-1][j-1]+1;
                b[i][j] = -3;
            }
            else if(c[i-1][j]>=c[i][j-1]){
                c[i][j] = max(c[i-1][j], c[i][j-1]);
                b[i][j] = -2;
            }
            else if(c[i][j-1]>=c[i-1][j]){
                c[i][j] = max(c[i-1][j], c[i][j-1]);
                b[i][j] = -1;
            }
        }
    }
    int ans = c[m][n];
    return ans;
}
void print_LCS(int b[][N], char s1[], int i, int j){
    if(i==0 || j==0)    return;
    if(b[i][j]==-3){
        print_LCS(b, s1, i-1, j-1);
        cout<<s1[i];
    }
    else if(b[i][j]==-2)    print_LCS(b, s1, i-1, j);
    else print_LCS(b, s1, i, j-1);
}
int main(){
    char s1[50], s2[50];
    gets(s1);
    gets(s2);
    int res = LCS(s1, s2);

//    for(int i=0; i<=m; ++i){
//        for(int j=0; j<=n; ++j)  cout<<c[i][j]<<" ";
//        cout<<endl;
//    }
    cout<<res<<endl;
    print_LCS(b, s1, m, n);
    cout<<endl;
    return 0;
}

