#include "bits/stdc++.h"
using namespace std;
int a[105];
int b[105];

int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;n=k;

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        b[0]=0;
        for(int i=1;i<=k;i++){
            b[i]=-1;
            for(int j=1;j<=n;j++){
                if(a[j]!=-1 && j<=i && b[i-j]!=-1){
                    //cout<<"das";
                    if(b[i]==-1){
                        b[i]=b[i-j]+a[j];
                    }
                    else{
                        b[i]=min(b[i],b[i-j]+a[j]);
                    }
                    //cout<<b[i]<<'\n';

                }
            }
        }
        cout<<b[k]<<'\n';
    }
    return 0;
}
