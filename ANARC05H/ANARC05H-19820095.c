#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
ll mod=1000000007;
int a[1050];
int sum[100];
int rec(int i,int j){
    if(j==1){
        return 1;
    }
    int su=0;
    for(int k=j-1;k>=1;k--){
        if(sum[j-1]-sum[k-1]<=sum[i]-sum[j-1]){
            su+=rec(j-1,k);
        }
        else break;
    }
    return su;
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    string s;
    int t=1;
    cin>>s;
    while(s!="bye"){
        sum[0]=0;
        REP(i,1,s.length()+1,1){
            sum[i]=sum[i-1]+s[i-1]-'0';
        }
        ll ans=0;
        REP(i,1,s.length()+1,1){
            ans+=rec(s.length(),i);
        }
        cout<<t<<". "<<ans<<'\n';
        cin>>s;
        t++;
    }

    return 0;
}
//1. 380 120
