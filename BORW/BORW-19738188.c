#include <bits/stdc++.h>
using namespace std;
int a[250];
int dp[250][250][250];
long long mod=1000000007;
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t,n,x;
    cin>>t;
    while(t!=-1){
        n=t;
        for(int i=1;i<=n;i++)cin>>a[i];
        dp[0][0][0]=0;
        int ans=0;
       for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                for(int k=0;k<=n;k++){
                    dp[i][j][k]=0;
                }
            }
        }

/*        dp[1][1][1]=0;
        dp[1][1][0]=1;
        dp[1][0][1]=1;*/
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                for(int k=0;k<i;k++){
                    if(a[j]<a[i] || j==0){
                        if(dp[i][i][k]<1+dp[i-1][j][k])dp[i][i][k]=1+dp[i-1][j][k];
                    }
                    if(a[k]>a[i] || k==0){
                        if(dp[i][j][i]<1+dp[i-1][j][k])dp[i][j][i]=1+dp[i-1][j][k];
                    }
                    dp[i][j][k]=max(dp[i][j][k],dp[i-1][j][k]);
                }
            }
        }
        ans=0;
        for(int j=0;j<=n;j++){
            for(int k=0;k<=n;k++){
                    ans=max(ans,dp[n][j][k]);
                }
            }
            cout<<n-ans<<'\n';
    cin>>t;
    }
    /*
    for(int j=0;j<=n;j++){
            for(int k=0;k<n;k++){
                    cout<<dp[n][j][k]<<' ';
                }
                cout<<'\n';
            }
    }*/
    return 0;
}
/*
c
*/
