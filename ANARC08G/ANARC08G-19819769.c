#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
ll mod=1000000007;
int a[1050];
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int n,x,t=1;
    cin>>n;
    set<int> s;
    ll ans=0,ans1=0;
    while(n!=0){
        ans1=0;
        memset(a,0,sizeof(a));
        REP(i,0,n,1){
            REP(j,0,n,1){
                cin>>x;
                ans1+=x;
                a[i]+=x;
                a[j]-=x;
            }
        }
        ans=0;
        REP(i,0,n,1){
            if(a[i]>=0){
                ans+=a[i];
            }
        }
        cout<<t<<". "<<ans1<<' '<<ans<<'\n';
        cin>>n;
        t++;
    }
    return 0;
}
//1. 380 120
