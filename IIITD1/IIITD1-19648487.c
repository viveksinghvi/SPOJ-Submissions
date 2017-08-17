#include <bits/stdc++.h>
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
using namespace std;
const long long mod=1e9+7;
int main() {
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    long long  te,n,c,t,p,a;
    cin>>te;
    while(te--){
        cin>>n;
        if(n==0){
            cout<<1<<'\n';
            continue;
        }
        if(n>0){
            c=0;
            t=n;
            a=1;
            while(t){
                c++;
                t=t/10;
                if(t){
                    a=a*10;
                    p=t;
                }
            }
            cout<<a<<'\n';
        }
        else{
            c=0;
            t=-n;
            a=1;
            while(t){
                c++;
                t=t/10;
                if(t){
                    a=a*10;
                    p=t;
                }
            }
            cout<<-2*(n)+1*a<<'\n';

        }
    }
    return 0;
}
