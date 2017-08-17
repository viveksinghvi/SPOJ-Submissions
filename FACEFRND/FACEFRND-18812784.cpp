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
    int n,a,m,l;
    set<int> s;
    cin>>n;
    l=n;
    while(n--){
        cin>>a;
        s.insert(a);
        cin>>m;
        while(m--){
            cin>>a;
            s.insert(a);
        }
    }
    cout<<s.size()-l;
    return 0;
}
