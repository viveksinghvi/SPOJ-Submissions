#include <iostream>

using namespace std;
int pal(int a){
    int t=a;
    int s=0;
    while(t){
        s=s*10;
        s+=t%10;
        t=t/10;
    }
    return s;
}
int d(int a,int b){
    int i=pal(a);
    int j=pal(b);
    return pal(i+j);
}
int main()
{
    int n;
    cin >>n;
    int a,b;
    for (int i=0;i<n;i++){
        cin >>a>>b;
        cout<< d(a,b)<<endl;
    }
    return 0;
}