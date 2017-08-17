#include "bits/stdc++.h"
using namespace std;
long long a[50005];
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t;
    long long n;
    cin>>t;
    while(t--){
        //cout<<t<<"drt";
        long long ans;
        cin>>n;
        ans=(n*(n+1))/2;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long j=1;
        long long p=a[0];
        for(int i=1;i<n;i++){
            if(p==a[i]){
                j++;
            }
            else{
                p=a[i];
                ans=ans+(j*(j-1))/2;
                j=1;
            }
        }
        ans=ans+(j*(j-1))/2;
        cout<<ans<<'\n';
    }

    return 0;
}
