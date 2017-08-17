#include <bits/stdc++.h>
using namespace std;
long long readInt () {
	bool minus = false;
    long long result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
long long sum(int x,int y,int m){
    if(y==0){
        return 1;
    }
    long long p=sum(x,y/2,m)%m;
    p=(p*p)%m;
    return (y%2==0)?p:(x*p)%m;
}
int mod=1000000000+7;
int main(){
    int n,m;
    n=readInt();
    m=readInt();
    while(n!=0){
        long long a=sum(n,m,mod);
        if(a==0){
            a=mod;
        }
        a--;
        //cout<<"a "<<a<<'\n';
        long long r=(n*a)%mod;
        //cout<<r<<' ';
        long long b=sum(n-1,mod-2,mod);
        ///cout<<"b "<<b<<'\n';
        r=(r*b)%mod;
        cout<<r<<'\n';
        n=readInt();
        m=readInt();
    }
    return 0;
}
