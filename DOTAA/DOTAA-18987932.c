#include "bits/stdc++.h"
using namespace std;
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t,n,m,d,s=0,i;
    cin>>t;
    while(t--){
        cin>>n>>m>>d;
        s=0;
        for(int j=0;j<n;j++){
            cin>>i;
            i--;
            s+=(i/d);
        }
        if(s>=m){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}
