#include <bits/stdc++.h>
using namespace std;
bool a[30000]={false};
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    int n;
    cin>>n;
    int x;
    int s=0;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]=true;
        if(a[x-1] && a[x+1]){
            s-=1;
        }
        else if(a[x+1] || a[x-1]){
            //s-=1;
        }
        else{
            s++;
        }
        cout<<s<<'\n';
    }
    cout<<"Justice\n";
    return 0;
}
