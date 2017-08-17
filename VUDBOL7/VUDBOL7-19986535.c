#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(I,A,B)   for(int I= (A); I<(B); ++I)
#define REP(I,N)     FOR(I,0,N)
#define ALL(A)       (A).begin(), (A).end()
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
	vector<int> fib( 36, 0 );
	fib[1] = 1;
	fib[2] = 2;
	FOR( i, 3, 36 )
		fib[i] = fib[i-1]+fib[i-2];//, cout << fib[i] << endl;;
	int N;
	vector<int>::iterator pos, prev;
	cin>>N;
	while(N!=0)
	{
		vector<int> ans( N, 0 );
		int X;
		REP( i, N )
		{
			cin>>X ;
			if( X >= 7465176 )
			{
				ans[i] = 9227465;
				continue;
			}
			pos = lower_bound( fib.begin(), fib.end(), X );
			if( *pos == X )
				ans[i] = X;
			else
			{
				prev = pos-1;
				if( abs(*pos-X) > abs(*prev-X) )
					ans[i] = *prev;
				else
					ans[i] = *pos;
			}
		}
		sort( ans.begin(), ans.end() );
		cout<<ans[0];
		FOR( i, 1, N )
			cout<<" "<<ans[i];
		cout<<'\n';
        cin>>N;
	}
}
