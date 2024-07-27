#include<iostream>
using namespace std;

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int nCr(int n, int r)
{
    if(r==0)
    {
        return 1;
    }
    if (r==1)
    {
        return n;
    }
    if(n==r)
    {
        return 0;
    }
    int num=fact(n);
    int deno = fact(n)*(fact(n-r));
    int ncr = num/deno;
    return ncr;
}
int main()
{
    int n,r;
    cin>>n>>r;  
    int result = nCr(n,r);
    cout<<result;
    return 0;
}