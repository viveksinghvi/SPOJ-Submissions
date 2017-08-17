#include "bits/stdc++.h"
using namespace std;
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t,n;
    long long a=0,j;
    cin>>t;
    while(t--){
        cin>>n;
        a=0;
        for(int i=0;i<n;i++){
            cin>>j;
            a+=2*i*j-(n-1)*j;
        }
        cout<<a<<'\n';
    }
    return 0;
}
