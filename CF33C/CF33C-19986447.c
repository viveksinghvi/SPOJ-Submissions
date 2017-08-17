#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n,cnt=0,m=0,sum=0,tmp=0;
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>tmp,sum+=tmp,cnt+=tmp,m=max(m,cnt),cnt=max(cnt,0);
    cout<<-sum+2*m<<'\n';
    }
}
