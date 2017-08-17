#include <bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long a[100009];
int ch(int f,int n,int k){
    int i=0;
    k--;
    long long pr=a[0];
    while(i<n && k ){
        if(a[i]-pr>=f){
            k--;
            pr=a[i];
        }
        i++;
    }
    if(k)return 0;
    return 1;
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int n,k,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        long long  i=1,j=1000000000,mid,ans=-1;
        while(i<=j){
            mid=(i+j)/2;
            if(ch(mid,n,k)){
                i=mid+1;
                ans=mid;
            }
            else{
                j=mid-1;
            }
        }
        if(ans==-1){
            cout<<"0\n";
        }
        else{
            cout<<ans<<'\n';
        }
    }
    return 0;
}
