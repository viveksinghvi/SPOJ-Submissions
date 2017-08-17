#include <iostream>
using namespace std;
int main()
{
    long t;
    cin >>t;
    long n;
    long s=0;
    for (int i=0;i<t;i++){
            cin >> n;
            s=0;
            while(n){
                s=s+n/5;
                n=n/5;
            }
            cout<< s<<endl;
    }
    return 0;
}
