#include<bits/stdc++.h>
using namespace std;
int v[1005];
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>v[0];
        long long s=v[0],m;
        m=s;
        for(int i=1;i<n;i++){
            cin>>v[i];
            s+=v[i];
            if(s<m){
                m=s;
            }
        }
        if(m<=0){
            cout<<1-m<<'\n';
        }
        else{
            cout<<0<<'\n';
        }
    }
    return 0;
}
