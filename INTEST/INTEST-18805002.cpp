#include <bits/stdc++.h>
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
    int n,k,a=0,x;
    n=readInt();
    k=readInt();
    for(int i=0;i<n;i++){
        x=readInt();
        if(x%k==0){
            a++;
        }
    }
    cout<<a;
    return 0;
}
