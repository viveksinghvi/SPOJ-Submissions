#include <bits/stdc++.h>
using namespace std;
#define SIZE 100+5
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
ll dist [SIZE][SIZE];
ll g [SIZE][SIZE];
bool vis [SIZE][SIZE];
priority_queue< pair < int , pair < int , int > >, vector< pair < int , pair < int , int > > >, greater< pair < int , pair < int , int > > > > s;
int m[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int n,me;
void dijkstra(){            // set all vertex as unvisited
    dist[1][1] = g[1][1];                                                // multiset do the job as a min-priority queue
    s.push({g[1][1] ,{1,1}});                          // insert the source node with distance = 0
    while(!s.empty()){
        pair <int , pair <int , int> > p = s.top();        // pop the vertex with the minimum distance
        s.pop();
        int x = p.second.first;
        int y = p.second.second;
        int wei = p.first;
        if( vis[x][y] ) continue;                  // check if the popped vertex is visited before
        vis[x][y] = true;
        REP(i,0,4,1){
            if((x+m[i][0]==0) ||(y+m[i][1]==0)||(x+m[i][0]==n+1)|| (y+m[i][1]==me+1))continue;
            if(vis[x+m[i][0]][y+m[i][1]])continue;
            if(wei+g[x+m[i][0]][y+m[i][1]]<dist[x+m[i][0]][y+m[i][1]]){
                dist[x+m[i][0]][y+m[i][1]]=wei+g[x+m[i][0]][y+m[i][1]];
                s.push({dist[x+m[i][0]][y+m[i][1]],{x+m[i][0],y+m[i][1]}});
            }
        }
    }
}
    void initialize() {
        for(int i = 0;i <SIZE;++i)
         {
            REP(j,0,SIZE,1){
            vis[i][j] = false;
            dist[i][j]=1e9;
            }
         }
    }
    int main() {
        std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
        cin.tie(NULL);
        int t,a,b,T;
        cin>>t;
        while(t--){
            cin>>n>>me;
            REP(i,1,n+1,1)REP(j,1,me+1,1)cin>>g[i][j];
            initialize();
            dijkstra();
            cin>>a>>b>>T;
            if(dist[a][b]<=T)cout<<"YES"<<'\n'<<T-dist[a][b]<<'\n';
            else cout<<"NO"<<'\n';
        }
        return 0;
}

