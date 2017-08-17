#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
using namespace std;
vector<int> bits;
void hello(long long n)
  {
  for(int i=0;i<60;i++)
    if(  n&(1<<i))bits[i]++;

  }
void bye(long long n)
  {
  for(int i=0;i<60;i++)
    if(  n&(1<<i))bits[i]--;
  }

int main()
{
int t;
cin >>t;
while(t--)
  {
  vector<int> b;
  bits=b;
  for(int i=0;i<60;i++)bits.push_back(0);
  long long n,k;
  cin >>n;
  cin >>k;
  vector<long long> now;
  for(int i=0;i<n;i++)
    {
    long long  temp;
    cin >>temp;
    now.push_back(temp);
    }
   long long int temp=now[0];
  vector<long long > xx;
  if(2*k+1>=n)
    {
    int ans=now[0];
    for(int i=1;i<n;i++)ans=ans & now[i];
    for(int i=0;i<n;i++)cout<< ans<<" ";cout<<"\n";
    goto over;
    }
  hello(now[0]);
  for(int i=0;i<k;i++)
    {
    hello(now[now.size()-1-i]);
    hello(now[i+1]);
    }
  for(int i=0;i<n;i++)
    {
    long long num=0;

    for(int j=0;j<60;j++)
      if(bits[j]==2*k+1)
         num= num | (1<<j);
    xx.push_back(num);
    if(i==n-1)break;
    int p=i-k;
    if(i-k<0)p+=n;
    for(int j=0;j<60;j++)
    if(  now[p]&(1<<j))bits[j]--;
    p=(i+k+1)%n;
    for(int j=0;j<60;j++)
    if(  now[p]&(1<<j))bits[j]++;
    }
  for(int i=0;i<n;i++)
    cout<<xx[i]<<" ";cout<<"\n";
  over:;
  }
return 0;
}
