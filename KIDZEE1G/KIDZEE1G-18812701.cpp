#include<bits/stdc++.h>
using namespace std;
int readInt () {
	bool minus = false;
	int result = 0;
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

int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    int t,x,n,a,c;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>n;
        a=n/x;
        c=x;
        cout<<"Case "<<i<<": ";
        for(int j=1;j<=a;j++){
            cout<<x<<' ';
            x+=c;
        }
        cout<<'\n';
    }
    return 0;
}
