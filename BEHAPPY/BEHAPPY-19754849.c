#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
long long mod=1000000007;
int a[35][2];
ll dps[35][105][105];
ll dp(int i, int j,int k){
    ll sum=0;
    if(dps[i][j][k]!=-1)return dps[i][j][k];
    if(k>j){
        dps[i][j][k]=0;
        return 0;
    }
    if(i==0){
        if(j==k){
            dps[i][j][k]=1;
            return 1;
        }
        else {
            dps[i][j][k]=0;
            return 0;
            }
    }
    dps[i][j][k]=0;
    REP(l,a[i-1][0],a[i-1][1]+1,1)
        dps[i][j][k]+=dp(i-1,j-k,l);
    return dps[i][j][k];
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int m,n;
    ll sum;
    cin>>m>>n;
    while(n||m){
        sum=0;
        REP(i,0,m,1)cin>>a[i][0]>>a[i][1];
        memset(dps,-1,sizeof(dps));
        REP(l,a[m-1][0],a[m-1][1]+1,1)
            sum+=dp(m-1,n,l);
        cout<<sum<<'\n';
        cin>>m>>n;
    }
    //cin>>n>>m;
    return 0;
}
/*
3 5
0 1
1 3
1 4
0 0
*/
