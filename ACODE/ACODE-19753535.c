#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;
long long mod=1000000007;
ll a[5050];
ll dp(int n){
    a[n]=1;
    a[n+1]=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0')a[i]=0;
        else if(s[i]=='1')a[i]= a[i+1]+a[i+2];
        else if(s[i]=='2' && i<n-1 && s[i+1]<='6') a[i]= a[i+1]+a[i+2];
        else a[i]=a[i+1];
    }
    return a[0];
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    cin>>s;
    while(s!="0"){
        cout<<dp(s.length())<<'\n';
        cin>>s;
    }
    return 0;
}
/*
226210
301
50
1020
2002
201
3020
0
*/
