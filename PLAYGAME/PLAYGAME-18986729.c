#include "bits/stdc++.h"
using namespace std;

int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    long long n,m,i,ans;
    cin>>n;
    while(n--){
        cin>>m;
        if(m%3==0){
            cout<<"Ragini"<<'\n';
        }
        else{
            cout<<"Hemlata"<<'\n';
        }
    }
    return 0;
}
