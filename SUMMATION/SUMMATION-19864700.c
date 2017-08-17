#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
ll mod=100000007;

ll p2(int x){
    if(x==0)return 1;
    if(x==1)return 2;
    ll t=p2(x/2);
    ll ans=t*t*p2(x%2);
    return (ans%mod);
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    ll t,n,x,tt=0;
    ll sum=0;
    cin>>t;
    while(t--){
        tt++;
        cin>>n;
        sum=0;
        REP(i,0,n,1){
            cin>>x;
            sum+=x;
            sum%=mod;
        }
        sum=(sum*p2(n-1))%mod;
        cout<<"Case "<<tt<<": "<<sum<<'\n';
    }
    return 0;
}
