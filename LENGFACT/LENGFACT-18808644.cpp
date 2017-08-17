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

int moduli=1000000000+7;
const double pi = 3.1415926535897;
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
 int t;
 long long int  ans,n;
 scanf("%d",&t);
 while(t--)
 {
  ans=0;
  scanf("%lld",&n);
  if(n<3)
   printf("1\n");
  else{
  ans=ceil(log10(2*3.141592653589793*n)/2 + n*log10(n/2.7182818284590452353));
  printf("%lld\n",ans);
  }
 }
 return 0;
}
