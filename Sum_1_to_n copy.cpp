#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"Enter n";
    cin>>n;
    while(i<=n)
    {
        cout<<i<<" ";
        sum+= i;
        i +=1;
    }
    cout<<"SUM ="<<sum;
}