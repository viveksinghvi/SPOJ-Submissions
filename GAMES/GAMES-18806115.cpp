#include <bits/stdc++.h>
using namespace std;
/*long long readInt () {
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
}*/
int gcd(int x,int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}
int power(int a,int n){
    if(n==1)
        return a;
    if(n==0)
        return 1;
    int t=power(a,n/2);
    return t*t*power(a,n%2);
}
int mod=1000000000+7;
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    string s;
    int t;
    cin>>t;
    while(t--){
    cin>>s;
    int f=0,i,r=0,c=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='.'){
            f=1;
            continue;
        }
        if(f){
            r=r*10;
            r+=s[i]-'0';
            c++;
        }
    }
    if(f){
        if(r==0){
            cout<<1<<'\n';
            continue;
        }
        r=r*power(10,4-c);
        //cout<<r;
        int ans=(r*10000)/gcd(r,10000);
        cout<<ans/r<<'\n';
    }
    else{
        cout<<1<<'\n';
    }
    }
    return 0;
}
