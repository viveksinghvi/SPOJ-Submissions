#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > v(1000005);
int a[1000005];
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    int t,n,x;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>v[i].second.first>>x>>v[i].second.second;
            v[i].first=x+v[i].second.first;
        }
        sort(v.begin(),v.begin()+n);
        a[0]=v[0].second.second;
        for(int i=1;i<n;i++){
            int s=-1;
            for(int j=i-1;j>=0;j--){
                if(v[i].second.first>=v[j].first){
                    s=j;
                    break;
                }
            }
            if(s==-1){
                a[i]=max(v[i].second.second,a[i-1]);
            }
            else{
                a[i]=max(v[i].second.second+a[s],a[i-1]);
            }
        }
        cout<<a[n-1]<<'\n';
    }
    return 0;
}
/*
2
4
0 5 10
3 7 14
5 9 7
6 9 8
4
0 5 10
3 7 14
5 9 7
6 9 8

*/
