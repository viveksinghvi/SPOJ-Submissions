#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    ll x,t;
    cin>>t;
    ll c=9223372036854775807;
    while(t--){
        cin>>x;
        x=(x>>1)&c;
        cout<<x<<'\n';
    }
    return 0;
}
