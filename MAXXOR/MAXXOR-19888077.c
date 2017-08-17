#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l,r;
    cin>>l>>r;
    int x=l^r;
    int c=0;
    while(x){
        x=x>>1;
        c++;
    }
    cout<<(1<<c)-1;
    return 0;
}
