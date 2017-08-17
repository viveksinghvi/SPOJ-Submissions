#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
ll a[5050];
ll b[5050];
ll dp[5050][5050];
    int n,m;
    ll inf=10000000000000;
ll r(){
    REP(i,0,n,1){
        REP(j,0,m,1){
            if(i==0 && j==0)dp[i][j]=abs(a[0]-b[0]);
            else if(j==0)dp[i][j]=inf;
            else if(i>j)dp[i][j]=inf;
            else{
                dp[i][j]=dp[i][j-1];
                if(i==0){
                    dp[i][j]=min(dp[i][j],abs(b[j]-a[0]));
                }
                else{
                    dp[i][j]=min(dp[i][j],dp[i-1][j-1]+abs(b[j]-a[i]));
                }
            }
        }
    }
    return dp[n-1][m-1];
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);

    cin>>n>>m;
    REP(i,0,n,1){
        cin>>a[i];
    }
    REP(i,0,m,1){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    cout<<r();
    return 0;
}
//1. 380 120
