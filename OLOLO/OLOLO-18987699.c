#include "bits/stdc++.h"
using namespace std;
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int n,i,s=0,s2=0;
    cin>>n;
    while(n--){
        cin>>i;
        s=s^i;
    }
    cout<<s;
    return 0;
}
