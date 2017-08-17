#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
int a[100050];
ll inf=10000000000000;
int main(){
    //std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    //cin.tie(NULL);
    int n;
    a[0]=0;
    a[1]=1;
    REP(i,2,100005,1){
        a[i]=1000500;
        for(int j=1;j*j*j<=i;j++){
           a[i]=min(a[i],a[i-j*j*j]+1);
        }
    }
    int t=1;
    while((scanf("%d",&n))!=EOF){
        cout<<"Case #"<<t<<": "<<a[n]<<'\n';
        t++;
    }
    return 0;
}
//1. 380 120
