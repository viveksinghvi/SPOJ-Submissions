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
int sum(long long n){
    int r=0;
    while(n){
        r+=n%10;
        n=n/10;
    }
    return r;
}
int main(){
    int t,a;
    long long n;
    t=readInt();
    while(t--){
        n=readInt();
        a=sum(n);
        while(n%a){
            n++;
            a=sum(n);
        }
        cout<<n<<'\n';
    }
    return 0;
}
