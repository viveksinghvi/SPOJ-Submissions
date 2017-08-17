#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
ll mod=1000000007;

int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int q;
    cin>>q;
    string s;
    int n;
    deque<int> d;
    int r=0;
    while(q--){
        cin>>s;
        if(s=="back"){
            if(d.empty()){
               cout<<"No job for Ada?"<<'\n';
            }
            else if(r){
                cout<<d.front()<<'\n';
                d.pop_front();
            }
            else{
                cout<<d.back()<<'\n';
                d.pop_back();
            }
        }
        if(s=="front"){
            if(d.empty()){
               cout<<"No job for Ada?"<<'\n';
            }
            else if(r){
                cout<<d.back()<<'\n';
                d.pop_back();
            }
            else{
                cout<<d.front()<<'\n';
                d.pop_front();
            }
        }
        if(s=="reverse"){
            r=1-r;
        }
        if(s=="push_back"){
            cin>>n;
            if(r){
                d.push_front(n);
            }
            else{
                d.push_back(n);
            }
        }
        if(s=="toFront"){
            cin>>n;
            if(r){
                d.push_back(n);
            }
            else{
                d.push_front(n);
            }
        }
    }
    return 0;
}
