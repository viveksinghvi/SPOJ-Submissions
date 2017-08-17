#include "bits/stdc++.h"
using namespace std;
int a[20005];
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int ans=1000000000;
        for(int i=0;i<=n-m;i++){
            //cout<<a[i+m-1]<<' '<<a[i]<<'\n';
            ans=min(ans,a[i+m-1]-a[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
