#include <bits/stdc++.h>
using namespace std;
int r(int x,string s){
    int q=0;
    int c=0;
    int r=0;
    for(int i=0;i<s.length();i++){
        c*=10;
        c+=s[i]-'0';
        if(c>=x){
            q=c/x;
            c=c%x;
        }
    }
    return c;
}
int gcd2(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd2(b,a%b);
}
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    int t;
    cin>>t;
    while(t--){
        int x;
        string s;
        cin>>x>>s;
        if(x==0){
            cout<<s<<'\n';
            continue;
        }
        if(x==1){
            cout<<1<<'\n';
            continue;
        }
        cout<<gcd2(x,r(x,s))<<'\n';
    }
    return 0;
}

