#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
ll mod=1000000007;
//ll a[1000005];
ll d[100][2];
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int n;
    ll x;
    memset(d,0,sizeof(d));
    cin>>n;
    REP(i,0,n,1){
        cin>>x;
        REP(j,0,63,1){
            if(x&1){
                d[j][1]=1;
            }
            else{
                d[j][0]=1;
            }
            x=x>>1;
        }
    }
    ll ans=0;
    ll c=1;
    REP(i,0,63,1){
        if(d[i][0] && d[i][1]){
            ans+=c;
            //cout<<i<<'\n';
        }
        c=c<<1;
    }
    cout<<ans;
    return 0;
}
/*
3
10
15
17
*/
