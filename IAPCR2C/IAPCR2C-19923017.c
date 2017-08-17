#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
int a[100005];
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t;
    int sum;
    int n,m,x;
    cin>>t;
    int tt=0;
    while(t--){
        tt++;
        memset(a,0,sizeof(a));
        cin>>n>>m;
        REP(i,0,m,1){
            cin>>x;
            a[x]=1;
            a[x+1]=1;
            a[x-1]=1;
        }
        sum=0;
        REP(i,1,n+1,1){
            sum+=a[i];
        }
        cout<<"Case "<<tt<<": "<<sum<<'\n';
    }
    return 0;
}
