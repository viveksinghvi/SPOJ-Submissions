#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t,n,x;
    cin>>t;
    for(int jj=1;jj<=t;jj++){
        cin>>n;
        cin>>x;
        long long s=x,m;
        m=s;
        for(int i=1;i<n;i++){
            cin>>x;
            s+=x;
            if(s<m){
                m=s;
            }
        }
        if(m<=0){
            cout<<"Scenario #"<<jj<<": "<<1-m<<'\n';
        }
        else{
            cout<<"Scenario #"<<jj<<": "<<1<<'\n';
        }
    }
    return 0;
}
