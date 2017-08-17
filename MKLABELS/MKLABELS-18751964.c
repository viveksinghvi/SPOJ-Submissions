#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    int i;
    cin>>i;
    int t=1;
    long long a[11]={1,1,1,3,16,125,1296,16807,262144,4782969,100000000};
    while(i!=0){
        cout<<"Case "<<t<<", N = "<<i<<", # of different labelings = "<<a[i]<<'\n';
        t++;
        cin>>i;
    }
    return 0;
}
