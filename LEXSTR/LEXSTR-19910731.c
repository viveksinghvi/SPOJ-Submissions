#include<bits/stdc++.h>
using namespace std;
#define w(t) while(t--)
#define ll long long
#define S(x) scanf("%d",&x)
#define mp make_pair
#define pb push_back
const int N = 100002;
int parent[N];
std::vector<int> v[N];
int find(int x)
{
	if(x == parent[x])
		return x;
	return parent[x] = (find(parent[x]));
}
void _union(int u, int v)
{
	int p1 = find(u);
	int p2 = find(v);
	if(p1 != p2){
		parent[p2] = p1;
	}
}
int main()
{
	int t,m;
	cin >> t;
	while(t--){
		string s ;
		cin >> s;
		int n = s.size();
		for(int i=0; i<=n; i++)
		{
			parent[i] = i ;
			v[i].clear();
		}
		cin >> m ;
		for(int i=0; i<m;i++)
		{
			int ui , vi;
			cin >> ui >> vi;
			_union(ui,vi);
		}
		for(int i=0;i<n;i++)
		{
			int par = find(i);
			v[par].pb(s[i]);
		}
		for(int i=0; i<=n; i++)
			sort(v[i].begin() , v[i].end());

		for(int i =0; i<=n;i++)
			reverse(v[i].begin() , v[i].end());

		string ans = "";
		for(int i=0;i<n;i++)
		{
			ans+= v[find(i)].back();
			v[find(i)].pop_back();
		}
		cout << ans << endl;
	}
	return 0 ;
}
