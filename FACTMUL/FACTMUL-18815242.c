#include<bits/stdc++.h>
using namespace std;
long long mod=109546051211;
long long mulmod(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    long long n,t=1,c=1,p=1;
    cin>>n;
    for(long long i=2;i<=n;i++){
        t=mulmod(mulmod(t,c,mod),i,mod);
        ///cout<<t<<'\n';
        //t=t%mod;
        if(t==0)
            break;
        c=mulmod(c,i,mod);
        //c=c%mod;
    }
    cout<<t;
    return 0;
}
//10000
