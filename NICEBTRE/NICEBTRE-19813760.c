#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
ll mod=1000000007;
char x;
ll ans=0;
void dep(ll d){
    cin>>x;
    ans=max(ans,d);
    if(x=='n'){
        dep(d+1);
    }
    else if(x=='l'){
        ans=max(ans,d+1);
    }
    cin>>x;
    if(x=='n'){
        dep(d+1);
    }
    else if(x=='l'){
        ans=max(ans,d+1);
    }
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ans=0;
        cin>>x;
        if(x=='n'){
            dep(0);
        }
        else{
            ans=0;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
/*
3
10
15
17
*/
