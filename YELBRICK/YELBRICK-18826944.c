#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;
typedef pair<LL, LL> pll;
int gcd(int x,int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int n,g,x;
    LL vol=0;
    cin>>n;
    while(n!=0){
        vol=0;
        int x,y,z,l;
        for(int i=0;i<n;i++){
            cin>>x>>y>>z;
            l=min(x,min(y,z));
            vol+=1LL*x*y*z;
            if(i==0)g=l;
            else{
                g=gcd(g,l);
            }
        }
        cout<<vol/(1LL*g*g*g)<<'\n';
        cin>>n;
    }
    return 0;
}

